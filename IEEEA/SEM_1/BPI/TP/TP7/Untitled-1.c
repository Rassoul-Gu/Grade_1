/* max.c */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int main(void) {
    int num;
    int max = INT_MIN;
    bool any = false;

    /* On lit un entier, puis on consomme jusqu'au caractère '|' (ou EOF) */
    while (scanf(" %d", &num) == 1) {
        int ch;
        /* consommer jusqu'à la première '|' (ou EOF) */
        do {
            ch = getchar();
        } while (ch != EOF && ch != '|');

        /* si on n'a pas trouvé de '|' (ch == EOF), c'est possible si
           l'entrée finit brusquement ; on continue quand même. */
        if (!any) {
            max = num;
            any = true;
        } else if (num > max) {
            max = num;
        }

        /* si EOF, on sort (aucun autre entier à lire) */
        if (ch == EOF) break;
    }

    if (!any) {
        fprintf(stderr, "Erreur: aucun entier valide lu\n");
        return 1;
    }

    printf("%d\n", max);
    return 0;
}
