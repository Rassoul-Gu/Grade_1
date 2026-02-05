/**
 * [GUEYE NDIAYE Modou]
 * [Lire une annee qui doit etre superieure a 1582 pui dire si elle est bissextile ou pas ]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

/* Déclarations des fonctions et des macros */
bool est_bissectile(int a);
int nb_jours(int mois, int annee);

/* Fonction principale */

int main(void) {
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
bool est_bissextile(int annee){
  assert(annee > 1582);
  if (((annee % 4 == 0) && (annee % 100 != 0)) || (annee % 400) == 0){
    return true;
  } else {
    return false;
  }
}

int nb_jours(int mois, int annee){
  assert(mois >= 1 && mois <= 12);
  if (mois == 2){
    if (est_bissectile(annee)){
      return 29;
    } else {
      return 28;
    }
  }
  else if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12){
    return 31;
  } else {
    return 30;
  }
}
