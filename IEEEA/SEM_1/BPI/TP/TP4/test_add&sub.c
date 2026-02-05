/**
 * Auteur : GUEYE NDIAYE MODOU
 * Description : teste les fonctions d'addition et de soustraction d'une seconde
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "timeio.h"

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void) {
    int heure, minute, seconde;
    printf("Veuillez entrer une heure sous le format hh:mm:ss :\n");
    assert(scanf("%d:%d:%d", &heure, &minute, &seconde) == 3);
    //printf("Heure avant addition : %02d:%02d:%02d\n", heure, minute, seconde);
    //add_1s(&heure, &minute, &seconde);
    //printf("Heure après addition d'une seconde : %02d:%02d:%02d\n", heure, minute, seconde);
    sub_1s(&heure, &minute, &seconde);
    printf("Heure après soustraction d'une seconde : %02d:%02d:%02d\n", heure, minute, seconde);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */