/**
 * Auteur : GUEYE NDIAYE Modou
 * Description : Lire une valeur exprimer en secondes sur l'entree puis calculer
 *  et afficher la valeur en heure minute seconde
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void) {
    int d, h, m, s;
    printf("Veuillez saisir une valeur entiere :\n");
    assert(scanf("%d", &d) == 1 && d >= 0);

    h = d / 3600;
    m = (d % 3600) / 60;
    s = d % 60;

    printf("%02d : %02d : %02d \n", h, m, s);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
