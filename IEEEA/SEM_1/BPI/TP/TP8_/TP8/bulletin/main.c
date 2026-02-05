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
    modif_notes (notes, EF, nb_notes) ;
  printf ("les nouvelles notes de l'eleve sont :\n");
    print_tab_double(notes, nb_notes);
    double moyenne = moyenne_ponderee(notes, coeffs, nb_notes);
    double somme = somme_ponderee(notes, coeffs, nb_notes) ;
    bool defaillant = est_defaillant(notes, nb_notes) ;
  //printf("%s\n", est_defaillant(notes, nb_notes) ? "l'etudiant est defaillant" : "l'etudiant n'est pas defaillant") ;
  //printf("la somme des coefficients de l'etudiant est de %.2lf\n", somme_coeff(coeffs, nb_notes)) ;
  printf("la somme ponderée de l'etudiant est de %.2lf\n", somme) ;
  printf("l'etudiant a une moyenne ponderée de %.2lf\n", moyenne) ;


  printf ("la note minimale est %.2lf\n", combien(notes, coeffs, nb_notes)) ;

  if (defaillant){
    printf("l'etudiant est defaillant\n");
  } else if (moyenne_ponderee(notes, coeffs, nb_notes)>=10) {
    printf("avec une moyenne de %.2lf/20, l'etudiant est admis\n", moyenne);
  }else {
    printf("avec une moyenne de %.2lf/20, l'etudiant est ajourné\n", moyenne);
  }

  if (EF == -1) {
    printf("L'étudiant n'a pas passé l'épreuve facultative.\n");
  } else {
    printf("L'étudiant a obtenu %.2lf à l'épreuve facultative.\n", EF);
  }

  return EXIT_SUCCESS;
}
