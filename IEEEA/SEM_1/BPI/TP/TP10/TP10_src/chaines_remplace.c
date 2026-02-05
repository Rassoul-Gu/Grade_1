/**
 * Equipe pédagogique BPI.
 * Remplace une lettre par une autre dans une chaine.
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>

/* Déclarations des fonctions et des macros */
#define MAX 32
#define xstr(s) str(s)
#define str(s) #s

/* remplace
 * Remplace toutes les occurrences de c1 par c2 dans la chaîne s
 * Entrées : s une chaîne de caractères (char *),
 *           c1 et c2 deux caractères (type char)
 * Sortie : aucune
 * AE : s est une chaîne de caractère valide
 * AS : s est la chaîne old(s) dans laquelle toutes les occurrences de c1
 * ont été remplacées par les occurrences de c2
 */
void remplace(char *s, char c1, char c2);

int main(void) {
  printf("Saisissez un mot et un caractère à remplacer, "
         "puis celui par lequel vous souhaitez le remplacer\n");

  char mot[MAX + 1];
  char c1, c2;
  if (scanf("%"xstr(MAX)"s %c %c", mot, &c1, &c2) != 3) {
    printf("Erreur de saisie\n");
    return EXIT_FAILURE;
  }
  
  remplace(mot, c1, c2);
  printf("%s\n", mot);
  return EXIT_SUCCESS;
}

/* Définitions des fonctions*/
/*
void remplace(char *s, char c1, char c2) {
  size_t k = 0;
  //Invariant de boucle
  //0 <= k && s[0..k-1] ne contient pas '\0' 
  //&& s[0..k-1] est la chaîne old(s[0...k-1]) dans laquelle
  //on a remplacé toutes les occurrences de c1 par c2
  //
  ???
}
*/
