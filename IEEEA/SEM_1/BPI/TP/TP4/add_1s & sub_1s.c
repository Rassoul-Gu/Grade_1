/**
 * Auteur : GUEYE NDIAYE MODOU
 * Description : Ecrire deux fonctions add_1s et add_2s qui ajoute ou retire une seconde a une heure entree au clavier puis le teter dans un programme
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */
/*sub_1s
 *Soustrait une seconde a une heure donnee
 *AE : 
 *AS :
*/
void sub_1s(int *heure, int *minute, int *seconde);


/* Fonction principale */
int main(void) {
    int heure, minute, seconde;
    printf("Veuillez entrer une heure sous la forme hh:mm:ss :\n");
    assert(scanf("%d:%d:%d", &heure, &minute, &seconde) == 3);
    sub_1s(&heure, &minute, &seconde);
    printf("\nL'heure après avoir soustrait une seconde est : %02d:%02d:%02d\n", heure, minute, seconde);
    return EXIT_SUCCESS;
}

/* Définitions des fonctions */
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