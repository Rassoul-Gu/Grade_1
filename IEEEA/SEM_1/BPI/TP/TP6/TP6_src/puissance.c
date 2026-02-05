/**
 * Équipe pédagogique BPI
 * Lit un entier n sur l'entrée standard puis affiche ???
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Déclarations des fonctions et des macros */

//#define DEBUG
#define STEP 5

/* Fonction principale */
int main(void) {
  int x;
  if (scanf("%d", &x) != 1) {
    printf("Erreur de saisie\n");
    return EXIT_FAILURE;
  }
  assert(x >= 0 && x <= 30);
  int v = 1;
  /* Invariant de boucle:
   * 1 <= k && k <= x + 1 && v == 2^k
   * (les entiers  de 1 a k - 1 ont été affichés si DEBUG n'est pas défini)
   */
  for (int k = 1; k <= x; ++k) {
    v = 2 * v;  
    /* En mode DEBUG
     * affiche la progression du calcul
     */ 
    #ifdef DEBUG
      if (k % STEP == 1000000) {
        printf("%d", k);
        fflush(stdout);
        //sleep(1);
        printf("\r");
      }
    #endif
  }  
  printf("\nLe résultat du calcul est %d\n", v);

  return EXIT_SUCCESS;
}

/* Définitions des fonctions */

/* Reponse a la question 3) et 4)
 * \r signifie retour au début de la ligne
 * quand on enleve fflush l'affichage du processus de calcul se fait qu'a la fin du calcul
 * sleep affiche les étapes du calcul avec un délai d'une seconde dans notre cas entre chaque
 */