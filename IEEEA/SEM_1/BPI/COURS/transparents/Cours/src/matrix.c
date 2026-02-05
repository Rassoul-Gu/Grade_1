/**
 * Équipe pédagogique BPI
 * Petit programme d'exemple sur les tableaux à deux dimensions.
 */

#include <stdlib.h>
#include <stdio.h>

#define PRINT_MATRIX_VERSION_COURS

#ifdef PRINT_MATRIX_VERSION_COURS
void print_matrix(const int mat[][5], size_t rows);
#else
void print_matrix(size_t rows, size_t columns, const int (*mat)[columns]);
#endif

int main(void) {
  int mat[][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
  };
  
  #ifdef PRINT_MATRIX_VERSION_COURS
  print_matrix(mat, 4);
  #else
  print_matrix(sizeof mat / sizeof mat[0],
      sizeof mat[0] / sizeof mat[0][0],
      mat);
  #endif
  
  return EXIT_SUCCESS;
}

#ifdef PRINT_MATRIX_VERSION_COURS
void print_matrix(const int mat[][5], size_t rows) {
    for (size_t k = 0; k < rows; ++k) {
    for (size_t j = 0; j < 5; ++j) {
      printf("%5d", mat[k][j]);
    }
    printf("\n");
  }
}
#else
void print_matrix(size_t rows, size_t columns, const int (*mat)[columns]) {
    for (size_t k = 0; k < rows; ++k) {
    for (size_t j = 0; j < columns; ++j) {
      printf("%5d", mat[k][j]);
    }
    printf("\n");
  }
}
#endif
