/**
 * Equipe pédagogique BPI
 * sur l'utilisation des tableaux dans les expressions
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
  int t[20];
  assert(scanf("%d", t) == 1);
  printf("valeur saisie : %d\n", *t);
  char tc[8];
  assert(scanf("%ld", (long *) tc) == 1);
  printf("valeur saisie : %ld\n", *(long *) tc);
  printf("valeur saisie : %c%c%c%c%c%c\n", tc[0], tc[1], tc[2], tc[3], tc[4],
      tc[5]);
  printf("valeur saisie : %c\n", *tc);
  return EXIT_SUCCESS;
}



