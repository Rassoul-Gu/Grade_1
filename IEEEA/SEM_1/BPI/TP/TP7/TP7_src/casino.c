/**
 * Équipe pédagogique BPI
 * Jeux de devinette
 */
 
/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

/* Déclarations des fonctions et des macros */
#define MIN 0
#define MAX 9
#define MISE 2
#define GAIN_MAX MAX - MIN + 1

/* tirage :
 * renvoie un entier pseudo-aléatoire compris entre MIN et MAX
 * Entrée : void
 * Sortie : un entier de type int
 * AE : Aucune
 * AS : MIN <= tirage && tirage <= MAX
 */
int tirage(void);  

/* Fonction principale */
int main(void) { 
  printf("Règle du jeu:\n");
  printf("Il faut deviner un nombre compris entre %d et %d.\n", MIN, MAX);
  printf("Pour chaque nombre testé, vous misez 2 euros.\n");
  printf("Si vous trouvez le nombre vous gagnez %d euros.", GAIN_MAX);
  printf("Vous ne pouvez gagner qu'une seule fois par séance.\n");
  printf("Vous pouvez tester autant de nombre que vous voulez.\n");
  printf("Pour terminer les mises entrez autre chose qu'un entier.\n \n");
  
  int cible = tirage();

  int tour = 0;
  int gain = 0;
  int essai;
  int rep;
  do {
    printf("Entrez la tentative %d : \n", tour + 1);
    rep = scanf("%d", &essai);
    if (rep == 1) {
      ++ tour;
      gain -= MISE;
      if (essai == cible) {
        gain += GAIN_MAX;
      }     
    }
  } while (rep == 1 && essai != cible);
  
  printf("Vous avez %s %d euros!.\n", gain < 0 ? "perdu" : "gagné",
      gain < 0 ? -gain : gain);
  
  return EXIT_SUCCESS;
}

/* Définitions des fonctions */

int tirage(void) {
  return rand() % GAIN_MAX + MIN;
}
