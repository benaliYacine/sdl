#ifndef FONCTION_SDL_H_INCLUDED
#define FONCTION_SDL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <windows.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <string.h>
#include <time.h>
#include "projet_sans_SDL.h"
#include "fonction_SDL.h"

typedef struct game
{
    int N;
    int n;
    int mat_of_words[30][8];
    int vect_of_pos[30];
    int Tinit[10];
    int Tresultat[10];
    int max_flipe;
    int flipes_left;
    bool can_flipe;
    int num_of_flipes;
    int nbr_etapes;
    float time_playing;
    int num_1ere_ligne_avec_decal;
} game;

typedef struct Player
{
    int score;
    int time;
    char name[10];
    char date[11];
} Player;

typedef struct cel *liste;

void menu(SDL_Window *fenetre, SDL_Renderer *renderer);
void Lire_N_Et_n(bool you_want, SDL_Renderer *renderer, int *N, int *n, int *k, int *z, SDL_Texture *CHOOSENn, Mix_Chunk *click);
void affiche_image(SDL_Renderer *renderer, SDL_Texture *texture);
void affiche_image_nopresent(SDL_Renderer *renderer, SDL_Texture *texture);
void affiche_sha_or_glow(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect image_position);
void inserer_text(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, int taille, bool cel);
void inserer_text_no_present(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, int taille);
void inserer_textr(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, TTF_Font *Sans);
void inserer_text_retation(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, int taille, bool cel);
void inserer_textr_retation(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, TTF_Font *Sans);
void player(bool you_want, SDL_Window *fenetre, SDL_Renderer *renderer, int *k, SDL_Texture *LOADING, SDL_Texture *PLAYER, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *PAUSEPLAYER, SDL_Texture *HIGHSCORE, SDL_Texture *timebackground, bool from_home);
void machine(bool you_want, SDL_Renderer *renderer, int *k, SDL_Texture *STARTANDRESULT, SDL_Texture *LOADING, SDL_Texture *WRONG, SDL_Texture *MACHINE, SDL_Texture *MACHINEWIN, SDL_Texture *CHOOSENn, Mix_Chunk *click, SDL_Texture *PAUSEMACHINE, SDL_Texture *timebackground);
void playerVSmachine(bool you_want, SDL_Window *fenetre, SDL_Renderer *renderer, int *k, SDL_Texture *LOADING, SDL_Texture *PLAYERVSMACHINE, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *PAUSEMACHINE, SDL_Texture *MACHINEWIN, SDL_Texture *timebackgroundmvp, bool from_home);
void affiche_Resultat(int T[10], SDL_Renderer *renderer, SDL_Color white, int N, int n, SDL_Rect Message_rect, SDL_Rect Message_rect_inverse, int u);
void affiche_Resultatr(int T[10], SDL_Renderer *renderer, SDL_Color white, int N, int n, SDL_Rect Message_rect, SDL_Rect Message_rect_inverse, int u);
SDL_Texture *initialize_texture_from_file(const char *file_name, SDL_Renderer *renderer);
int RandomNumber(int nr_min, int nr_max);
void resume(bool you_want, int N, int n, int mat_of_words[30][8], int vect_of_pos[13], liste Q, int Tinit[10], int Tresultat[10], int max_flipe, int flipes_left, bool can_flipe, int num_of_flipes, int nbr_etapes, SDL_Texture *PAUSEPLAYER, SDL_Texture *PLAYER, SDL_Renderer *renderer, SDL_Window *fenetre, int *k, SDL_Texture *LOADING, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *HIGHSCORE, SDL_Texture *timebackground, float time_playing, int num_1ere_ligne_avec_decal, bool from_home);
void resume_ma_vs_pla(bool you_want, int N, int n, int mat_of_words[30][8], int vect_of_pos[13], liste Q, int Tinit[10], int Tresultat[10], int max_flipe, bool can_flipe, bool first_time, int num_of_flipes, SDL_Texture *PAUSEMACHINE, SDL_Texture *PLAYERVSMACHINE, SDL_Renderer *renderer, SDL_Window *fenetre, int *k, SDL_Texture *LOADING, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *MACHINEWIN, SDL_Texture *timebackgroundmvp, float time_playing, int line, bool from_home);
void affiche_main(int LETTER, SDL_Renderer *renderer, SDL_Color white, SDL_Rect Message_rect, int time);
void high_score(bool you_want, SDL_Renderer *renderer, int tim, int score, SDL_Texture *HIGHSCORE, Mix_Chunk *click, int *k);
void top_liste(bool you_want, SDL_Renderer *renderer, Mix_Chunk *click, int *k);
void copy_file_to_tab(Player Tab[5]);
int check_if_high_score(Player Tab2[5], int score);
Player *inserer_player_in_top5_tab(Player TopPlayers[], Player User);
void copy_tab_to_file(Player Tab[5]);
void copy_game_to_file(game player_game);
game copy_file_to_game();
void supp_liste();
void affiche_animation(bool you_want, SDL_Renderer *renderer, int first_image, int last_image, int sd);
void affiche_animation_khfifa(bool you_want, SDL_Renderer *renderer, int first_image, int last_image, int sd);

#endif // FONCTION_SDL_H_INCLUDED
