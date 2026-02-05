/**
 * Équipe pédagogique BPI
 * Prototypes des fonctions de la bibliothèque timeio
 */ 
 
/* Appel des bibliothèques */
#include <assert.h>
#include <limits.h>
#include "timeio.h"

/* Écrire ici les définitions des fonctions
 * to_time et to_sec
 */
void to_time(int secondes, int *heure, int *minute, int *seconde){
  *heure = secondes / 3600;
  *minute = (secondes % 3600) / 60;
  *seconde = secondes % 60;
}

int to_sec(int heure, int minute, int seconde){
    int secondes = heure * 3600 + minute * 60 + seconde;
    return secondes;
}

void add_1s(int *heure, int *minute, int *seconde){
  assert(*heure >= 0 && *heure <= 23);
  assert(*minute >= 0 && *minute <= 59);
  assert(*seconde >= 0 && *seconde <= 59);

  *seconde = *seconde + 1;
  if (*seconde == 60) {
    *seconde = 0;
    *minute = *minute + 1;
  }
  if (*minute == 60) {
    *minute = 0;
    *heure = *heure + 1;
  }
  if (*heure == 24) {
    *heure = 0;
  }
}

void sub_1s(int *heure, int *minute, int *seconde){
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