/**
 * Equipe pédagogique BPI
 * sur le passage des tableaux dans les fonctions
 */

#include <stdio.h>
#include <stdlib.h>

/* Déclarations des fonctions et des macros */

/* taille
 * renvoie la taille d'une variable de type int[] passée en paramètre
 * Entrée : t de type int[]
 * Sortie : une valeur de type size_t
 * AE : aucune
 * AS : 
 */
size_t taille(int t[]);

// Fonction principale 
int main(void) {
  int t[20];
  printf("taille de la variable t dans main : %zu\n", sizeof(t));
  printf("taille de la variable t dans la fonction taille %zu\n", taille(t));
  return EXIT_SUCCESS;
}

// Definitions des fonctions
size_t taille(int t[]) {
  return sizeof(t);
}
