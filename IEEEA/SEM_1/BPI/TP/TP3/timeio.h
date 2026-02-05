/**
 * Équipe pédagogique BPI
 * Prototypes des fonctions de la bibliothèque timeio
 */ 

#ifndef TIMEIO_H
#define TIMEIO_H

/* Écrire ici les déclarations des fonctions
 * to_time , to_sec , add_1s et add_2s
 */
void to_time(int secondes, int *heure, int *minute, int *seconde);
int to_sec(int heure, int minute, int seconde);
void add_1s(int *heure, int *minute, int *seconde);
void sub_1s(int *heure, int *minute, int *seconde);

#endif // TIMEIO_H
