/**
 * Équipe pédagogique BPI
 * Exemple d'une implantation de strlen.
 */

#include <stdlib.h>
#include <stdio.h>

#define STR_MAX_LEN 10
#define STR_MAX_LEN_S "10"

size_t my_strlen(const char *s);

int main(void) {
  printf("Entrez un mot :\n");
  char s[STR_MAX_LEN + 1];
  if (scanf("%" STR_MAX_LEN_S "s", s) != 1) {
    fprintf(stderr, "erreur de lecture\n");
    exit(EXIT_FAILURE);
  }

  printf("Le mot %s est de longueur %zu\n", s, my_strlen(s));

  return EXIT_SUCCESS;
}

size_t my_strlen(const char *s) {
  size_t l = 0;
  while (s[l] != '\0') {
    ++l;
  }
  return l;
}
