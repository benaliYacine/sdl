#ifndef PROJET_SANS_SDL_H_INCLUDED
#define PROJET_SANS_SDL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "projet_sans_SDL.h"
#include <stdbool.h>
#include <math.h>


typedef struct cel *liste;
typedef struct cel{
    int vect[10];
    liste svt;
    int line;
}ne;

void cre_de_vect(int T[10],int pos,int n);
void Ajout_apres(liste *Q,int T[10],int pos,int line);
bool existe_deja(int T[10],liste tete);
liste cre_de_arbre(int N,int n);
void cre_de_tous_les_cas(liste adr_de_cel,liste *Q,liste tete,int N,int n);
int div_inv(int n);
int mod_inv(int n);

#endif // PROJET_SANS_SDL_H_INCLUDED
