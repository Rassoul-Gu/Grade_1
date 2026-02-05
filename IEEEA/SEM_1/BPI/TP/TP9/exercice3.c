/*
 * Auteur : GUEYE NDIAYE Modou
 * Description : Lire des valeurs entieres sur l'entree et qui affiche en sortie le nombre
 * d'entre elles dont l'ecriture se termine par 0,1,2,3,4,5,6,7,8,9 et qui se termine lorsque
 * la valeur entree n'est pas du format entier
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

/* Déclarations des fonctions et des macros */

/* Fonction principale */
int main(void) {

    // lecture d'un seul et unique entier
    int n;
    int dernier;
    int compte[11];
    printf("Veuillez saisir un entier positif :\n");
    while(scanf("%d", &n) == 1){
        dernier = n % 10;
        compte[dernier]++;
    }

    printf("Vous avez saisi :\n");
    for(int i = 0; i < 10; i++){
        if(compte[i] > 0){
            printf("%d `se terminant par %d.\n", compte[i], i);
        }
    }
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */