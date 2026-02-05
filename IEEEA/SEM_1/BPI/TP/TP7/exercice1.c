/**
 * Auteur : GUEYE NDIAYE Modou
 * Description : Demander un entier n compris entre 1 et 120 verifier si c'est 
 * dans l'intervalle puis redemander un autre sinon et si c'est pas un entier 
 * renvoyer un EXIT_FAILURE puis afficher les nombre allant de 1 a n sur la
 * diagonale en mettant le chiffre le plus a gauche(pour n >= 10)
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
int nb_digits(int n);

/* Fonction principale */
int main(void) {
    int n;
    int i = 1;
    do {
      printf("Veuillez entrer un entier n compris entre 1 et 120 :\n");
      assert(scanf("%d", &n) == 1);
      if (n < 1){
        fprintf(stderr, "Erreur : La valeur saisie n'est pas un entier.\n");
        return EXIT_FAILURE;
      }
      if (!(n >= 1 && n <= 120)) {
        printf("L'entier saisi depasse l'intervalle autorisee. Veuillez reessayer :\n");
      }
    } while (!(n >= 1 && n <= 120));
      printf("Entier accepte.\n");
    /* Invariant de boucle
     * i >= 1 && i <= n 
     * Pour tout i compris entre 10 et n le premier chiffre de i est affiche en 
     * colonne i
    */
    while (i <= n) {
        printf("%*d\n", i + nb_digits(i) - 1, i);
        i++;
    }
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
int nb_digits(int n){
  int i = 1;
  while (n >= 10){
    n = n / 10;
    i++;
  }
  return i;
}
