/**
 * Équipe pédagogique BPI
 * Lit sur l'entrée standard un nombre de seconde
 * et renvoie sur la sortie standard cette durée sous
 * la forme heure:minute:seconde
 */

/* Appel des bibliothèques */
#include "timeio.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



/* Déclarations des fonctions */

/* Fonction principale */
int main(void) {
  
  int seconds;
  printf("Veuillez entrer une heure en nombre de secondes :\n");
  assert(scanf("%d", &seconds) == 1); 

  int h, m, s;
  to_time(seconds, &h, &m, &s);
  printf("La valeur horaire de %d est : %02d:%02d:%02d\n", seconds, h, m, s);
  
  int heure, minute, seconde;
  printf("Veuillez entrer une heure sous la forme hh:mm:ss :\n");
  assert(scanf("%d:%d:%d", &heure, &minute, &seconde) == 3);

  
  int  secondes = to_sec(heure, minute, seconde);
  printf("\nLa valeur en secondes de %d:%d:%d est : %d", heure, minute, seconde, secondes);
  
  int heure, minute, seconde;
  printf("Veuillez entrer une heure sous la forme hh:mm:ss :\n");
  assert(scanf("%d:%d:%d", &heure, &minute, &seconde) == 3);
  add_1s(&heure, &minute, &seconde);;
  printf("\nL'heure après avoir ajouté une seconde est : %02d:%02d:%02d\n", heure, minute, seconde);  
  return EXIT_SUCCESS;
}
