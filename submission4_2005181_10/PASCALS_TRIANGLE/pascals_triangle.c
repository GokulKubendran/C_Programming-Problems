#include "pascals_triangle.h"

// Helpers

static void build_rows(size_t **triangle, size_t size)
{
  if (!triangle) {
    return;
  }
  // Initialize the first row
  triangle[0][0] = 1;

  // Build each row from the values of the last row.
  for (size_t i = 1; i < size; ++i) {
    // First value
    triangle[i][0] = 0 + 1;
    // Pairwise summation of previous row for the middle values, ie. nextRow
    for (size_t j = 1; j < i; ++j) {
      triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
    // Last value
    triangle[i][i] = 1 + 0;
  }
}

static inline size_t sumto(int n) { return n * (n + 1) / 2; }

// Public API

size_t **create_triangle(int rows)
{
  size_t **triangle;

  // Bad Value
  if (rows < 0) {
    return NULL;
  }
  // Zero Triangle
  if (!rows) {
    triangle = calloc(1, sizeof(size_t *) + sizeof(size_t));
    if (!triangle) {
      return NULL;
    }
    // Cheat. 16 bytes. First machine word points to second machine word
    *triangle = (size_t *) (triangle + 1);
    return triangle;
  }
  // Normal modus operandi
  triangle = calloc(1, sizeof(size_t *) * rows + sizeof(size_t) * sumto(rows));
  if (!triangle) {
    return NULL;
  }
  size_t *row = (size_t *) (triangle + rows);
  // `triangle` to `triangle + rows` is the address range for our size_t pointers.
  // `row` to `row + sumto(rows)` is the address range for our size_t arrays.
  for (size_t i = 0; i < (size_t) rows; ++i) {
    row += i;
    *(triangle + i) = row;
  }
  build_rows(triangle, rows);
  return triangle;
}

void free_triangle(size_t **triangle, size_t length)
{
  (void) length;
  if (triangle) {
    free(triangle);
  }
}
