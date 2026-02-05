/**
 * Équipe pédagogique BPI
 * Exemple de scanf.
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main(void) {
  printf("Entrez un pourcentage :\n");
  double x;
  assert(scanf("%lf %%", &x) == 1);
  printf("Vous avez entré : %.0lf%%\n", x);

  return EXIT_SUCCESS;
}
