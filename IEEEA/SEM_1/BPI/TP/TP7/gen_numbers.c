/**
 * [GUEYE NDIAYE Modou]
 * [Descriptif du programme ]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void) {
  int n;
  printf("Veuillez saisir un entier positif :\n");
  if(scanf("%d", &n) != 1){
    fprintf(stderr,"Erreur de saisie : Vous devez saisir une seule et unique valeur.\n");
    return EXIT_FAILURE;
  }
  if (n < 0){
    fprintf(stderr,"Erreur de saisie : La valeur saisie doit etre strictement positif.\n");
    return EXIT_FAILURE;

  }

  for (int i = 0; i < n; i++){
    int number = rand() % 21;
    printf("%02d", number);
    printf(" | ");
  }
  printf("\n");
  
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
