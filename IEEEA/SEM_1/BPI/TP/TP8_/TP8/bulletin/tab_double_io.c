#include <stdio.h>
#include <stdlib.h>

#include "ue.h"

void print_tab_double(double t[], size_t n) {
  /* Invariant de boucle :
   * k <= n && t[0] ..., t[k - 1] ont été affichés 
   */
  for (size_t k = 0; k < n; ++k) {
    printf("%.2lf ", t[k]);
  }
  printf("\n");
}

size_t scan_tab_double(double t[], size_t capacity) {
  size_t n = 0;
  double x;
  /* Invariant de boucle:
   * tous les éléments de t[0..n-1] ont été saisis && n <= capacity 
   */
  while (scanf("%lf", &x) == 1) {
    if (n >= capacity) {
      return ERR_CAP;
    }
    t[n] = x;
    ++n;
  }
  fgetc(stdin);
  return n;
}
