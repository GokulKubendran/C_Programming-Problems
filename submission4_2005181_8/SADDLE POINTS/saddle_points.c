#include "saddle_points.h"
#include <stdlib.h>

saddle_points_t *saddle_points(int rows, int cols, uint8_t matrix[rows][cols])
{
    saddle_point_t *points = (saddle_point_t *) malloc(rows * cols * sizeof(saddle_point_t));
    uint8_t *saddle = NULL;
    int count = 0;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            if (saddle != NULL && (*saddle) != matrix[i][j]) {
                continue;
            }
            if (is_saddle_point(rows, cols, matrix, i, j)) {
                if (saddle == NULL) {
                    saddle = &matrix[i][j];
                }
                points[count++] = (saddle_point_t) {i+1, j+1};
            }
        }
    }
    saddle_points_t *saddle_points = (saddle_points_t *) malloc(sizeof(saddle_points_t));
    saddle_points->count = count;
    saddle_points->points = points;
    return saddle_points;
}

bool is_saddle_point(int rows, int cols, uint8_t matrix[rows][cols], int r, int c)
{
    for (int i=0; i<rows; i++) {
        if (matrix[r][c] > matrix[i][c]) {
            return false;
        }
    }
    for (int j=0; j<cols; j++) {
        if (matrix[r][c] < matrix[r][j]) {
            return false;
        }
    }
    return true;
}

void free_saddle_points(saddle_points_t *saddle_points)
{
    free(saddle_points->points);
    free(saddle_points);
}
