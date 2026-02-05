/**
 * [GUEYE NDIAYE MODOU]
 * Calcule et affiche la factorielle d'un entier saisi par l'utilisateur
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

/* Déclarations des fonctions et des macros */

/* fact:
 * calcule et renvoie la factorielle de l'entier passé en paramètre
 * Entrée: n de type int
 * Sortie: un type int
 * AE: un entier n >= 0 && n! <= INT_MAX
 * AS: fact == n! == n * (n - 1) * (n - 2) * ..... * 1
 */
int fact(int n);

/* Fonction principale */
int main(void) {
  int n;
  printf("Entrer un entier positif n : \n");
  assert(scanf("%d", &n) == 1);
  assert(n >= 0); 
  
  printf("Le factioriel de %d est : %d.\n", n, fact(n));
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */

int fact(int n) {
  /* Invariant de boucle :
   * 0 <= k && k <= n && f == k!
   */
  int f = 1; // valeur de 0!
  for (int k = 0; k < n; k++) {
    assert(f <= INT_MAX / (k + 1));
    f *= k + 1;
  }
  return f;
}
