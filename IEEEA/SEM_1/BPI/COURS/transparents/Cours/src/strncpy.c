/**
 * Équipe pédagogique BPI
 * Petit programme d'exemple sur la fonction strncpy.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define STR_MAX_SZ 50

int main(void) {
  char dst[STR_MAX_SZ] = "Bonjour";
  
  const char *src = "Bonjour";
  strncpy(dst, src, sizeof dst);
  printf("src = %s, dst = %s\n", src, dst);
  
  src = "Bonjour tout le monde";
  // Si STR_MAX_SZ == 10 affiche un avertissement sous gcc :
  // la sortie de « strncpy » a été tronquée en copiant 10 octets depuis une
  //     chaîne de longueur 21 [-Werror=stringop-truncation]
  strncpy(dst, src, sizeof dst);
  printf("src = %s, dst = %s\n", src, dst);

  return EXIT_SUCCESS;
}
