/**
 * [GUEYE NDIAYE Modou]
 * [Lire deux valeurs entieres sur l'entree puis afficher leur somme, leur 
 * produit, leur difference, leur quotient et leur moyenne]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */


/* Fonction principale */

int main(void) {
  printf("Veuillez saisir deux valeurs entieres :\n");
  
  int valeur_1, valeur_2;
  assert(scanf("%d %d", &valeur_1, &valeur_2) == 2);
  
  //La somme
  int somme = valeur_1 + valeur_2;
  
  //La difference
  int diff = valeur_1 - valeur_2;
  
  //le produit
  int produit = valeur_1 * valeur_2;
  
  //le quotient
  int quotient = valeur_1 / valeur_2;
  
  //la moyenne
  int moyenne = somme / 2;
  
  printf(
  "La somme est : %d\n"
  "La difference est : %d\n"
  "Le produit est : %d\n"
  "Le quotient est :%d\n"
  "La moyenne est : %d\n",
   somme, diff, produit, quotient,moyenne
   );
   
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
