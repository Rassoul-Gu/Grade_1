/**
 * [GUEYE NDIAYE Modou]
 * [Lire une valeur exprimee en heures:minutes:secondes puis afficher sur
 * la sortie en secondes]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */

int main(void) {
  int h, m, s, secondes_totales;
  printf("Veullez entrer une heure sous la forme hh:mm:ss :\n");
  assert(scanf("%d:%d:%d", &h, &m ,&s) == 3);
  assert(h >= 0 && h <= 23);
  assert(m >= 0 && m <= 59);
  assert(s >= 0 && s <= 59);
  
  secondes_totales = h * 3600 + m * 60 + s;
  printf("Le nombre de secondes totales est : %d\n", secondes_totales);
  
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
