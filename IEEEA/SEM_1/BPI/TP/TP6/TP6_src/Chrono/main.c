/**
 * Équipe pédagogique BPI
 * Fonctions principales du programme qui execute un chronometre
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>
#include <stdbool.h>
#include <unistd.h>
#include "timeio.h"

/* Déclarations des fonctions */

/* Fonction principale */
int main(void) {
  int h, m, s;
  printf("Combien de temps au chrono (hh:mm:ss) ?\n");
  if (scan_time(&h, &m, &s) < 3) {
    printf("Erreur de saisie\n");
    return EXIT_FAILURE;
  }
  
  /* Invariant de boucle :
   * Tous les horaires entre init_val (h) : init_val (m) : init_val (s)
   * et h : m : s + 1 seconde ont été affichés
  */
  printf("\n");
  while (!(h == 0 && m == 0 && s == 0)){
    print_time(h, m, s);
    sleep(1);
    sub_1s(&h, &m, &s);
  }
  print_time(h, m, s);
  //time_is_zero(h, m, s);
  
  
  
  
  return EXIT_SUCCESS;
}
