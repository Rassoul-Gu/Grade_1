/**
 * Équipe pédagogique BPI.
 * Où on utilise un tableau en tant que paramètre de fonction.
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * Affiche le contenu du tableau t, un élément par ligne.
 * AE : t est de longueur n
 * AS : le contenu de t est affiché sur la sortie standard.
 */
void display_tab_int(size_t n, int t[n]);

/*
 * Fonction d'exemple où un tableau est passé en paramètre.
 */
void foo(size_t n, int t[n]);

#define TAB_SIZE 10

int main(void) {
  int t[TAB_SIZE] = { };
  
  foo(TAB_SIZE, t);
  display_tab_int(TAB_SIZE, t);

  return EXIT_SUCCESS;
}

void foo(size_t n, int t[n]) {
  /*
   * IB : t[j] = old_t[j] + j, 0 <= j < k && t[j] = old_t[j], k <= j < n
   */
  for (size_t k = 0; k < n; ++k) {
    t[k] += (int) k;
  }
}

void display_tab_int(size_t n, int t[n]) {
  /*
   * IB : les lignes "j : t[j]\n" ont été affichées pour 0 <= j < k
   */
  for (size_t k = 0; k < n; ++k) {
    printf("%zu : %d\n", k, t[k]);
  }
}
