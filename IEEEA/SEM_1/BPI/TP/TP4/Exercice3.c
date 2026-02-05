/**
 * [GUEYE NDIAYE Modou]
 * [Lire deux prix de locations et un nombre de kilometres puis afficher le prix
 * le plus avamtageux ainsi que la somme a payer]
 */
 

/* Appel des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Déclarations des fonctions et des macros */

/*prix_forfaitaire
 * retourne le prix total avec la location forfaitaire
 * AE: Aucune
 * AS: un double représentant le prix_forfaitaire
*/

double prix_forfaitaire(double kilometres, double prix_1, int jours);

/*prix_tranches
 * retourne le prix total avec la location en tranches
 * AE: Aucune
 * AS: un double représentant le prix_tranches
*/

double prix_tranches(double kilometres, double prix_2);


/* Fonction principale */

int main(void) {
  double prix_1, prix_2, kilometres;
  int jours;
  printf("Veuillez saisir le prix de location forfaitaire par kilometre : ");
  assert(scanf("%lf", &prix_1) == 1);
  printf("Veuillez saisir le prix de location par kilometre en tranches : ");
  assert(scanf("%lf", &prix_2) == 1);
  printf("Veuillez saisir le nombre de kilometres parcourus : ");
  assert(scanf("%lf", &kilometres) == 1);  
  printf("Veuillez saisir le nombre de jours de location : ");
  assert(scanf("%d", &jours) == 1);  
  double cout_forfait = prix_forfaitaire(kilometres, prix_1, jours);
  double cout_tranches = prix_tranches(kilometres, prix_2);
  printf("Le cout total avec la location forfaitaire est de : %.2lf\n", cout_forfait);
  printf("Le cout total avec la location en tranches est de : %.2lf\n", cout_tranches);
  
  
  
  if (cout_forfait < cout_tranches) {
    printf("La location la plus avantageuse est la location forfaitaire.\n");
    printf("Le montant a payer est de : %.2lf\n", cout_forfait);
  } else if (cout_tranches < cout_forfait) {
    printf("La location la plus avantageuse est la location en tranches.\n");
    printf("Le montant a payer est de : %.2lf\n", cout_tranches);
  } else {
    printf("Les deux locations ont le meme cout.\n");
    printf("Le montant a payer est de : %.2lf\n", cout_forfait);  
  } 
  return EXIT_SUCCESS;
}

/* Définitions des fonctions */
double prix_forfaitaire(double kilometres, double prix_1, int jours){
  double prix_journee = 80;
  double kilometres_limite = 500;

  if (kilometres <= kilometres_limite) {
    return prix_journee * jours;
  } else {
    double kilometres_supp = kilometres - kilometres_limite;
    double prix_supp = prix_1 * kilometres_supp;
    return prix_journee * jours + prix_supp;
  }
}


double prix_tranches(double kilometres, double prix_2){

  if (kilometres <= 2000) {
    return prix_2 * kilometres;
  } else {
    double kilometres_supp = kilometres - 2000;
    double remise = prix_2 * 11.5 / 100;
    double prix_reduit = prix_2 - remise;
    return prix_2 * 2000 + prix_reduit * kilometres_supp;
  }
}
