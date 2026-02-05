/**
 * [GUEYE NDIAYE Modou]
 * [Calcule et affiche le maximum de trois valeurs saisies par l'utilisateur]
 */


/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */

/*max_if
 * retourne le max de deux valeurs
 * AE: Aucune
 * AS: max{a, b}
*/
int max_if(int x, int y);
int max_op(int x, int y);

/* Fonction principale */

int main(void) {
  int a, b, c;
  printf("Veuillez saisir 3 valeurs entieres :");
  if (scanf("%d %d %d", &a, &b, &c) != 3){
    fprintf(stderr,"Erreur de saisie!\n");
  } else {
    printf("Le maximum entre %d, %d et %d est : %d\n", a, b, c,
     max_if(max_if(a, b),c));
  }
  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
int max_if(int x, int y){
  if (x > y){
    return x;
  } else {
    return y;
  }
}

int max_op(int x, int y){
  return (x > y) ? x : y;
}
