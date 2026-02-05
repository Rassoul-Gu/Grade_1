/**
 * [GUEYE NDIAYE Modou]
 * [Afficher la  moyenne de quatres valeurs reelles donneees enm entree]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
double moyenne(double valeur_1, double valeur_2);

/* Fonction principale */

int main(void) {
  double valeur_1, valeur_2, valeur_3, valeur_4;
  printf("Veuillez saisir quatres valeurs reelles : \n");
  assert(scanf("%lf %lf %lf %lf", &valeur_1, &valeur_2, &valeur_3, &valeur_4) == 4);
  double resultat = moyenne(moyenne(valeur_1, valeur_2),moyenne(valeur_3, valeur_4));
  printf("La moyenne de %lf, %lf, %lf et %lf est : %.2lf", valeur_1, valeur_2,
   valeur_3, valeur_4, resultat);
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
double moyenne(double valeur_1, double valeur_2){
  double moyenne = (valeur_1 + valeur_2) / 2;
  return moyenne;
}
