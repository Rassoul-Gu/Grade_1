/**
 * Équipe pédagogique BPI
 * Petit programme d'exemple sur la fonction strncat.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define STR_MAX_SZ 50

int main(void) {
  char dst[STR_MAX_SZ] = "Bonjour";
  
  const char *src = " tout le monde";
  strncat(dst, src, sizeof dst - strlen(dst) - 1);
  printf("%s\n", dst);
  
  return EXIT_SUCCESS;
}
