/**
 * [GUEYE NDIAYE Modou]
 * [Lir sur une valeur horaire exprimee en secondes puis afficher cette valeur
 * sous la forme hh:mm:ss]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
/* to time
 * convertir une duree exprimee en secondes en une valeur horaire exprimee en 
 * hh:mm:ss
 * Entree : un reel de type entier
 * SOrtie : trois reels de type entier
 * AE : un reel de type entier
 * AS : Aucune
*/
void to_time(int secondes, int *heure, int *minute, int *seconde);


/* Fonction principale */

int main(void) {
  
  int heure, minute, seconde, secondes;
  printf("Veuillez saisir une valeur horaire exprimee en secondes :\n");
  assert(scanf("%d", &secondes) == 1);
  
  to_time(secondes, &heure, &minute, &seconde);
  printf("La valeur en hh:mm:ss de %d est : %02d:%02d:%02d", secondes, heure, minute
  , seconde);
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
void to_time(int secondes, int *heure, int *minute, int *seconde){
  *heure = secondes / 3600;
  *minute = (secondes % 3600) / 60;
  *seconde = secondes / 60;
}
