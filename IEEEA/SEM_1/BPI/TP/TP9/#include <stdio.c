#include <stdio.h>
#include <stdlib.h>

/* Fonction qui met à jour le tableau de comptage */
void mise_a_jour(int compte[], int n) {
    int dernier = abs(n % 10);   /* dernier chiffre */
    compte[dernier]++;           /* incrémentation */
}

int main(void) {
    int compte[10] = {0};        /* tableau de comptage 0..9 initialisé à 0 */
    int n;

    /* Lecture jusqu'à ce que scanf NE puisse plus lire un entier */
    while (scanf("%d", &n) == 1) {
        mise_a_jour(compte, n);  /* mise à jour du tableau */
    }

    /* Affichage des résultats */
    printf("Vous avez saisi :\n");
    for (int i = 0; i < 10; i++) {
        if (compte[i] > 0) {
            printf("%d nombre%s se terminant par %d\n",
                   compte[i],
                   (compte[i] > 1 ? "s" : ""), /* gestion pluriel */
                   i);
        }
    }

    return 0;
}
