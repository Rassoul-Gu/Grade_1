/**
 * Équipe pédagogique BPI
 * Petit programme d'exemple sur les tableaux.
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * Affiche les éléments du tableau d'entier t de longueur length,
 * un élément par ligne.
 */
void print_int_array(const int *t, size_t length);

/**
 * Lit des éléments (des entiers) sur l'entrée standard et les stoke dans le
 * tableau t.
 * Lit au plus max_length éléments et sinon arrête la lecture sur le premier
 * caractère non blanc ne correspondant pas à l'écriture d'un entier (ou si
 * la fin de fichier est rencontrée).
 * Retourne le nombre d'éléments lus.
 */
size_t scan_int_array(int *t, size_t max_length);

#define ARRAY_MAX_LEN 10ul

int main(void) {
  printf("Veuillez entrer des valeurs entières (max %lu)\n", ARRAY_MAX_LEN);
  
  int t[ARRAY_MAX_LEN];
  size_t l = scan_int_array(t, sizeof t / sizeof t[0]);
  
  print_int_array(t, l);
  
  return EXIT_SUCCESS;
}

void print_int_array(const int *t, size_t length) {
  for (size_t k = 0; k < length; ++k) {
    printf("t[%zu] = %d\n", k, t[k]);
  }
}

size_t scan_int_array(int *t, size_t max_length) {
  size_t k = 0;
  while (k < max_length && scanf("%d", &t[k]) == 1) {
    ++k;
  }
  return k;
}

