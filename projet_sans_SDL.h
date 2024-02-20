#ifndef PROJET_SANS_SDL_H_INCLUDED
#define PROJET_SANS_SDL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "projet_sans_SDL.h"
#include <stdbool.h>
#include <math.h>
#include "fonction_SDL.h"

typedef struct cel *liste;
typedef struct cel
{
    int vect[10];
    liste svt;
    int line;
} ne;

void cre_de_vect(int T[10], int pos, int n);
void Ajout_apres(liste *Q, int T[10], int pos, int line);
bool existe_deja(int T[10], liste tete);
liste cre_de_arbre(int N, int n, int T[10]);
void cre_de_tous_les_cas(liste adr_de_cel, liste *Q, liste tete, int N, int n);
int div_inv(int n);
int mod_inv(int n);
int cherche_line(int tab_init[10], int tab_cherche[10], int N, int n);
liste cre_de_liste_cherche(int tab_init[10], int line, int N, int n);
void machine_SANS_SDL(int N, int n);
void player_vs_machine(int N, int n);
void player_SANS_SDL(int N, int n);
bool Existe(int T[10], int x);
int RandomNumber(int nr_min, int nr_max);

#endif // PROJET_SANS_SDL_H_INCLUDED
