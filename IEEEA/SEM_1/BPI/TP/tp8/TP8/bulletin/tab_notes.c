#include <stddef.h>
#include <assert.h>

#include "ue.h"

// Écrire ici les définitions des différentes fonctions demandées pour le TP

bool est_defaillant(const double CC[], size_t nb_CC) {
  assert (nb_CC >= NB_MIN && nb_CC <= NB_MAX) ;

  for(size_t k = 0; k < nb_CC; ++k) {
    /* I.B : 0 <= k <= nb_CC && DEF n'appartient pas à {CC[0]....CC[k - 1]}
     */
    if(CC[k] == DEF) {
      return true ;
    }
  }
      return false;
}

double somme_ponderee(const double CC[], const double coeff[], size_t nb_CC) {
         
         assert (nb_CC >= NB_MIN && nb_CC <= NB_MAX) ;

          double p = 0 ;
          for(size_t k = 0; k < nb_CC; ++k) {
            
              p += CC[k] * coeff[k] ;

          }
          return p ;
}

double somme_coeff(const double coeff[], size_t nb_CC) {
       
       assert (nb_CC >= NB_MIN && nb_CC <= NB_MAX) ;

       double s = 0 ;
       for (size_t k = 0; k < nb_CC; ++k) {
         s += coeff[k] ;
        }
        return s ;
}

double moyenne_ponderee(const double CC[], const double coeff[], size_t nb_CC) {
	
	assert (nb_CC >= NB_MIN && nb_CC <= NB_MAX) ;
	
	return (somme_ponderee(CC, coeff, nb_CC)) / (somme_coeff(coeff, nb_CC)) ;
}
