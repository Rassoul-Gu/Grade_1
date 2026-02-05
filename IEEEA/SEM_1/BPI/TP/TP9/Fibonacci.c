/**
 * Auteur : GUEYE NDIAYE MOdou
 * Description : Lire ddeux valeurs entieres sur l'entree puis afficher le nombre de Fibonacci
 associe a son rang s'il est compris entre 0 et 46 ou <<ERREUR>> dans le cas contraoire
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
/* initialisation_fibo :Lire un tableau d'entiers puis initialiser ce tableau 
 * avec les termes de la suite de fibonacci
 * Entrees : tableeau d'entier
 * Sortie : Aucune
 * AE : tableau_fibo est un tableau de taille 47
 * AS : tableau_fibo[i] == F[]i
 */
void initialisation_fibo(int tableau_fibo[]);

/* Fonction principale */
int main(void) {
    int tableau_fibo[47];
    initialisation_fibo(tableau_fibo);

    int n;
    printf("Veuillez saisir un entier strictement positif :\n");
    if(scanf("%d", &n) == 1){
        if(n >= 0 && n < 47){
            printf("Le numero fibonacci de %d est : %d\n", n, tableau_fibo[n]);
        }else{
            fprintf(stderr,"Erreur : Entier non pris en charge par l'intervalle autorise.\n");
        }
    }else{
        fprintf(stderr,"Erreur : Erreur de saisie.\n");
    }
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
void initialisation_fibo(int tableau_fibo[]){
    tableau_fibo[0] = 0;
    tableau_fibo[1] = 1;
    for(size_t i = 2; i < 47; i++){
        tableau_fibo[i] = tableau_fibo[i - 1] + tableau_fibo[i - 2];
    }
}