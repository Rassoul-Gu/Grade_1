/* [Nom du programme]
 * [Date de Création]
 * [Auteur(s)/Auteure(s)]
 * [Descriptif du programme ]
 */


/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#define NB_MAX 46

/* Déclarations des fonctions et des macros */
/*initialisation_fibo :
 * Entree :
 * Sortie :
 * AE :
 * AS :
 * IB :
 */
 void initialisation_fibo (int u[], size_t n) ;

/* Fonction principale */

int main(void) {
	int u[NB_MAX + 1] ;
	initialisation_fibo (u, NB_MAX + 1) ;
  int n ;
  printf("Entrez un nombre compris entre 0 et 46 : \n") ;
  while (scanf("%d", &n) == 1) {

    if(n >= 0 && n <= 46) {
      printf ("u[%d] = %d\n", n, u[n]) ;
    } else {
      printf("l'entier saisie est non compris entre 0 et 46\n") ;
    }
  }
  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
 void initialisation_fibo (int u[], size_t n) {

   assert(n > 0 && n <= NB_MAX + 1) ;

	 u[0] = 0 ;
	 u[1] = 1 ;

	 for(size_t k = 2; k < n; ++k) {
		 u[k] = u[k - 1] + u[k - 2]  ;
	 }

}





