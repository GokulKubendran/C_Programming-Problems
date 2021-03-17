#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "robot_simulator.h"

/* Initializers */

robot_grid_status_t robot_init(void)
{
  return (robot_grid_status_t) {
    (bearing_t) DEFAULT_BEARING,
      (robot_coordinates_t) {
        DEFAULT_X_COORDINATE,
        DEFAULT_Y_COORDINATE
      }
  };
}

robot_grid_status_t robot_init_with_position(bearing_t bearing, int x, int y)
{
  if (bearing < HEADING_NORTH || bearing >= HEADING_MAX) {
    bearing = (bearing_t) DEFAULT_BEARING;
  }
  return (robot_grid_status_t) { bearing, (robot_coordinates_t) { x, y } };
}



/* Bearing */

typedef struct {
  bearing_t left;
  bearing_t right;
} bearing_neighbors_t;

/* Bearing Common */

static bearing_neighbors_t invalid_neighbors()
{
  return (bearing_neighbors_t) { HEADING_MAX, HEADING_MAX };
}

static bool neighbors_eq(bearing_neighbors_t n1, bearing_neighbors_t n2)
{
  return (n1.left == n2.left && n1.right == n2.right);
}

static bool valid_neighbors(bearing_neighbors_t neigh)
{
  return !neighbors_eq(neigh, invalid_neighbors());
}



static bearing_neighbors_t neighbors(bearing_t bearing)
{
  switch (bearing)
    {
    case HEADING_NORTH:
      return (bearing_neighbors_t) { HEADING_WEST , HEADING_EAST  };
    case HEADING_EAST:
      return (bearing_neighbors_t) { HEADING_NORTH, HEADING_SOUTH };
    case HEADING_SOUTH:
      return (bearing_neighbors_t) { HEADING_EAST , HEADING_WEST  };
    case HEADING_WEST:
      return (bearing_neighbors_t) { HEADING_SOUTH, HEADING_NORTH };
    case HEADING_MAX:
      fprintf(stderr, "HEADING_MAX is an illegal bearing for a robot.");
      return (bearing_neighbors_t) { HEADING_MAX , HEADING_MAX };
    default:
      fprintf(stderr, "%i: outside of range for bearing_t enumeration.", bearing);
      return (bearing_neighbors_t) { HEADING_MAX , HEADING_MAX };
    }
}



/* Bearing Public */

void robot_turn_right(robot_grid_status_t * robot)
{
  if (!robot) {
    fprintf(stderr, "robot_turn_right: received NULL robot_grid_status_t*");
    return;
  }
  bearing_neighbors_t neigh = neighbors(robot->bearing);
  /* Error message was already handled by `neighbors' for invalid cases */
  if (valid_neighbors(neigh)) {
    robot->bearing = neigh.right;
  }
}

void robot_turn_left(robot_grid_status_t * robot)
{
  if (!robot) {
    fprintf(stderr, "robot_turn_left: received NULL robot_grid_status_t*");
    return;
  }
  bearing_neighbors_t neigh = neighbors(robot->bearing);
  /* Error message was already handled by `neighbors' for invalid cases */
  if (valid_neighbors(neigh)) {
    robot->bearing = neigh.left;
  }
}



/* Transport */
void robot_advance(robot_grid_status_t * robot)
{
  if (robot) {
    switch (robot->bearing)
      {
      case HEADING_NORTH:
        robot->grid.y_position += 1;
        break;
      case HEADING_EAST:
        robot->grid.x_position += 1;
        break;
      case HEADING_SOUTH:
        robot->grid.y_position -= 1;
        break;
      case HEADING_WEST:
        robot->grid.x_position -= 1;
        break;
      case HEADING_MAX:
        fprintf(stderr, "HEADING_MAX is an illegal bearing for a robot.");
        break;
      default:
        fprintf(stderr, "%i: outside of range for bearing_t enumeration.", robot->bearing);
      }
  } else {
    fprintf(stderr, "robot_advance: received NULL robot_grid_status_t*");
  }
}



/* Driver */

void robot_simulator(robot_grid_status_t * robot, const char *commands)
{
  if (!robot || !commands) {
    fprintf(stderr, "`robot_simulator': received NULL pointer");
  }

  while (*commands) {
    switch (*commands++)
      {
      case COMMAND_LEFT:
        robot_turn_left(robot);
        break;
      case COMMAND_RIGHT:
        robot_turn_right(robot);
        break;
      case COMMAND_ADVANCE:
        robot_advance(robot);
        break;
      default:
        fprintf(stderr, "invalid command: %c", *(commands - 1));
      }
  }
}
