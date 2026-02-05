/**
 * [GUEYE NDIAYE Modou]
 * [Lire une valeur horaire exprimee sous la forme hh:mm:ss puis afficher cette 
 * valeur en secondes]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
/* to_sec
 * convertir une valeur horaire hh:mm:ss en une valeur horaire en secondes
 * Entree : trois valeurs de type entier
 * Sortie : une valeur de type entier
 * AE : Aucune
 * AS : secondes == heure * 3600 + minute * 60 + seconde
*/
int to_sec(int heure, int minute, int seconde);


/* Fonction principale */

int main(void) {
  
  int heure , minute, seconde, secondes;
  printf("Veuille saisir une valeur horaire sous la forme hh:mm:ss :\n");
  assert(scanf("%d:%d:%d", &heure, &minute, &seconde) == 3);
  secondes = to_sec(heure, minute, seconde);
  printf("La valeur en secondes de %d:%d:%d est : %d", heure, minute,
   seconde, secondes);
   
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
int to_sec(int heure, int minute, int seconde){
    int secondes = heure * 3600 + minute * 60 + seconde;
    return secondes;
}
