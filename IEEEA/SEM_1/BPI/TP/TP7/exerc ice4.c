/**
 * Auteur : GUEYE NDIAYE Modou
 * Description : Lire un entier positif puis l'afficher a l'envers
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void) {
    int number;
    printf("Veuillez saisir un entier positif :\n");
    if(scanf("%d", &n) != 1 | n <= 0){
        fprtintf(stderr, "Erreur : Erreur de saisie");
        return EXIT_FAILURE;
    }

    while(n > 0){
        int envers = number % 10;
        n = n // 10;       
    }

    printf("L'entier %d saisi à l'envers est %d :\n", number, envers);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */