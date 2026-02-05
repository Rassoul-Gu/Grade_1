/**
 * [GUEYE NDIAYE Modou]
 * [Lire a l'entree deux valeurs entieres et afficher leur somme]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */

int main(void) {
  printf("Entrer deux valeurs entieres :\n");
  
  int k, j;
  assert(scanf("%d %d", &k, &j) == 2);
  //scanf("%d", &k);
  int somme = k + j;
  
  printf("La somme des deux valeurs entieres entrees est : %d\n", somme);
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
