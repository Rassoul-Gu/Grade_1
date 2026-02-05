/**
 * Auteur : GUEYE NDIAYE MODOU
 * Description : Resoudre une equation du second degre dont tous les coeficients sont des reels 
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */
int main(void) {

    double a, b, c;
    double delta, x_1, x_2;
    printf("Entrer les coeficients a, b et c de l'equation du second degre (a*x^2 + b*x + c = 0) : ");
    assert(scanf("%lf %lf %lf", &a, &b, &c) == 3);


    delta = b * b - 4 * a * c;
    if (delta == 0) {
        double x = -b / 2 * a;
        printf("L'equation admet une solution double : x = %.2lf\n", x);
    } else if (delta > 0) {
        x_1 = (-b - sqrt(delta)) / (2 * a);
        x_2 = (-b + sqrt(delta)) / (2 * a);
        printf("L'equation admet deux solutions reelles distinctes : x1 = %.2lf et x2 = %.2lf\n", x_1, x_2);
    } else {
        printf("L'equation n'admet pas de solution reelle mais des solutions complexes.\n");
        //x_1 = (-b - sqrt(fabs(delta))) / (2 * a);
        //x_2 = (-b + sqrt(fabs(delta))) / (2 * a);
        printf("Les solutions complexes sont : x1 = %.2lf - iv|%.2lf| et x2 = %.2lf + iv|%.2lf|\n", b, delta, b, delta);
    }

    return EXIT_SUCCESS;
}

/* Définitions des fonctions */