#ifndef SADDLE_POINTS_H
#define SADDLE_POINTS_H
#include <stdint.h>
#include <stdbool.h>

typedef struct saddle_point {
    int row;
    int column;
} saddle_point_t;

typedef struct saddle_points {
    int count;
    saddle_point_t *points;
} saddle_points_t;

saddle_points_t *saddle_points(int rows, int cols, uint8_t matrix[rows][cols]);
bool is_saddle_point(int rows, int cols, uint8_t matrix[rows][cols], int r, int c);
void free_saddle_points(saddle_points_t *saddle_points);

#endif
