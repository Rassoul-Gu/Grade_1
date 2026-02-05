/**
 * Équipe pédagogique BPI
 * Prototypes des fonctions de la bibliothèque ue
 */
#include <stdbool.h>

#ifndef UE_H
#define UE_H

#define NB_MIN 2
#define NB_MAX 12

/* print_tab_double :
 * affiche les éléments d'un tableau t d'entiers dont la longueur n est
 * passé en paramètre.
 * Entrées : t un tableau de double, n un entier de type size_t
 * Sortie : Aucune
 * AE : t est un tableau de longueur au moins n
 * AS : t[0], ..., t[n - 1] ont été affichés. 
 */
void print_tab_double(double t[], size_t n);

#define ERR_CAP (NB_MAX + 1)

/* scan_tab_double :
 * Lit des entiers sur l'entrée standard et les affectent 
 * dans l'ordre dans les cases du  tableau t, passé en paramètre, 
 * dont la taille est au moins égale au paramètre capacity.
 * La saisie s'arrête lorsqu'il n'est plus possible de lire 
 * un entier sur  l'entrée stantard (par exemple si l'utilisateur 
 * utilise CRTL-D) ou lorsque le nombre d'entiers saisis est supérieur
 * à capacity.
 * La fonction renvoie le nombre d'enties saisis si tout s'est
 * bien passé ou ERR_CAP si il y a eu un dépassement de la capacité
 * du tableau 
 * Entrées : t un tableau de double, capacity un entier de type size_t
 * Sortie : Aucune
 * AE : t est un tableau de longueur au moins capacity
 * AS : (0 <= n && n<= capacity && Les éléments t[0], ..., t[n-1] ont
 *          été correctement saisis && scan_tab_int == n) 
 *      ^^ (il y a eu une tentative de saisir plus de capacity entiers  
 *          && scan_tab_double == ERR_CAP)
 */
size_t scan_tab_double(double t[], size_t capacity);

#define DEF -1

/* est_defaillant:
 * renvoie true si l'étudiant dont les notes sont dans le tableau
 * passé en paramètre est défaillant.
 * Entrées : CC un tableau de double, nb_CC un entier de type size_t
 * Sortie  : une valeur de type bool
 * AE : NB_MIN <= nb_CC && nb_CC <= NB_MAX
 *      && CC est un tableau de longueur au moins nb_CC
 * AS : est_defaillant == il existe un i dans {0,..., nb_CC-1} tel que
 *                        CC[i] == DEF
 */
bool est_defaillant(const double CC[], size_t nb_CC);

/* somme_ponderee:
 * renvoie la somme pondérée des notes d'un étudiant
 * Entrées : CC un tableau de double, coeff un tableau de double,
 *           nb_CC un entier de type size_t
 * Sortie  : une valeur de type double
 * AE : NB_MIN <= nb_CC && nb_CC <= NB_MAX
 *      && CC et coeff dont des tableaux de longueurs au moins nb_CC
 *      && tous les éléments de coeff sont strictement positifs
 * AS : somme pondereee == CC[0] * coeff[0] + CC[1] * coeff[1] + ... 
                           + CC[nb_CC - 1]*coeff[nb_CC - 1]
 */
double somme_ponderee(const double CC[], const double coeff[], size_t nb_CC);

/* somme_coeff:
 * renvoie la somme des coefficients des contrôles
 * Entrées : coeff un tableau de double,
 *           nb_CC un entier de type size_t
 * Sortie  : une valeur de type double
 * AE : NB_MIN <= nb_CC && nb_CC <= NB_MAX
 *      && coeff est un tableau de longueur au moins nb_CC
 *      && tous les éléments de coeff sont strictement positifs
 * AS : somme_coeff == coeff[0] +  coeff[1] + ... +coeff[nb_CC-1]
 */
double somme_coeff(const double coeff[], size_t nb_CC);

/* moyenne_ponderee:
 * renvoie la moyenne pondérée des notes d'un étudiant ou DEF si 
 * l'étudiant est défaillant
 * Entrées : CC un tableau de double, coeff un tableau de double,
 *           nb_CC un entier de type size_t
 * Sortie  : une valeur de type double
 * AE : NB_MIN <= nb_CC && nb_CC <= NB_MAX &&
 *      CC et coeff dont des tableaux de longueurs au moins nb_CC
 *      && tous les éléments de coeff sont strictement positifs
 * AS : moyenne_ponderee ==
 * CC[0] * coeff[0] + CC[1] * coeff[1] + ... + CC[nb_CC - 1] * coeff[nb_CC - 1]
 * ----------------------------------------------------------------------------
 *               coeff[0] + coeff[1] + ... + coeff[nb_CC - 1]
 */
double moyenne_ponderee(const double CC[], const double coeff[], size_t nb_CC);

/* modif_notes:
 * modifie le tableau des notes en intégrant la note de l'épreuve facultative
 * Entrées : CC un tableau de double, EF de type double,
 *           nb_CC un entier de type size_t
 * Sortie  : void
 * AE : NB_MIN <= nb_CC && nb_CC <= NB_MAX
 *      && CC est un tableaux de longueur au moins nb_CC
 *      && (EF >=0 ^^ EF == DEF)
 * AS : pour tout k dans {0,..., nb_CC}, CC[k] == max(old(CC[k]), EF)
 */
void modif_notes(double CC[], double EF, size_t nb_CC);


/* combien:
 * calcule et renvoie la note minimale à l'épreuve facultative nécessaire pour 
 * obtenir l'UE
 * Entrées : CC un tableau de double, coeff un tableau de double,
 *           nb_CC un entier de type size_t
 * Sortie  : doubme
 * AE : NB_MIN <= nb_CC && nb_CC <= NB_MAX
 *      && CC  est un tableaux de longueur au moins nb_CC
 * AS : combien = note minimale pour avoir l'UE
 */
double combien(double CC[], double coeffs[], size_t nb_CC);

#endif // UE_H
