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
    if(scanf("%d", &number) != 1 || number <= 0){
        fprintf(stderr, "Erreur : Erreur de saisie");
        return EXIT_FAILURE;
    }

    int reverse;
    while(number > 0){
        reverse = number % 10;
        printf("%d", reverse);
        number = number / 10;       
    }
    printf("L'entier %d saisi à l'envers est %d :\n", number, reverse);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */