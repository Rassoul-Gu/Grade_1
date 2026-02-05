/**
 * Équipe pédagogique BPI
 * fonctions additionnelles de manipulation des durées
 */ 
 
/* Appel des bibliothèques */
#include <assert.h>
#include "timeio.h"

void sub_1s(int *heure, int *minute, int *seconde) {
  assert(*heure >= 0 && *heure <= 23);
  assert(*minute >= 0 && *minute <= 59);
  assert(*seconde >= 0 && *seconde <= 59);
  
  *seconde = *seconde - 1;
  if (*seconde == -1) {
    *seconde = 59;
    *minute = *minute - 1;
  }
  if (*minute == -1) {
    *minute = 59;
    *heure = *heure - 1;
  }
  if (*heure == -1 ) {
    *heure = 23;
  }
}

bool time_is_zero(int h, int m, int s) {
  return (h == 0 && m == 0 && s == 0);
}
