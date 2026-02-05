/**
 * Équipe pédagogique BPI
 * Fonctions principales du programme qui calcule l'admissibilité
 * d'un étudiant
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>
#include <stdbool.h>
#include <unistd.h>
#include "ue.h"

/* Fonction principale */
int main(void) {
  double notes[NB_MAX];
  double coeffs[NB_MAX];
  size_t nb_notes = scan_tab_double(notes, NB_MAX);
  assert(nb_notes <= NB_MAX);
  size_t nb = scan_tab_double(coeffs, nb_notes);
  assert(nb == nb_notes);
  
  double EF;
  assert(scanf("%lf", &EF) == 1);
  
  printf("Les notes saisies sont :\n");
  print_tab_double(notes, nb_notes);
  printf("Les coefficients sont :\n");
  print_tab_double(coeffs, nb_notes);
  if (EF == -1) {
    printf("L'étudiant n'a pas passé l'épreuve facultative.\n");
  } else {
    printf("L'étudiant a obtenu %.2lf à l'épreuve facultative.\n", EF);
  }
  
  // Remplacemnt des notes inferierurs a l'Epreuve Facultative(EF)
  modif_notes(notes, EF, nb_notes);
  
  // Verification du remplacement des notes
  printf("Les nouvelles notes apres remplacement sont :\n");
  print_tab_double(notes, nb_notes);
  
  //Calcul de la moyenne
  double moyenne = moyenne_ponderee(notes, coeffs, nb_notes);
  
  
  // Affichage des resultats sous format : Défaillant, Ajourné ou Reçu.
  if (est_defaillant(notes, nb_notes) == true){
    printf("L'etudiant est defaillant.\n");
  }else if (moyenne < 10){
    printf("L'etudiant est ajourne avec une moyenne de %.2lf.\n", moyenne);
  } else {
    printf("L'etudiant est recu avec une moyenne de %.2lf.\n", moyenne);
  }
  
  
  
  return EXIT_SUCCESS;
}
