#include <stddef.h>
#include <assert.h>

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
