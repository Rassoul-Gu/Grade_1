/**
 * Auteur : GUEYE NDIAYE MODOU
 * Description : Definir des mamacros et les tester dans un programme
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
//#define NDEBUG
#ifndef NDEBUG
#define TRIE(x,y) {                     \
    trie(x, y);                         \
    printf("\na=%d b=%d c=%d d=%d", a, b, c, d);\
}
#else
#define TRIE(x,y) trie(x, y);
#endif // NDEBUG
/* trie
 * trie et permute les valeurs pointées par a et b
 */
void trie(int *a, int *b);


/* Fonction principale */
int main(void) {
    int a, b, c, d;
    printf("Entrez trois entiers : \n");
    assert(scanf("%d %d %d %d", &a, &b, &c, &d) == 4);  
    TRIE(&a, &b);
    TRIE(&a, &c);
    TRIE(&a, &d);
    TRIE(&b, &c);
    TRIE(&b, &d);
    TRIE(&c, &d);
    assert(a <= b && b <= c && c <= d);
    printf("\nLes valeurs triées dans l'ordre croissant : a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
void trie(int *a, int *b) {
    int temp_a = *a;
    int temp_b = *b;
    *a = MIN(temp_a, temp_b);
    *b = MAX(temp_a, temp_b);
}