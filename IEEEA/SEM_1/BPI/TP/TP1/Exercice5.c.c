/**
 * Auteur : GUEYE NDIAYE Modou
 * Description : Descriptif du programme
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void) {

    int p, q;
    float x, y;
    
    printf("Veuillez saisir deux entiers et deux reels :\n");
    assert(scanf("%d %d %f %f", &p, &q, &x, &y) == 4);
    y = (float)p * x / (float)q;

    printf("Le resultat est : %.2f", y);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
