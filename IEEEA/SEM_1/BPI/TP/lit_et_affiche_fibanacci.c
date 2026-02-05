/* lit_et_affiche: lit des valeurs entières sur l’entrée
 * 29/11/2024
 * Hurault paola
 * lit des valeurs entières sur l’entrée
et qui, pour chacune d’elles, affiche le nombre de Fibonacci associé à son rang 
* s’il est compris entre
0 et 46
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
/*initialistion_fibo: elle prend en paramètre un tableau d'entiers, et l'initia
 * lise avec les termes de Fn
 * Entrées: un tableau
 * Sortie: void
 * AE: a est un tableau d'entier de taille 47
 * AS: a[i]==Fi
 * 
*/
void initialisation_fibo (int a[]);

/* Fonction principale */

int main(void) {
  int a[47];
  initialisation_fibo(a);
  
  int n;
  while (scanf("%d", &n) == 1) {
    if (0 <= n && n <= 46) {
      printf("son nombre de fibonacci est: %d\n", a[n]);
    } else {
      printf("ERREUR"); 
    }
  }     
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
void initialisation_fibo (int a[]){
  a[0] = 0;
  a[1] = 1;
  for(size_t k = 2;k < 47; ++k){
    a[k] = a[k - 1] + a[k -2];
  }
}   
