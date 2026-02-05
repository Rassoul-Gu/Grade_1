/**
 * Equipe pédagogique BPI.
 * Compte le nombre d'occurrences d'une lettre dans un mot.
 */
 
/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>

/* Déclarations des fonctions et des macros */

#define MAX 32
#define xstr(s) str(s)
#define str(s) #s

/* nb_occurrences
 * calcule et renvoie le nombre d'occurrences d'une lettre c
 * dans une chaîne s
 * Entrées : ??
 * Sortie : ??
 * AE :??
 * AS : ??
 */
size_t nb_occurrences(const char *s, char c);

/* Fonction principale */
int main(void) {
  printf("Saisissez un mot et un caractère \n");

  char mot[MAX + 1];
  char c;
  if (scanf("%"xstr(MAX)"s %c", mot, &c) != 2) {
    printf("Erreur de saisie\n");
    return EXIT_FAILURE;
  }
  printf("Il y a %zu fois %c dans %s \n", nb_occurrences(mot, c), c, mot);

  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
/*
size_t nb_occurrences(const char *s, char c){
  
  size_t k = ??;
  size_t occ = ??;
  
  // Invariant de Boucle:
  //  0 <= occ && occ <= k &&
  //  s[0,..,k-1] ne contient pas le caractère '\0'&&
  //  occ = nombre d'occurrences de c dans s[0,...,k-1]
  //
 ???  
  return occ;
}
*/
