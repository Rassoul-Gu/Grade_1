#include <stddef.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "ue.h"

// Écrire ici les définitions des différentes fonctions demandées pour le TP

bool est_defaillant(const double CC[], size_t nb_CC){
  assert(NB_MIN <= nb_CC && nb_CC <= NB_MAX);
  
  for(size_t i = 0; i < nb_CC ; i++){
    if (CC[i] == DEF){
      return true;
  
    }
  }
    return false;
}


double somme_ponderee(const double CC[], const double coeff[], size_t nb_CC){
  assert(NB_MIN <= nb_CC && nb_CC <= NB_MAX);
  
  double numerateur = 0;
  
  for(size_t i = 0; i < nb_CC; i++){
    numerateur += CC[i] * coeff[i];
  }
  return numerateur;
}


double somme_coeff(const double coeff[], size_t nb_CC){
  assert(NB_MIN <= nb_CC && nb_CC <= NB_MAX);
  
  double somme = 0;
  for(size_t i = 0; i < nb_CC; i++){
    somme += coeff[i];
  }
  return somme;
}


double moyenne_ponderee(const double CC[], const double coeff[], size_t nb_CC){
  assert(NB_MIN <= nb_CC && nb_CC <= NB_MAX);
  
  double moyenne = somme_ponderee(CC, coeff, nb_CC) / somme_coeff(coeff, nb_CC);
  return moyenne;
}


void modif_notes(double CC[], double EF, size_t nb_CC){
  assert(NB_MIN <= nb_CC && nb_CC <= NB_MAX);
  
  for(size_t i = 0; i < nb_CC; i++){
    if(CC[i] < EF){
      CC[i] = EF;
    }
  }
}


void print_tab_double(double t[], size_t n) {
  /* Invariant de boucle :
   * k <= n && t[0] ..., t[k - 1] ont été affichés 
   */
  for (size_t k = 0; k < n; ++k) {
    printf("%.2lf ", t[k]);
  }
  printf("\n");
}

size_t scan_tab_double(double t[], size_t capacity) {
  size_t n = 0;
  double x;
  /* Invariant de boucle:
   * tous les éléments de t[0..n-1] ont été saisis && n <= capacity 
   */
  while (scanf("%lf", &x) == 1) {
    if (n >= capacity) {
      return ERR_CAP;
    }
    t[n] = x;
    ++n;
  }
  fgetc(stdin);
  return n;
}

