/**
 * Équipe pédagogique BPI
 * Exemple de printf.
 */

#include <stdlib.h>
#include <stdio.h>

int main(void) {
  long int n = 1l;
  long long int k = 1llu;
  long double x = 1.0L;
  
  printf ("%ld + %llu = %Lf ?\n", n, k, x);

  return EXIT_SUCCESS;
}
