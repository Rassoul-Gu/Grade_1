/**
 * [GUEYE NDIAYE Modou]
 * [Demander toutes les moyennes par UE et par Semestre puis afficher si vous 
 * etes admis en seconde annee si vous n'etes pas admise mais avez valide un 
 * semestre et lequel ou si vous n'avez obtenu aucun semestre]
 */

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

/* Déclarations des fonctions et des macros */
/* moyenne_sem1
 * calcule et renvoie la moyenne du semestre 1
 * Entree : cinq valeurs de type double
 * Sortie : une valeur de type double
 * AE : Aucune
 * AS : moyenne_sem = (UE1_1 + UE2_1 + UE3_1 + UE4_1 + UE5_1) / 5
*/
double moyenne_sem1(double UE1_1, double UE2_1, double UE3_1, double UE4_1, double UE5_1);


/* moyenne_sem2
 * calcule et renvoie la moyenne du semestre 2
 * Entree : cinq valeurs de type double
 * Sortie : une valeur de type double
 * AE : Aucune
 * AS : moyenne_sem = (UE1_2 + UE2_2 + UE3_2 + UE4_2 + UE5_2) / 5
*/
double moyenne_sem2(double UE1_2, double UE2_2, double UE3_2, double UE4_2, double UE5_2);


/* moyenne_dis_1
 * calcule et renvoie la moyenne des UE disciplinaire du sem1
 * Entree : trois valeurs de type double
 * Sortie : une valeur de type double
 * AE : Aucune
 * AS : moyenne_dis_1 = (UE1_1 + UE2_1 + UE3_1) / 3
*/
double moyenne_dis_1(double UE1_1, double UE2_1, double UE3_1);


/* moyenne_dis_2
 * calcule et renvoie la moyenne des UE disciplinaire du sem2
 * Entree : trois valeurs de type double
 * Sortie : une valeur de type double
 * AE : Aucune
 * AS : moyenne_dis_2 = (UE1_2 + UE2_2 + UE3_2) / 3
*/
double moyenne_dis_2(double UE1_2, double UE2_2, double UE3_2);

/* valide_dis_1
 * Verifie si les UE disciplinaire du semestre 1 sont valides
 * Entree : trois valeurs de type double
 * Sortie : un booleen
 * AE : si les moyennes sont doubles et compris entre 0 et 20
 * AS : Aucune
*/


/* Fonction principale */

int main(void) {
  double UE1_1, UE2_1, UE3_1, UE4_1, UE5_1, UE1_2, UE2_2, UE3_2, UE4_2, UE5_2;
  
  //Recuperations des notes du semestre 1
  printf("Veuillez entrer les notes du semestres 1.\n");
  printf("UE1 : ");
  assert(scanf("%lf", &UE1_1) == 1);
  printf("UE2 : ");
  assert(scanf("%lf", &UE2_1) == 1);
  printf("UE3 : ");
  assert(scanf("%lf", &UE3_1) == 1);
  printf("UE4 : ");
  assert(scanf("%lf", &UE4_1) == 1);
  printf("UE5 : ");
  assert(scanf("%lf", &UE5_1) == 1);
  
  //Recuperationn des notes du semestre 2
  printf("Veuillez entrer les notes du semestres 2.\n");
  printf("UE1 : ");
  assert(scanf("%lf", &UE1_2) == 1);
  printf("UE2 : ");
  assert(scanf("%lf", &UE2_2) == 1);
  printf("UE3 : ");
  assert(scanf("%lf", &UE3_2) == 1);
  printf("UE4 : ");
  assert(scanf("%lf", &UE4_2) == 1);
  printf("UE5 : ");
  assert(scanf("%lf", &UE5_2) == 1);
  
  // Calcul des moyennes du semestre 1 generale et disciplinaire
  double generale_1 = moyenne_sem1(UE1_1, UE2_1, UE3_1, UE4_1, UE5_1);
  double disciplinaire_1 = moyenne_dis_1(UE1_1, UE2_1, UE3_1);
  
  // Calcul des moyennes du semestre 1 generale et disciplinaire
  double generale_2 = moyenne_sem1(UE1_2, UE2_2, UE3_2, UE4_2, UE5_2);
  double disciplinaire_2 = moyenne_dis_1(UE1_2, UE2_2, UE3_2);
  
  // Verification si le semestre 1 est valide ou pas 
  bool valide_1;
  if (generale_1 >= 10 && disciplinaire_1 >= 10){
    printf("Felicitations! Vous avez valide le semestre 1 avec une moyenne de : %.2lf\n", generale_1);
    valide_1 = true;
  } else{
    printf("Vous n'avez pas valide le semstre 1 et vous avez moyenne disciplinaire = %.2lf et moyenne generale = %.2lf\n", disciplinaire_1, generale_1);
    valide_1 = false;
  }
  
  // Verification si le semestre 2 est valide ou pas 
  bool valide_2;
  if (generale_2 >= 10 && disciplinaire_2 >= 10){
    printf("Felicitations! Vous avez valide le semestre 2 avec une moyenne de : %.2lf\n", generale_2);
    valide_2 = true;
  } else{
    printf("Vous n'avez pas valide le semstre 2 et vous avez moyenne disciplinaire = %.2lf et moyenne generale = %.2lf\n", disciplinaire_2, generale_2);
    valide_2 = false;
  }
  
  // Verification si l'annee est valide ou pas
  double dis_annee = (disciplinaire_1 + disciplinaire_2) / 2;
  double generale_annee = (generale_1 + generale_2) / 2;
  if ((valide_1 == true && valide_2 == true) || (dis_annee >= 10 && generale_annee >= 10)){
    printf("Felicitations! Vous etes admis en seconde annee.\n");
  } else {
    printf("Vous n'avez pas valide l'annee.\n");
  }
  return EXIT_SUCCESS; 
}

/* Définitions des fonctions */
double moyenne_sem1(double UE1_1, double UE2_1, double UE3_1, double UE4_1, double UE5_1){
  assert(UE1_1 >= 0 && UE1_1 <= 20);
  assert(UE2_1 >= 0 && UE2_1 <= 20);
  assert(UE3_1 >= 0 && UE3_1 <= 20);
  assert(UE4_1 >= 0 && UE4_1 <= 20);
  assert(UE5_1 >= 0 && UE5_1 <= 20);
  return (UE1_1 + UE2_1 + UE3_1 + UE4_1 + UE5_1) / 5;
}

double moyenne_sem2(double UE1_2, double UE2_2, double UE3_2, double UE4_2, double UE5_2){
    assert(UE1_2 >= 0 && UE1_2 <= 20);
    assert(UE2_2 >= 0 && UE2_2 <= 20);
    assert(UE3_2 >= 0 && UE3_2 <= 20);
    assert(UE4_2 >= 0 && UE4_2 <= 20);
    assert(UE5_2 >= 0 && UE5_2 <= 20);
    return (UE1_2 + UE2_2 + UE3_2 + UE4_2 + UE5_2) / 5;
}

double moyenne_dis_1(double UE1_1, double UE2_1, double UE3_1){
  assert(UE1_1 >= 0 && UE1_1 <= 20);
  assert(UE2_1 >= 0 && UE2_1 <= 20);
  assert(UE3_1 >= 0 && UE3_1 <= 20);
  return (UE1_1 + UE2_1 + UE3_1) / 3;
}

double moyenne_dis_2(double UE1_2, double UE2_2, double UE3_2){
  assert(UE1_2 >= 0 && UE1_2 <= 20);
  assert(UE2_2 >= 0 && UE2_2 <= 20);
  assert(UE3_2 >= 0 && UE3_2 <= 20);
  return (UE1_2 + UE2_2 + UE3_2) / 3;
}
