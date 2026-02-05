/* [Nom du programme]
 * [Date de Création]
 * [Auteur(s)/Auteure(s)]
 * [Descriptif du programme ]
 */


/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



/* Déclarations des fonctions et des macros */
/*affiche_decimale :
 * Entree :
 * Sortie :
 * AE :
 * AS :
 * IB :
 */
 void affiche_decimale (int t[], int n) ;

/* Fonction principale */

int main(void) {
	int t[10]  ;
	size_t n = 10;
    int k ;
	printf("Entrez des nombres : \n") ;

	while(scanf("%d", &k) == 1) {
		affiche_decimale (t, k) ;
	}

	for(size_t i = 0; i < n; ++i) {
		if(t[i] > 0) {
			printf("%d nombre se terminant par %zu\n", t[i], i) ;
		}
	}

  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
 void affiche_decimale (int t[], int n) {
	 int s = n % 10 ;
	 ++t[s] ;
}
