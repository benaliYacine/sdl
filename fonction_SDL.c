#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>
#include <windows.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "projet_sans_SDL.h"
#include "fonction_SDL.h"
#include <math.h>
#include <string.h>
void Lire_N_Et_n(bool you_want, SDL_Renderer *renderer, int *N, int *n, int *k, int *z, SDL_Texture *CHOOSENn, Mix_Chunk *click)
{
    affiche_animation(you_want, renderer, 149, 224, 1); // chooseNn in
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOWCAREE.png", renderer);
    SDL_Texture *CHOOSENnRETCON = initialize_texture_from_file("images/CHOOSENnRETCON.png", renderer);
    SDL_Rect glow_position, image_position = {1366 - 136, 768 - 230, 136, 230};
    int f = 1, S = 1;
    // SDL_Texture * BGLOW = initialize_texture_from_file("images/BGLOW.png", renderer);
    // SDL_Rect glow_position;
    SDL_Color white = {255, 255, 255};
    SDL_Rect Message_rect = {865, 409, 37, 37};
    affiche_image(renderer, CHOOSENn);
    *N = 3;
    while (S)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_sha_or_glow(renderer, CHOOSENnRETCON, image_position);
            switch (event.type)
            {
            case SDL_MOUSEMOTION:
                if (event.button.x > 1251 && event.button.x < 1344 && event.button.y > 544 && event.button.y < 640)
                {
                    glow_position.x = 1251;
                    glow_position.y = 544;
                    glow_position.w = 93;
                    glow_position.h = 96;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                if (event.button.x > 1245 && event.button.x < 1345 && event.button.y > 657 && event.button.y < 752)
                {
                    glow_position.x = 1251;
                    glow_position.y = 657;
                    glow_position.w = 93;
                    glow_position.h = 96;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                printf(" %d / %d\n", event.motion.x, event.motion.y);

                break;
            case SDL_KEYDOWN:
                printf("click\n");
                Mix_PlayChannel(1, click, 0);
                if (event.key.keysym.sym == SDLK_2)
                {
                    if (2 >= *N / 2 && f == 0)
                    { //-------------------------------
                        *n = 2;
                        f = 2; //-------------------------------
                        inserer_text(renderer, "2", white, Message_rect, 42, false);
                        break;
                    }
                }

                if (event.key.keysym.sym == SDLK_3)
                {
                    if (f == 1)
                    {
                        *N = 3;
                        inserer_text(renderer, "3", white, Message_rect, 42, false);
                        f = 0;
                        Message_rect.y = Message_rect.y + 164;
                        break;
                    }
                    else
                    {
                        if (3 >= *N / 2 && 3 < *N && f == 0)
                        { //---------------------
                            *n = 3;
                            f = 2; //-------------------------------

                            inserer_text(renderer, "3", white, Message_rect, 42, false);
                            break;
                        }
                    }
                }
                if (event.key.keysym.sym == SDLK_4)
                {
                    if (f == 1)
                    {
                        *N = 4;
                        inserer_text(renderer, "4", white, Message_rect, 42, false);
                        f = 0;
                        Message_rect.y = Message_rect.y + 164;
                        break;
                    }
                    else
                    {
                        if (4 >= *N / 2 && 4 < *N && f == 0)
                        { //---------------------
                            *n = 4;
                            f = 2; //-------------------------------
                            inserer_text(renderer, "4", white, Message_rect, 42, false);
                            break;
                        }
                    }
                }
                if (event.key.keysym.sym == SDLK_5)
                {
                    if (f == 1)
                    {
                        *N = 5;
                        inserer_text(renderer, "5", white, Message_rect, 42, false);
                        f = 0;
                        Message_rect.y = Message_rect.y + 164;
                        break;
                    }
                    else
                    {
                        if (5 >= *N / 2 && 5 < *N && f == 0)
                        { //-------------------------------
                            *n = 5;
                            f = 2; //-------------------------------
                            inserer_text(renderer, "5", white, Message_rect, 42, false);
                            break;
                        }
                    }
                }
                if (event.key.keysym.sym == SDLK_6)
                {
                    if (f == 1)
                    {
                        *N = 6;
                        inserer_text(renderer, "6", white, Message_rect, 42, false);
                        f = 0;
                        Message_rect.y = Message_rect.y + 164;
                        break;
                    }
                    else
                    {
                        if (6 >= *N / 2 && 6 < *N && f == 0)
                        { //-------------------------------
                            *n = 6;
                            f = 2; //-------------------------------
                            inserer_text(renderer, "6", white, Message_rect, 42, false);
                            break;
                        }
                    }
                }
                if (event.key.keysym.sym == SDLK_7)
                {
                    if (f == 1)
                    {
                        *N = 7;
                        inserer_text(renderer, "7", white, Message_rect, 42, false);
                        f = 0;
                        Message_rect.y = Message_rect.y + 164;
                        break;
                    }
                    else
                    {
                        if (7 >= *N / 2 && 7 < *N && f == 0)
                        { //-------------------------------
                            *n = 7;
                            f = 2; //-------------------------------
                            inserer_text(renderer, "7", white, Message_rect, 42, false);
                            break;
                        }
                    }
                }
                if (event.key.keysym.sym == SDLK_8)
                {
                    if (f == 1)
                    {
                        *N = 8;
                        inserer_text(renderer, "8", white, Message_rect, 42, false);
                        f = 0;
                        Message_rect.y = Message_rect.y + 164;
                        break;
                    }
                    else
                    {
                        if (8 >= *N / 2 && 8 < *N && f == 0)
                        { //-------------------------------
                            *n = 8;
                            f = 2; //-------------------------------
                            inserer_text(renderer, "8", white, Message_rect, 42, false);
                            break;
                        }
                    }
                case SDL_QUIT:
                    S = 0;
                    *k = 0;
                    *z = 0;
                    break;
                }

            case SDL_MOUSEBUTTONDOWN:

                printf("click\n");
                Mix_PlayChannel(1, click, 0);
                if (*n != 0)
                {
                    if (event.button.x > 1251 && event.button.x < 1344 && event.button.y > 544 && event.button.y < 640)
                    {
                        S = 0;
                    }
                }
                if (event.button.x > 1245 && event.button.x < 1345 && event.button.y > 657 && event.button.y < 752)
                {
                    S = 0;
                    *z = 0;
                }
                break;

            default:
                break;
            }
        }
        SDL_RenderPresent(renderer);
    }
    if (*k != 0)
        affiche_animation(you_want, renderer, 225, 250, 2); // chooseNn out
    printf("N= %d\n", *N);
    printf("n= %d\n", *n);
}

SDL_Texture *initialize_texture_from_file(const char *file_name, SDL_Renderer *renderer)
{
    SDL_Surface *image = IMG_Load(file_name);
    SDL_Texture *image_texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_FreeSurface(image);
    return image_texture;
}

void affiche_image(SDL_Renderer *renderer, SDL_Texture *texture)
{ // lfct hdi mor ma halit mochkil l proceceur
    SDL_QueryTexture(texture, NULL, NULL, 0, 0);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void affiche_image_nopresent(SDL_Renderer *renderer, SDL_Texture *texture)
{
    SDL_QueryTexture(texture, NULL, NULL, 0, 0);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
}

void affiche_sha_or_glow(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect image_position)
{
    SDL_QueryTexture(texture, NULL, NULL, 0, 0);
    SDL_RenderCopy(renderer, texture, NULL, &image_position);
}

void inserer_text(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, int taille, bool cel)
{

    if (taille == 0)
    {
        taille = RandomNumber(50, 500);
        Message_rect.x = RandomNumber(0, 1200);
        Message_rect.y = RandomNumber(0, 600);
    }

    int texth = 0, textw = 0;
    TTF_Font *Sans = TTF_OpenFont("Font/Mokoto Glitch.ttf", taille);
    SDL_Surface *surfaceMessage = TTF_RenderText_Blended(Sans, C, couleur);
    SDL_Texture *Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
    SDL_QueryTexture(Message, NULL, NULL, &textw, &texth);
    if (textw > taille && cel)
    {
        textw = taille;
    }
    if (cel)
    {
        Message_rect.x = Message_rect.x + 11 - (textw / 2);
    }
    printf("\n%s 3andou textw=%d, texth=%d,", C, texth, textw);
    Message_rect.w = textw;
    Message_rect.h = texth;
    SDL_RenderCopy(renderer, Message, NULL, &Message_rect);
    SDL_RenderPresent(renderer);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(Sans);
}

void inserer_text_no_present(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, int taille)
{
    int texth = 0, textw = 0;
    TTF_Font *Sans = TTF_OpenFont("Font/Mokoto Glitch.ttf", taille);
    SDL_Surface *surfaceMessage = TTF_RenderText_Blended(Sans, C, couleur);
    SDL_Texture *Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
    SDL_QueryTexture(Message, NULL, NULL, &textw, &texth);
    Message_rect.x = Message_rect.x + 11 - (textw / 2);
    printf("\n%s 3andou textw=%d, texth=%d,", C, texth, textw);
    Message_rect.w = textw;
    Message_rect.h = texth;
    SDL_RenderCopy(renderer, Message, NULL, &Message_rect);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(Sans);
}

void inserer_text_retation(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, int taille, bool cel)
{

    if (taille == 0)
    {
        taille = RandomNumber(50, 500);
        Message_rect.x = RandomNumber(0, 1200);
        Message_rect.y = RandomNumber(0, 600);
    }
    int texth = 0, textw = 0;
    TTF_Font *Sans = TTF_OpenFont("Font/Mokoto Glitch.ttf", taille);
    SDL_Surface *surfaceMessage = TTF_RenderText_Blended(Sans, C, couleur);
    SDL_Texture *Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
    SDL_QueryTexture(Message, NULL, NULL, &textw, &texth);
    printf("\n%s 3andou textw=%d, texth=%d,", C, texth, textw);
    if (textw > taille && cel)
    {
        textw = taille;
    }
    Message_rect.x = Message_rect.x + 11 - (textw / 2);
    Message_rect.y = Message_rect.y - 2;
    Message_rect.w = textw;
    Message_rect.h = texth;
    SDL_RenderCopyEx(renderer, Message, NULL, &Message_rect, 180.0f, NULL, SDL_FLIP_NONE);
    SDL_RenderPresent(renderer);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(Sans);
}

void inserer_textr(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, TTF_Font *Sans)
{ // hadi fiha l font bara bah terbah temp bah lafichage mor decalage yji belkhaf lakhaterch hadik linst ta3 el font tedi mwa9t

    int texth = 0, textw = 0;
    SDL_Surface *surfaceMessage = TTF_RenderText_Blended(Sans, C, couleur);
    SDL_Texture *Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
    SDL_QueryTexture(Message, NULL, NULL, &textw, &texth);
    if (textw > 30)
    {
        textw = 30;
    }
    Message_rect.x = Message_rect.x + 11 - (textw / 2);
    printf("\n%s 3andou textw=%d, texth=%d,", C, texth, textw);
    Message_rect.w = textw;
    Message_rect.h = texth;
    SDL_RenderCopy(renderer, Message, NULL, &Message_rect);
    // SDL_RenderPresent(renderer);
    SDL_DestroyTexture(Message);
}

void inserer_textr_retation(SDL_Renderer *renderer, char C[100], SDL_Color couleur, SDL_Rect Message_rect, TTF_Font *Sans)
{

    int texth = 0, textw = 0;
    SDL_Surface *surfaceMessage = TTF_RenderText_Blended(Sans, C, couleur);
    SDL_Texture *Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
    SDL_QueryTexture(Message, NULL, NULL, &textw, &texth);
    printf("\n%s 3andou textw=%d, texth=%d,", C, texth, textw);
    if (textw > 30)
    {
        textw = 30;
    }
    Message_rect.x = Message_rect.x + 11 - (textw / 2);
    Message_rect.y = Message_rect.y - 2;
    Message_rect.w = textw;
    Message_rect.h = texth;
    SDL_RenderCopyEx(renderer, Message, NULL, &Message_rect, 180.0f, NULL, SDL_FLIP_NONE);
    // SDL_RenderPresent(renderer);
    SDL_DestroyTexture(Message);
}

void affiche_animation(bool you_want, SDL_Renderer *renderer, int first_image, int last_image, int sd)
{
    if (you_want)
    {
        // Mix_Chunk *sound_before_ani = Mix_LoadWAV("Sound effects/transition23ani.wav");
        Mix_Chunk *sound_ani;
        if (sd == 1)
        {
            sound_ani = Mix_LoadWAV("Sound effects/transition18ani.wav");
        }
        if (sd == 2)
        {
            sound_ani = Mix_LoadWAV("Sound effects/transition19ani.wav");
        }
        if (sd == 3)
        {
            sound_ani = Mix_LoadWAV("Sound effects/transition7intro.wav");
        }
        // Mix_PlayChannel(6, sound_before_ani, 0);
        const char *file_path = "Flipe_animation/";
        int t_taille = last_image - first_image + 1;
        SDL_Texture *textures[t_taille];
        int j = 0;
        SDL_Event event;
        char file_name[100];
        for (int i = first_image; i <= last_image; i++)
        {
            sprintf(file_name, "%s%d.jpg", file_path, i);
            textures[j] = initialize_texture_from_file(file_name, renderer);
            j++;
        }
        Mix_PlayChannel(6, sound_ani, 0);
        for (int i = 0; i < t_taille; i++)
        {
            while (SDL_PollEvent(&event))
            {
            }
            affiche_image(renderer, textures[i]);
            SDL_Delay(1000 / 30);
        }
        for (int i = 0; i < t_taille; i++)
        {
            SDL_DestroyTexture(textures[i]);
        }
    }
}

void affiche_animation_khfifa(bool you_want, SDL_Renderer *renderer, int first_image, int last_image, int sd)
{
    if (you_want)
    {
        // Mix_Chunk *sound_before_ani = Mix_LoadWAV("Sound effects/transition23ani.wav");
        Mix_Chunk *sound_ani;
        if (sd == 1)
        {
            sound_ani = Mix_LoadWAV("Sound effects/transition18ani.wav");
        }
        if (sd == 2)
        {
            sound_ani = Mix_LoadWAV("Sound effects/transition19ani.wav");
        }
        if (sd == 3)
        {
            sound_ani = Mix_LoadWAV("Sound effects/transition7intro.wav");
        }
        // Mix_PlayChannel(6, sound_before_ani, 0);
        const char *file_path = "Flipe_animation/";
        int t_taille = last_image - first_image + 1;
        SDL_Texture *textures[t_taille];
        int j = 0;
        SDL_Event event;
        char file_name[100];
        for (int i = first_image; i <= last_image; i++)
        {
            sprintf(file_name, "%s%d.jpg", file_path, i);
            textures[j] = initialize_texture_from_file(file_name, renderer);
            j++;
        }
        Mix_PlayChannel(6, sound_ani, 0);
        for (int i = 0; i < t_taille; i++)
        {
            while (SDL_PollEvent(&event))
            {
            }
            affiche_image(renderer, textures[i]);
            SDL_Delay(1000 / 30);
        }
        for (int i = 0; i < t_taille; i++)
        {
            SDL_DestroyTexture(textures[i]);
        }
    }
}

void player(bool you_want, SDL_Window *fenetre, SDL_Renderer *renderer, int *k, SDL_Texture *LOADING, SDL_Texture *PLAYER, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *PAUSEPLAYER, SDL_Texture *HIGHSCORE, SDL_Texture *timebackground, bool from_home)
{
    SDL_Texture *GAMESAVED = initialize_texture_from_file("images/GAMESAVED.png", renderer);
    SDL_Texture *FLIPESLEFT = initialize_texture_from_file("images/FLIPESLEFT.png", renderer);
    SDL_Texture *PLAYERNOTE = initialize_texture_from_file("images/PLAYERNOTE.png", renderer);
    SDL_Texture *prpl = initialize_texture_from_file("Flipe_animation/443.1.jpg", renderer);
    SDL_Texture *SHAWDOW = initialize_texture_from_file("images/SHAWDOWCAREE.png", renderer);
    SDL_Texture *YOUWINSC = initialize_texture_from_file("images/YOUWINSC.png", renderer);
    SDL_Rect glow_position, image_position = {1366 - 234, 0, 234, 104};
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOWCAREE.png", renderer);
    SDL_Texture *MACHINEPAUSEREPEAT = initialize_texture_from_file("images/MACHINEPAUSEREPEAT.png", renderer);
    SDL_Color white = {255, 255, 255};
    SDL_Color red = {255, 0, 0};
    Mix_Chunk *YLOSE = Mix_LoadWAV("Sound effects/lose.wav");
    Mix_Chunk *YWIN = Mix_LoadWAV("Sound effects/win.wav");
    int n;
    int N = RandomNumber(3, 7);
    printf("N=%d", N);
    if (N % 2 == 0)
    {
        n = RandomNumber(N / 2, N - 1);
        printf("n=%d", n);
    }
    else
    {
        n = RandomNumber(N / 2 + 1, N - 1);
        printf("n=%d", n);
    }
    if (from_home)
        affiche_animation_khfifa(you_want, renderer, 346, 413, 1); // laoding in
    if (N == 8 || from_home)
        affiche_image(renderer, LOADING);
    int i;
    int Tinit[10];                                         // tabl li yji fih the statrting word
    int T_de_letteres[52 /*kanet 16 ki kan mel a lel h*/]; // tab fih kamel wech ye9der yhot lutilisateur 1 2 3 ... -1 -2 -3...
    for (i = 0; i < 26; i++)
    { // 3amarna tabl hadak 1 2 3...  -1 -2 -3..
        T_de_letteres[i] = i + 1;
    }
    int j = 1;

    for (i = 26 /*kanet N ki kan mel a lel h*/; i < 2 * 26 /*kanet 2*N ki kan mel a lel h*/; i++)
    {
        T_de_letteres[i] = -j;
        j++;
    }
    for (i = 0; i < 10; i++)
    { // 3amarna tab init b des 0
        Tinit[i] = 0;
    }
    // 3amarna tab init b des valeurs aliatoire men t_de_letters
    int randNum;
    bool cndi;

    for (i = 0; i < N; i++)
    {
        cndi = true;
        while (cndi)
        {
            randNum = rand();
            if (randNum < 2 * 26 /*kanet 2*N ki kan mel a lel h*/ && randNum >= 0 && Existe(Tinit, T_de_letteres[randNum]) == false)
                cndi = false;
        }
        Tinit[i] = T_de_letteres[randNum];
    }

    printf("\n________________________________________loading...______________________________________\n\n\n");
    liste tete = cre_de_arbre(N, n, Tinit); // creaction de la liste de tout les cas

    // avoir la taille de la liste
    int taile_de_liste = 0;
    liste p = tete;
    while ((p != NULL))
    {
        taile_de_liste++;
        p = p->svt;
    }

    // avoir un num random de 1 a taille liste
    //******
    int nbr_etapes;
    liste resulta;

    // do{//boucl hadi bah ma ymedlekch wahed lazmek bezaf khotwat bah tawsalou
    cndi = true;
    while (cndi)
    {
        randNum = rand();
        if (randNum < taile_de_liste && randNum > 0)
            cndi = false;
    }

    // nejebou word (tab) li lazem yawsalo player
    resulta = tete;
    while (randNum != 0)
    {
        randNum--;
        resulta = resulta->svt;
    }

    // jbedna chhal men etapes lazemna bach nawslo w jbednah bel line div 10...
    int line_tempo = resulta->line;
    nbr_etapes = 0;
    while (line_tempo != 0)
    {
        nbr_etapes++;
        line_tempo = line_tempo / 10;
    }

    //}while(nbr_etapes>11);
    if (from_home)
    {
        affiche_animation_khfifa(you_want, renderer, 414, 442, 2); // laoding out
        affiche_image(renderer, prpl);
        affiche_animation(you_want, renderer, 521, 575, 1); // player in
    }
    affiche_image(renderer, PLAYER);

    // affichina word w flipe size w max nmbr of flips
    char spr[6];
    sprintf(spr, "%d", N);
    SDL_Rect Message_rect_int = {850, 173, 30, 30};
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    Message_rect_int.y = 275;
    sprintf(spr, "%d", n);
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    SDL_Rect Message_rect_int2 = {1080, 290, 30, 30};
    int max_flipe = (nbr_etapes * 2) + 1;
    // if(max_flipe>13)//bach max flipes mayfoutch 13
    //     max_flipe=13;
    int flipes_left = max_flipe;
    sprintf(spr, "%d", max_flipe - 1);
    inserer_text(renderer, spr, red, Message_rect_int2, 30, false);
    Message_rect_int.x = 186;
    Message_rect_int.y = 115;
    Message_rect_int.w = 20;
    Message_rect_int.h = 24;

    // rect init nehtajohom fel affichage
    SDL_Rect Message_rect_int_line = {546, 115, 20, 24};
    SDL_Rect Message_rect = {225, 108, 22, 31};
    SDL_Rect Message_rect_inverse = {224, 102, 22, 31};
    SDL_Rect Message_rect_enrg = Message_rect;
    SDL_Rect Message_rect_inverse_enrg = Message_rect_inverse;

    // affichina start word w finish word
    SDL_Rect Message_rect_T1 = {758, 477, 28, 37};
    SDL_Rect Message_rect_inverse_T1 = {757, 471, 28, 37};
    SDL_Rect Message_rect_T2 = {758, 630, 28, 37};
    SDL_Rect Message_rect_inverse_T2 = {757, 624, 28, 37};

    affiche_Resultat(Tinit, renderer, white, N, 44, Message_rect_T1, Message_rect_inverse_T1, 1);
    affiche_Resultat(resulta->vect, renderer, white, N, 44, Message_rect_T2, Message_rect_inverse_T2, 1);

    printf("\n                                  the start word is:\n\n"); // affichina starting word
    for (int i = 0; i < 10; i++)
    { // affiche word
        printf("|  %d\t", Tinit[i]);
    }
    printf("|  n=0\n\n");

    printf("\n                                  the result word is:\n\n"); // affichina fhinish word
    for (int i = 0; i < 10; i++)
    { // affiche word
        printf("|  %d\t", resulta->vect[i]);
    }
    printf("|  n=%d\n\n", nbr_etapes);

    int tab_tempo[10];

    // creation de premier element of player liste
    liste tete_liste_player = malloc(sizeof(ne));
    for (i = 0; i < 10; i++)
    {
        tete_liste_player->vect[i] = Tinit[i];
    }

    tete_liste_player->line = 0;
    tete_liste_player->svt = NULL;
    liste Q = tete_liste_player;

    // affichina estar elewel moraha bedena les rects
    sprintf(spr, "%d", 1); // 1 ra9m estar
    inserer_text(renderer, spr, white, Message_rect_int, 24, true);
    sprintf(spr, "%d", 0); // 0 mazal ma ne9elbou
    inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);

    affiche_Resultat(tete_liste_player->vect, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);
    Message_rect.x = Message_rect_enrg.x;
    Message_rect_inverse.x = Message_rect_inverse_enrg.x;
    Message_rect.y = Message_rect.y + 51;
    Message_rect_inverse.y = Message_rect_inverse.y + 51;
    Message_rect_int.y = Message_rect_int.y + 51;
    Message_rect_int_line.y = Message_rect_int_line.y + 51;

    // decla mat li n enregi fiha wah glebna
    int mat_of_words[30][8]; // 3dnk mat of words w vect of pos w Tinit w resulta->vect w max flipe li tehtajhom f pause
    int vect_of_pos[30];
    for (i = 0; i < 30; i++)
    {
        vect_of_pos[i] = -1; //-1 tema vide
        for (j = 0; j < 8; j++)
        {
            mat_of_words[i][j] = 0;
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for (i = 0; i < 30; i++)
    {
        printf("pos=%d\t|", vect_of_pos[i]);
        for (j = 0; j < 8; j++)
        {
            printf("%d\t|", mat_of_words[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for (j = 0; j < 8; j++)
    {
        mat_of_words[0][j] = Tinit[j];
    }
    vect_of_pos[0] = 0;

    for (i = 0; i < 30; i++)
    {
        printf("pos=%d\t|", vect_of_pos[i]);
        for (j = 0; j < 8; j++)
        {
            printf("%d\t|", mat_of_words[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    // boucle bah koul mara lutilisateur ye9leb

    bool win, lose, new_flipe = false;
    win = false;
    lose = false;
    cndi = true;
    int num_of_flipes = 1;
    int pos, cel_y;

    float time_playing = 0; // hada li iokhrejena ykoun bel fasila nrodouh entier w naffichiwh
    int previouse_time = 0;
    int current_time = SDL_GetTicks();
    printf("currenttime%d ", current_time);
    float delta_time = 0; // delta ma3rof beli hiya efar9
    int time_int;

    int time_verification = 1;
    SDL_Rect time_rect = {180, 35, 0, 0};
    SDL_Rect timebackrect = {0, 0, 455, 89};

    sprintf(spr, "%d", 0); // m3a lbedya kaml naffichiw 0
    inserer_text(renderer, spr, white, time_rect, 30, false);
    bool pause = false;
    game game_to_saved;

    // decalage
    int num_1ere_ligne_avec_decal = 0;
    SDL_Texture *mat_player_background = initialize_texture_from_file("images/mat_player_background.png", renderer);
    int tab_afiche[10];
    // decalage

    while (cndi)
    {

        // timer mise a jour

        previouse_time = current_time;
        current_time = SDL_GetTicks();
        delta_time = (current_time - previouse_time) / 1000.0F; // ta9sim alf bah yweli bel second mais mazalou float
        time_playing += delta_time;
        time_int = floor(time_playing); // bah yweli entier
        if (time_playing > time_verification)
        {
            affiche_sha_or_glow(renderer, timebackground, timebackrect);
            sprintf(spr, "%d", time_int);
            inserer_text(renderer, spr, white, time_rect, 30, false);
            time_verification++;
        }

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_sha_or_glow(renderer, MACHINEPAUSEREPEAT, image_position);
            switch (event.type)
            {
            case SDL_MOUSEMOTION:
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    glow_position.x = 1147;
                    glow_position.y = 10;
                    glow_position.w = 90;
                    glow_position.h = 90;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    glow_position.x = 1272;
                    glow_position.y = 10;
                    glow_position.w = 82;
                    glow_position.h = 86;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                printf("%d / %d\n", event.motion.x, event.motion.y);
                SDL_RenderPresent(renderer);

                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    pause = true;
                    affiche_image(renderer, PAUSEPLAYER);
                    while (pause)
                    {
                        SDL_Event event;
                        while (SDL_PollEvent(&event))
                        {
                            affiche_image_nopresent(renderer, PAUSEPLAYER);
                            switch (event.type)
                            {
                            case SDL_MOUSEMOTION:
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    glow_position.x = 580;
                                    glow_position.y = 283;
                                    glow_position.w = 210;
                                    glow_position.h = 207;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    glow_position.x = 822;
                                    glow_position.y = 309;
                                    glow_position.w = 153;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    glow_position.x = 391;
                                    glow_position.y = 309;
                                    glow_position.w = 149;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                printf("%d / %d\n", event.motion.x, event.motion.y);
                                SDL_RenderPresent(renderer);

                                break;
                            case SDL_MOUSEBUTTONDOWN:
                                affiche_image(renderer, PAUSEPLAYER);
                                printf("click\n");
                                Mix_PlayChannel(-1, click, 0);
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    resume(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, resulta->vect, max_flipe, flipes_left, true, num_of_flipes, nbr_etapes, PAUSEPLAYER, PLAYER, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, HIGHSCORE, timebackground, time_playing, num_1ere_ligne_avec_decal, false);
                                    return;
                                    pause = false;
                                    break;
                                }
                                if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                                {
                                    affiche_image(renderer, GAMESAVED);
                                    game_to_saved.N = N;
                                    game_to_saved.n = n;
                                    for (i = 0; i < 30; i++)
                                    {
                                        game_to_saved.vect_of_pos[i] = vect_of_pos[i];
                                        for (j = 0; j < 8; j++)
                                        {
                                            game_to_saved.mat_of_words[i][j] = mat_of_words[i][j];
                                        }
                                    }
                                    for (i = 0; i < 10; i++)
                                    {
                                        game_to_saved.Tinit[i] = Tinit[i];
                                        game_to_saved.Tresultat[i] = resulta->vect[i];
                                    }
                                    game_to_saved.flipes_left = flipes_left;
                                    game_to_saved.max_flipe = max_flipe;
                                    game_to_saved.can_flipe = true;
                                    game_to_saved.num_of_flipes = num_of_flipes;
                                    game_to_saved.nbr_etapes = nbr_etapes;
                                    game_to_saved.time_playing = time_playing;
                                    game_to_saved.num_1ere_ligne_avec_decal = num_1ere_ligne_avec_decal;
                                    copy_game_to_file(game_to_saved);
                                    break;
                                }
                                if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                                {
                                    pause = false;
                                    affiche_animation(you_want, renderer, 858, 884, 2); // pause out
                                    return;                                             // bah yokhroj men fct player tema yweli fel home
                                    break;

                                case SDL_QUIT:
                                    *k = 0;
                                    pause = false;
                                    break;
                                }
                            }
                        }
                    }

                    return;
                    break;
                }
                pos = (event.button.x - 213) / 40;
                pos++;
                cel_y = (event.button.y - 91) / 51;
                if (num_of_flipes > 12)
                {
                    if (cel_y == 12)
                    {
                        cel_y = num_of_flipes - 1;
                    }
                    else
                    {
                        cel_y = -1;
                    }
                }
                if (pos > 0 && pos < N - n + 2 && cel_y == num_of_flipes - 1)
                {
                    new_flipe = true;
                }
                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    player(you_want, fenetre, renderer, k, LOADING, PLAYER, click, YOUWIN, YOULOSE, PAUSEPLAYER, HIGHSCORE, timebackground, false);
                    return;
                    break;
                case SDL_QUIT:
                    *k = 0;
                    return;
                    break;
                }
                break;

                //}hadi ta3 l if li galek ilyes tji haka bah temchi

            case SDL_KEYDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);

                if (event.key.keysym.sym == SDLK_1)
                {
                    pos = 1;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_2)
                {
                    pos = 2;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_3)
                {
                    pos = 3;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_4)
                {
                    pos = 4;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_5)
                {
                    pos = 5;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_6)
                {
                    pos = 6;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_7)
                {
                    pos = 7;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                    // 8 makach lakhaterch minimom ye9leb 2 tema koun ndirou 8 tema ye9leb thamen w tase3 tema pos daymen <N-n
                }
            }
        }

        if (new_flipe)
        { // lcondition hadi lazem bah mechi koul mara tet3awed elboucle yafichi
            //------------------//decalage------------------------------------------------------------------------------------------
            if (num_of_flipes > 12)
            {
                num_1ere_ligne_avec_decal++;
                SDL_Rect mat_position = {0, 0, 625, 768};
                affiche_sha_or_glow(renderer, mat_player_background, mat_position);
                // ta3 ra9m estar
                Message_rect_int.x = 188;
                Message_rect_int.y = 115;
                Message_rect_int.w = 20;
                Message_rect_int.h = 24;
                // rect init nehtajohom fel affichage
                SDL_Rect Message_rect_int_line = {548, 115, 20, 24};
                SDL_Rect Message_rect = {225, 108, 22, 31};
                SDL_Rect Message_rect_inverse = {225, 102, 22, 31};
                SDL_Rect Message_rect_enrg = Message_rect;
                SDL_Rect Message_rect_inverse_enrg = Message_rect_inverse;
                for (int i = num_1ere_ligne_avec_decal; i < num_of_flipes; i++)
                { // ki dert hadi lboucle sot beli kout 9aader nekhdem b liste hadik directement bla mat w dir while p !=NULL W p=p->svt w fi blaset tab afiche dit p->vect
                    // affichina les etapes w koul mara nbedlou les rects
                    sprintf(spr, "%d", i + 1); // ra9m estar
                    inserer_text(renderer, spr, white, Message_rect_int, 24, true);
                    sprintf(spr, "%d", vect_of_pos[i]); // wach 9lebna
                    inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);

                    for (j = 0; j < 8; j++)
                    {
                        tab_afiche[j] = mat_of_words[i][j];
                    }
                    affiche_Resultatr(tab_afiche, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);
                    Message_rect.x = Message_rect_enrg.x;
                    Message_rect_inverse.x = Message_rect_inverse_enrg.x;
                    Message_rect.y = Message_rect.y + 51;
                    Message_rect_inverse.y = Message_rect_inverse.y + 51;
                    Message_rect_int.y = Message_rect_int.y + 51;
                    Message_rect_int_line.y = Message_rect_int_line.y + 51;
                }
                SDL_RenderPresent(renderer);
            }

            //------------------//decalage------------------------------------------------------------------------------------------
            SDL_Rect player_note_rect = {592, 679, 774, 89};
            affiche_sha_or_glow(renderer, PLAYERNOTE, player_note_rect);
            SDL_Rect flipes_left_rect = {909, 0, 457, 371};
            flipes_left--;
            affiche_sha_or_glow(renderer, FLIPESLEFT, flipes_left_rect);
            sprintf(spr, "%d", flipes_left - 1);
            inserer_text(renderer, spr, red, Message_rect_int2, 30, false);

            for (i = 0; i < 10; i++)
            {
                tab_tempo[i] = Q->vect[i];
            }

            cre_de_vect(tab_tempo, pos - 1, n);

            for (j = 0; j < 8; j++)
            {
                mat_of_words[num_of_flipes][j] = tab_tempo[j];
            }
            vect_of_pos[num_of_flipes] = pos;

            for (i = 0; i < 30; i++)
            {
                printf("pos=%d\t|", vect_of_pos[i]);
                for (j = 0; j < 8; j++)
                {
                    printf("%d\t|", mat_of_words[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("\n");
            printf("\n");

            Ajout_apres(&Q, tab_tempo, 0, 0);

            // kout 9ader tekhdem bel tab tompo wahdo koul  mara te9leb fih b cre de vect
            // moraha taffichi w virifi ida rbah bla ma dir liste player lakin goult balak dir
            // mouchkil fel affichach bel sdl tema khalitha encas w nehtajouha

            // naffichiw ra9m elkhotwa w wach 9lebna
            num_of_flipes++;
            sprintf(spr, "%d", num_of_flipes);
            inserer_text(renderer, spr, white, Message_rect_int, 24, true);
            sprintf(spr, "%d", pos);
            inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);
            // naffichiw cha khrejna w ngedmou les rects

            affiche_Resultat(Q->vect, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);

            if (num_of_flipes <= 12)
            {
                Message_rect.x = Message_rect_enrg.x;
                Message_rect_inverse.x = Message_rect_inverse_enrg.x;
                Message_rect.y = Message_rect.y + 51;
                Message_rect_inverse.y = Message_rect_inverse.y + 51;
                Message_rect_int.y = Message_rect_int.y + 51;
                Message_rect_int_line.y = Message_rect_int_line.y + 51;
            }

            for (int i = 0; i < 10; i++)
            { // affiche word li kharjetena
                printf("|  %d\t", Q->vect[i]);
            }
            printf("  |n=%d\n", num_of_flipes);
            win = true;
            for (int i = 0; i < 10; i++)
            { // affiche word
                if ((resulta->vect[i]) != (Q->vect[i]))
                    win = false;
            }

            if ((num_of_flipes == max_flipe && win == false) || (time_playing > 300 && win == false))
                lose = true;

            if ((win == true) || (lose == true))
                cndi = false;

            new_flipe = false; // bah ye9leb khatra bark
        }

    } // fin condi
    // SDL_Rect score_rect={477,200,45,45};

    if ((win))
    {
        SDL_Rect Winrect = {0, 0, 1366, 676};
        SDL_Rect score_rect = {860, 687, 80, 80};
        // high score
        Mix_PlayChannel(-1, YWIN, 0);
        int score = floor(time_playing / nbr_etapes) * 5;
        printf("your score:%d", score);
        affiche_animation(you_want, renderer, 576, 600, 2); // player out
        high_score(you_want, renderer, time_int, score, HIGHSCORE, click, k);
        affiche_animation(you_want, renderer, 885, 939, 3); // youwin in
        affiche_image(renderer, YOUWIN);
        sprintf(spr, "%d", score);
        inserer_text(renderer, spr, white, score_rect, 51, false);
        while (win)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_sha_or_glow(renderer, YOUWINSC, Winrect);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);
                    // inserer_text(renderer,spr,blue,score_rect,51,false);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 939, 966, 2); // youwin out
                        affiche_image(renderer, prpl);
                        resume(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, resulta->vect, max_flipe, flipes_left, false, num_of_flipes, nbr_etapes, PAUSEPLAYER, PLAYER, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, HIGHSCORE, timebackground, time_playing, num_1ere_ligne_avec_decal, true);
                        return;
                        win = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        win = false;
                        affiche_animation(you_want, renderer, 939, 966, 2); // youwin out
                        affiche_image(renderer, prpl);
                        player(you_want, fenetre, renderer, k, LOADING, PLAYER, click, YOUWIN, YOULOSE, PAUSEPLAYER, HIGHSCORE, timebackground, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        win = false;
                        affiche_animation(you_want, renderer, 939, 966, 2); // youwin out
                        affiche_image(renderer, prpl);
                        break;

                    case SDL_QUIT:
                        *k = 0;
                        win = false;
                        break;
                    }
                }
            }
        }
        printf("                                      < you win! >\n");
    }

    if ((lose))
    {
        Mix_PlayChannel(-1, YLOSE, 0);
        affiche_animation(you_want, renderer, 576, 600, 2);  // player out
        affiche_animation(you_want, renderer, 967, 1008, 3); // youlose in
        affiche_image(renderer, YOULOSE);
        while (lose)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_image_nopresent(renderer, YOULOSE);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // you lose out
                        resume(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, resulta->vect, max_flipe, flipes_left, false, num_of_flipes, nbr_etapes, PAUSEPLAYER, PLAYER, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, HIGHSCORE, timebackground, time_playing, num_1ere_ligne_avec_decal, true);
                        return;
                        lose = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        lose = false;
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // you lose out
                        player(you_want, fenetre, renderer, k, LOADING, PLAYER, click, YOUWIN, YOULOSE, PAUSEPLAYER, HIGHSCORE, timebackground, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // you lose out
                        lose = false;

                        break;
                    case SDL_QUIT:
                        *k = 0;
                        lose = 0;
                        break;
                    }
                }
            }
        }
        printf("                                      < you lose! >\n");
    }

    SDL_DestroyTexture(GAMESAVED);
    SDL_DestroyTexture(FLIPESLEFT);
    SDL_DestroyTexture(PLAYERNOTE);
}

void machine(bool you_want, SDL_Renderer *renderer, int *k, SDL_Texture *STARTANDRESULT, SDL_Texture *LOADING, SDL_Texture *WRONG, SDL_Texture *MACHINE, SDL_Texture *MACHINEWIN, SDL_Texture *CHOOSENn, Mix_Chunk *click, SDL_Texture *PAUSEMACHINE, SDL_Texture *timebackground)
{
    int n = 0, N = 0, D, line = 404, C, T1[10], T2[10], i, x = 0, y = 428, S, F = 1, INV = 0;
    bool na_pa_deja_afi_win = true;
    Mix_Chunk *write = Mix_LoadWAV("Sound effects/write1.WAV");
    SDL_Texture *prpl = initialize_texture_from_file("Flipe_animation/443.1.jpg", renderer);
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOWCAREE.png", renderer);
    SDL_Texture *CHOOSENnRETCON = initialize_texture_from_file("images/CHOOSENnRETCON.png", renderer);
    // SDL_Texture * MACHINEPAUSEREPEAT = initialize_texture_from_file("images/MACHINEPAUSEREPEAT.png", renderer);
    Mix_Chunk *YWIN = Mix_LoadWAV("Sound effects/win.wav");
    SDL_Color white = {255, 255, 255};
    SDL_Color red = {255, 0, 0};
    SDL_Rect glow_position, image_position = {1366 - 136, 768 - 230, 136, 230};
    Lire_N_Et_n(you_want, renderer, &N, &n, k, &line, CHOOSENn, click);
    while (line == 404 && *k != 0)
    {
        for (i = 0; i < 10; i++)
        {
            T1[i] = 0;
            T2[i] = 0;
        }
        bool first_time = true;
        i = 0;
        C = 1;
        D = 1;
        S = 1;
        SDL_Rect Message_rect_inverse_enrg = {426, 217, 45, 55}, Message_rect = {428, 230, 45, 55}, Message_rect_inverse = {426, 217, 45, 55};
        affiche_animation(you_want, renderer, 251, 316, 1); // start and res in
        affiche_image(renderer, STARTANDRESULT);
        while (C)
        {
            if (i < N * 2)
            {
                SDL_Event event;
                while (SDL_PollEvent(&event))
                {
                    affiche_sha_or_glow(renderer, CHOOSENnRETCON, image_position);
                    switch (event.type)
                    {
                    case SDL_KEYDOWN:
                        printf("click\n");
                        Mix_PlayChannel(1, click, 0);
                        if (event.key.keysym.sym == SDLK_LCTRL)
                        {

                            if (INV == 0)
                            {
                                INV = 1;
                            }
                            else
                            {
                                INV = 0;
                            }
                        }

                        if (INV == 0)
                        {
                            printf("click\n");
                            Mix_PlayChannel(1, click, 0);
                            if (event.key.keysym.sym == SDLK_a)
                            {
                                x = 1;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "A", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "A", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_b)
                            {
                                x = 2;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "B", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "B", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_c)
                            {
                                x = 3;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "C", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "C", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_d)
                            {
                                x = 4;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "D", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "D", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_e)
                            {
                                x = 5;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "E", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "E", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_f)
                            {
                                x = 6;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "F", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "F", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_g)
                            {
                                x = 7;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "G", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "G", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_h)
                            {
                                x = 8;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "H", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "H", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_i)
                            {
                                x = 9;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "I", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "I", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_j)
                            {
                                x = 10;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "J", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "J", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_k)
                            {
                                x = 11;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "K", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "K", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_l)
                            {
                                x = 12;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "L", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "L", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_m)
                            {
                                x = 13;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "M", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "M", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_n)
                            {
                                x = 14;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "N", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "N", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_o)
                            {
                                x = 15;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "O", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "O", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_p)
                            {
                                x = 16;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "P", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "P", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_q)
                            {
                                x = 17;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "Q", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "Q", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_r)
                            {
                                x = 18;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "R", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "R", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_s)
                            {
                                x = 19;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "S", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "S", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_t)
                            {
                                x = 20;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "T", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "T", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_u)
                            {
                                x = 21;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "U", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "U", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_v)
                            {
                                x = 22;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "V", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "V", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_w)
                            {
                                x = 23;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "W", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "W", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_x)
                            {
                                x = 24;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "X", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "X", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_y)
                            {
                                x = 25;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "Y", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "Y", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_z)
                            {
                                x = 26;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text(renderer, "Z", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text(renderer, "Z", white, Message_rect, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                        }
                        else
                        {
                            if (event.key.keysym.sym == SDLK_a)
                            {
                                x = -1;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "A", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "A", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_b)
                            {
                                x = -2;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "B", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "B", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_c)
                            {
                                x = -3;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "C", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "C", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_d)
                            {
                                x = -4;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "D", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "D", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_e)
                            {
                                x = -5;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "E", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "E", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_f)
                            {
                                x = -6;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "F", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "F", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_g)
                            {
                                x = -7;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "G", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "G", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_h)
                            {
                                x = -8;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "H", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "H", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_i)
                            {
                                x = -9;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "I", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "I", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_j)
                            {
                                x = -10;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "J", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "J", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_k)
                            {
                                x = -11;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "K", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "K", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_l)
                            {
                                x = -12;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "L", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "L", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_m)
                            {
                                x = -13;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "M", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "M", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_n)
                            {
                                x = -14;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "N", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "N", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_o)
                            {
                                x = -15;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "O", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "O", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_p)
                            {
                                x = -16;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "P", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "P", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_q)
                            {
                                x = -17;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "Q", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "Q", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_r)
                            {
                                x = -18;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "R", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "R", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_s)
                            {
                                x = -19;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "S", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);

                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "S", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);

                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_t)
                            {
                                x = -20;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "T", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "T", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_u)
                            {
                                x = -21;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "U", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "U", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_v)
                            {
                                x = -22;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "V", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "V", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_w)
                            {
                                x = -23;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "W", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "W", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_x)
                            {
                                x = -24;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "X", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "X", white, Message_rect_inverse, 60, true);
                                        inserer_text_retation(renderer, "'", red, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_y)
                            {
                                x = -25;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "Y", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "Y", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                            if (event.key.keysym.sym == SDLK_z)
                            {
                                x = -26;
                                if (i < N)
                                {
                                    if (Existe(T1, x) == false)
                                    {
                                        T1[i] = x;
                                        i++;
                                        inserer_text_retation(renderer, "Z", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                else
                                {
                                    if (Existe(T2, x) == false)
                                    {
                                        T2[i - N] = x;
                                        i++;
                                        inserer_text_retation(renderer, "Z", white, Message_rect_inverse, 60, true);
                                        Message_rect.x = Message_rect.x + 69;
                                        Message_rect_inverse.x = Message_rect_inverse.x + 69;
                                    }
                                }
                                printf("%d\n", x);
                                break;
                            }
                        }
                        break;

                    case SDL_MOUSEMOTION:

                        if (event.button.x > 1251 && event.button.x < 1344 && event.button.y > 544 && event.button.y < 640)
                        {
                            glow_position.x = 1251;
                            glow_position.y = 544;
                            glow_position.w = 93;
                            glow_position.h = 96;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        if (event.button.x > 1245 && event.button.x < 1345 && event.button.y > 657 && event.button.y < 752)
                        {
                            glow_position.x = 1251;
                            glow_position.y = 657;
                            glow_position.w = 93;
                            glow_position.h = 96;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        printf("%d / %d\n", event.motion.x, event.motion.y);
                        SDL_RenderPresent(renderer);

                        break;

                    case SDL_MOUSEBUTTONDOWN:
                        printf("click\n");
                        Mix_PlayChannel(1, click, 0);

                        if (event.button.x > 1250 && event.button.x < 1343 && event.button.y > 658 && event.button.y < 755)
                        {
                            affiche_animation(you_want, renderer, 317, 345, 2); // start and res out
                            machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                            return;
                            C = 0;
                            line = 0;
                            break;
                        case SDL_QUIT:
                            *k = 0;
                            C = 0;
                            break;
                        }
                    default:
                        break;
                    }
                }

                if (i == N && S == 1)
                {
                    Message_rect.x = y;
                    Message_rect.y = Message_rect.y + 230;
                    Message_rect_inverse.x = Message_rect_inverse_enrg.x;
                    Message_rect_inverse.y = Message_rect_inverse.y + 230;
                    S = 0;
                }
            }

            else
            {
                SDL_Event event;
                while (SDL_PollEvent(&event))
                {
                    affiche_sha_or_glow(renderer, CHOOSENnRETCON, image_position);
                    switch (event.type)
                    {
                    case SDL_MOUSEMOTION:

                        if (event.button.x > 1251 && event.button.x < 1344 && event.button.y > 544 && event.button.y < 640)
                        {
                            glow_position.x = 1251;
                            glow_position.y = 544;
                            glow_position.w = 93;
                            glow_position.h = 96;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        if (event.button.x > 1245 && event.button.x < 1345 && event.button.y > 657 && event.button.y < 752)
                        {
                            glow_position.x = 1251;
                            glow_position.y = 657;
                            glow_position.w = 93;
                            glow_position.h = 96;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        printf("%d / %d\n", event.motion.x, event.motion.y);
                        SDL_RenderPresent(renderer);

                        break;
                    case SDL_MOUSEBUTTONDOWN:
                        if (event.button.x > 1249 && event.button.x < 1347 && event.button.y > 547 && event.button.y < 645)
                        {
                            affiche_animation(you_want, renderer, 317, 345, 2); // start and res out
                            C = 0;
                            break;
                        }
                        if (event.button.x > 1250 && event.button.x < 1343 && event.button.y > 658 && event.button.y < 755)
                        {
                            affiche_animation(you_want, renderer, 317, 345, 2); // start and res out
                            C = 0;
                            machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                            return;
                            break;

                        case SDL_QUIT:
                            *k = 0;
                            C = 0;
                            break;
                        }
                    }
                }
            }
        }
        if (*k == 0 || line == 0)
        {
            break;
        }
        affiche_animation_khfifa(you_want, renderer, 346, 413, 1); // loading in
        affiche_image(renderer, LOADING);
        line = cherche_line(T1, T2, N, n);
        affiche_animation_khfifa(you_want, renderer, 414, 442, 2); // loading out
        affiche_image(renderer, prpl);
        if (line == 404)
        {
            printf("not good");
            affiche_animation(you_want, renderer, 443, 493, 3); // wrong in
            affiche_image(renderer, WRONG);
            while (D)
            {
                SDL_Event event;
                while (SDL_PollEvent(&event))
                {
                    switch (event.type)
                    {
                    case SDL_MOUSEBUTTONDOWN:
                        printf("click\n");
                        Mix_PlayChannel(1, click, 0);
                        if (event.button.x > 466 && event.button.x < 888 && event.button.y > 505 && event.button.y < 603)
                        {
                            affiche_animation(you_want, renderer, 495, 520, 2); // wrong out
                            D = 0;
                            printf("priss");
                            break;

                        case SDL_QUIT:
                            *k = 0;
                            line = 0;
                            D = 0;
                            break;
                        }
                    default:
                        break;
                    }
                }
            }
        }
        else
        {
            SDL_Texture *MACHINEPAUSEREPEAT = initialize_texture_from_file("images/MACHINEPAUSEREPEAT.png", renderer);
            image_position.x = 1366 - 234;
            image_position.y = 0;
            image_position.w = 234;
            image_position.h = 104;
            affiche_animation(you_want, renderer, 605, 647, 1); // machine in
            liste p = NULL;
            liste q = NULL;
            bool e = true;
            int pause = 0;
            int retourner = 0;
            int win = 0;
            int u = 0;
            liste tete = cre_de_liste_cherche(T1, line, N, n);

            char spr[6], sps[6];
            int t = 1;
            float time_playing = 0; // hada li iokhrejena ykoun bel fasila nrodouh entier w naffichiwh
            int previouse_time = 0;
            int current_time = SDL_GetTicks();
            printf("currenttime%d ", current_time);
            float delta_time = 0; // delta ma3rof beli hiya efar9
            int time_int = 0;
            int time_affiche = 0;
            int time_verification = 1;
            SDL_Rect time_rect = {180, 35, 0, 0};
            SDL_Rect timebackrect = {0, 0, 455, 89};

            sprintf(spr, "%d", 0); // m3a lbedya kaml naffichiw 0

            while (F)
            {
                p = tete;
                if (q != NULL)
                    u = 1;

                if (u < 2)
                {
                    printf("GOOD\n");
                    affiche_image(renderer, MACHINE);
                    int j = 1;

                    int r;

                    sprintf(spr, "%d", N);
                    SDL_Rect Message_rect_int = {850, 173, 25, 30};
                    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
                    Message_rect_int.y = 275;
                    sprintf(spr, "%d", n);
                    inserer_text(renderer, spr, white, Message_rect_int, 23, false);

                    Message_rect_int.x = 186;
                    Message_rect_int.y = 115;
                    Message_rect_int.w = 20;
                    Message_rect_int.h = 24;

                    // rect init nehtajohom fel affichage
                    SDL_Rect Message_rect_int_line = {546, 115, 20, 24};

                    SDL_Rect Message_rect = {225, 108, 22, 31};
                    SDL_Rect Message_rect_inverse = {224, 102, 22, 31};
                    SDL_Rect Message_rect_enrg = Message_rect;
                    SDL_Rect Message_rect_inverse_enrg = Message_rect_inverse;

                    SDL_Rect Message_rect_T1 = {758, 478, 28, 37};
                    SDL_Rect Message_rect_inverse_T1 = {757, 472, 28, 37};
                    SDL_Rect Message_rect_T2 = {758, 631, 28, 37};
                    SDL_Rect Message_rect_inverse_T2 = {757, 625, 28, 37};
                    affiche_Resultat(T1, renderer, white, N, 44, Message_rect_T1, Message_rect_inverse_T1, u);
                    affiche_Resultat(T2, renderer, white, N, 44, Message_rect_T2, Message_rect_inverse_T2, u);

                    affiche_sha_or_glow(renderer, timebackground, timebackrect);
                    sprintf(sps, "%d", time_int);
                    inserer_text(renderer, sps, white, time_rect, 30, false);
                    while (p != NULL && u < 2)
                    {
                        if (u == 1)
                        {
                            affiche_sha_or_glow(renderer, timebackground, timebackrect);
                            sprintf(sps, "%d", time_int);
                            inserer_text(renderer, sps, white, time_rect, 30, false);
                        }
                        if (win == 0 && pause == 0)
                        {
                            previouse_time = current_time;
                            current_time = SDL_GetTicks();
                            delta_time = (current_time - previouse_time) / 1000.0F; // ta9sim alf bah yweli bel second mais mazalou float
                            time_playing += delta_time;
                            time_int = floor(time_playing); // bah yweli entier
                            if (time_playing > time_verification)
                            {
                                if (time_int == 10) // hna bah a chaque fois ida kebret nbedlou w ta3 timerect ki ykoun tiome 9 par exemple ykoun 30 ki yweli 10 yweli 60 wnafs echi f 100 w 1000
                                    time_rect.w = 60;
                                if (time_int == 100)
                                    time_rect.w = 90;
                                if (time_int == 1000)
                                    time_rect.w = 120;
                                affiche_sha_or_glow(renderer, timebackground, timebackrect);
                                sprintf(sps, "%d", time_int);
                                inserer_text(renderer, sps, white, time_rect, 30, false);
                                time_verification++;
                            }
                        }

                        SDL_Event event;
                        while (SDL_PollEvent(&event))
                        {
                            affiche_sha_or_glow(renderer, MACHINEPAUSEREPEAT, image_position);
                            switch (event.type)
                            {
                            case SDL_MOUSEMOTION:
                                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                                {
                                    glow_position.x = 1147;
                                    glow_position.y = 10;
                                    glow_position.w = 90;
                                    glow_position.h = 90;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                                {
                                    glow_position.x = 1272;
                                    glow_position.y = 10;
                                    glow_position.w = 82;
                                    glow_position.h = 86;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                printf("%d / %d\n", event.motion.x, event.motion.y);
                                SDL_RenderPresent(renderer);

                                break;
                            case SDL_MOUSEBUTTONDOWN:
                                printf("click\n");
                                Mix_PlayChannel(1, click, 0);
                                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                                {
                                    pause = 1;
                                    u = 3;
                                    e = false;
                                    break;
                                    break;
                                }
                                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                                {
                                    Mix_FreeChunk(write);
                                    retourner = 1;
                                    e = false;
                                    F = 0;
                                    u = 3;
                                    affiche_animation(you_want, renderer, 649, 677, 2); // machine out
                                    machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                                    return;
                                    break;
                                case SDL_QUIT:
                                    F = 0;
                                    line = 0;
                                    *k = 0;
                                    e = false;
                                    u = 3;
                                    break;
                                }

                            default:
                                break;
                            }
                        }
                        if (e == true)
                        {
                            if (time_int == time_affiche || u == 1)
                            {
                                printf("%d     %d\n", time_int, time_affiche);
                                Mix_PlayChannel(2, write, 0);
                                r = (p->line) % 10;
                                sprintf(spr, "%d", j);
                                inserer_text(renderer, spr, white, Message_rect_int, 24, true);
                                sprintf(spr, "%d", r);
                                inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);
                                // affichina kammel elkhotwat
                                affiche_Resultat(p->vect, renderer, white, N, 40, Message_rect, Message_rect_inverse, u);
                                Message_rect.x = Message_rect_enrg.x;
                                Message_rect_inverse.x = Message_rect_inverse_enrg.x;
                                Message_rect.y = Message_rect.y + 51;
                                Message_rect_inverse.y = Message_rect_inverse.y + 51;
                                Message_rect_int.y = Message_rect_int.y + 51;
                                Message_rect_int_line.y = Message_rect_int_line.y + 51;
                                if (u == 0)
                                {
                                    time_affiche++;
                                    time_affiche++;
                                }
                                // hadi condition trigle petite probleme f pause
                                if (pause == 0)
                                {
                                    p = p->svt;
                                }
                                else
                                {
                                    u = 3;
                                }
                                j++;

                                // hadi fi resume yaktab les etape li mn9bal sans delay mb3d ykamal les etapes li b9aw m3a delay
                                if (p != NULL && p == q && win == 0)
                                {
                                    u = 0;
                                    q = NULL;
                                }

                                // hna delay fi 7alat yaficher des etapes jdad

                                // if(u==0)
                                // SDL_Delay(1000);
                            }
                        }
                    }
                    Mix_HaltChannel(2);

                    // hna pause ki tkon la machine tal3ab

                    if (pause == 1 && win == 0)
                    {
                        int c = 1;
                        affiche_image(renderer, PAUSEMACHINE);
                        while (c)
                        {
                            previouse_time = current_time;
                            current_time = SDL_GetTicks();
                            SDL_Event event;
                            while (SDL_PollEvent(&event))
                            {
                                affiche_image_nopresent(renderer, PAUSEMACHINE);
                                switch (event.type)
                                {
                                case SDL_MOUSEMOTION:
                                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                    {
                                        glow_position.x = 580;
                                        glow_position.y = 287;
                                        glow_position.w = 210;
                                        glow_position.h = 203;
                                        printf("glow");
                                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                    }
                                    else
                                    {
                                        glow_position.x = 0;
                                        glow_position.y = 0;
                                        glow_position.w = 0;
                                        glow_position.h = 0;
                                    }
                                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                    {
                                        glow_position.x = 822;
                                        glow_position.y = 309;
                                        glow_position.w = 153;
                                        glow_position.h = 148;
                                        printf("glow");
                                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                    }
                                    else
                                    {
                                        glow_position.x = 0;
                                        glow_position.y = 0;
                                        glow_position.w = 0;
                                        glow_position.h = 0;
                                    }
                                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                    {
                                        glow_position.x = 391;
                                        glow_position.y = 309;
                                        glow_position.w = 149;
                                        glow_position.h = 148;
                                        printf("glow");
                                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                    }
                                    else
                                    {
                                        glow_position.x = 0;
                                        glow_position.y = 0;
                                        glow_position.w = 0;
                                        glow_position.h = 0;
                                    }
                                    printf("%d / %d\n", event.motion.x, event.motion.y);
                                    SDL_RenderPresent(renderer);

                                    break;

                                case SDL_MOUSEBUTTONDOWN:
                                    printf("click\n");
                                    Mix_PlayChannel(1, click, 0);
                                    // hada restart
                                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                    {
                                        bool afich = true;
                                        while (afich)
                                        {
                                            affiche_animation(you_want, renderer, 793, 819, 2); // pause machine out
                                            afich = false;
                                        }
                                        machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                                        return;
                                        break;
                                    }
                                    // hna lhome
                                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                    {
                                        bool afich = true;
                                        while (afich)
                                        {
                                            affiche_animation(you_want, renderer, 793, 819, 2); // pause machine out
                                            afich = false;
                                        }
                                        return;
                                        break;
                                    }
                                    // hna resume
                                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                    {
                                        c = 0;
                                        pause = 0;
                                        if (win == 0)
                                        {
                                            q = p;
                                        }
                                        e = true;
                                        break;
                                    case SDL_QUIT:
                                        F = 0;
                                        *k = 0;
                                        c = 0;
                                        break;
                                    }
                                default:
                                    break;
                                }
                            }
                        }
                    }
                    while (t != 0 && u == 0)
                    {
                        q = NULL;
                        if (na_pa_deja_afi_win)
                        {
                            affiche_animation(you_want, renderer, 649, 677, 2);   // machine out
                            affiche_animation(you_want, renderer, 1035, 1078, 3); // machine win in
                            affiche_image(renderer, MACHINEWIN);
                            na_pa_deja_afi_win = false;
                        }
                        // affiche_image(renderer,MACHINEWIN);
                        if (first_time)
                            Mix_PlayChannel(-1, YWIN, 0);
                        first_time = false;
                        win = 1;
                        SDL_Event event;
                        while (SDL_PollEvent(&event))
                        {
                            affiche_image_nopresent(renderer, MACHINEWIN);
                            switch (event.type)
                            {
                            case SDL_MOUSEMOTION:
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    glow_position.x = 580;
                                    glow_position.y = 287;
                                    glow_position.w = 210;
                                    glow_position.h = 203;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    glow_position.x = 822;
                                    glow_position.y = 309;
                                    glow_position.w = 153;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    glow_position.x = 391;
                                    glow_position.y = 309;
                                    glow_position.w = 149;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                printf("%d / %d\n", event.motion.x, event.motion.y);
                                SDL_RenderPresent(renderer);

                                break;

                            case SDL_MOUSEBUTTONDOWN:
                                printf("click\n");
                                Mix_PlayChannel(1, click, 0);
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    bool afich = true;
                                    while (afich)
                                    {
                                        affiche_animation(you_want, renderer, 1172, 1199, 2); // machine win out
                                        affiche_animation(you_want, renderer, 605, 647, 1);   // machine in
                                        afich = false;
                                    }
                                    t = 0;
                                    break;
                                case SDL_QUIT:
                                    F = 0;
                                    *k = 0;
                                    t = 0;
                                    break;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    affiche_animation(you_want, renderer, 1172, 1199, 2); // machine win out
                                    machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                                    return;
                                    break;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    bool afich = true;
                                    while (afich)
                                    {
                                        affiche_animation(you_want, renderer, 1172, 1199, 2); // machine win out
                                        afich = false;
                                    }
                                    t = 0;
                                    F = 0;
                                    break;
                                }

                            default:
                                break;
                            }
                        }
                    }
                    u++;
                }

                SDL_Event event;
                while (SDL_PollEvent(&event))
                {
                    affiche_sha_or_glow(renderer, MACHINEPAUSEREPEAT, image_position);
                    switch (event.type)
                    {
                    case SDL_MOUSEMOTION:
                        if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                        {
                            glow_position.x = 1147;
                            glow_position.y = 10;
                            glow_position.w = 90;
                            glow_position.h = 90;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                        {
                            glow_position.x = 1272;
                            glow_position.y = 10;
                            glow_position.w = 82;
                            glow_position.h = 86;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        printf("%d / %d\n", event.motion.x, event.motion.y);
                        SDL_RenderPresent(renderer);

                        break;
                    case SDL_MOUSEBUTTONDOWN:
                        printf("click\n");
                        Mix_PlayChannel(1, click, 0);
                        if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                        {
                            pause = 1;
                            break;
                            break;
                        }

                        if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 100)
                        {
                            affiche_animation(you_want, renderer, 649, 677, 2); // machine out
                            machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                            return;
                            break;
                        case SDL_QUIT:
                            F = 0;
                            *k = 0;
                            break;
                        }

                    default:
                        break;
                    }
                }

                if (pause == 1)
                {
                    int c = 1;
                    affiche_image(renderer, PAUSEMACHINE);
                    while (c)
                    {
                        SDL_Event event;
                        while (SDL_PollEvent(&event))
                        {
                            affiche_image_nopresent(renderer, PAUSEMACHINE);
                            switch (event.type)
                            {
                            case SDL_MOUSEMOTION:
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    glow_position.x = 580;
                                    glow_position.y = 287;
                                    glow_position.w = 210;
                                    glow_position.h = 203;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    glow_position.x = 822;
                                    glow_position.y = 309;
                                    glow_position.w = 153;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    glow_position.x = 391;
                                    glow_position.y = 309;
                                    glow_position.w = 149;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                printf("%d / %d\n", event.motion.x, event.motion.y);
                                SDL_RenderPresent(renderer);

                                break;

                            case SDL_MOUSEBUTTONDOWN:
                                printf("click\n");
                                Mix_PlayChannel(1, click, 0);
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    c = 0;
                                    u = 1;
                                    e = true;
                                    pause = 0;
                                    break;
                                    break;
                                case SDL_QUIT:
                                    F = 0;
                                    *k = 0;
                                    c = 0;
                                    break;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    c = 0;
                                    bool afich = true;
                                    while (afich)
                                    {
                                        affiche_animation(you_want, renderer, 793, 819, 2); // pause machine out
                                        afich = false;
                                    }
                                    machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                                    return;
                                    F = 0;
                                    break;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    bool afich = true;
                                    while (afich)
                                    {
                                        affiche_animation(you_want, renderer, 793, 819, 2); // pause machine out
                                        afich = false;
                                    }
                                    return;

                                    break;
                                }

                            default:
                                break;
                            }
                        }
                    }
                }
            }

            if (retourner == 1)
            {

                machine(you_want, renderer, k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
            }
        }
    }
}

void playerVSmachine(bool you_want, SDL_Window *fenetre, SDL_Renderer *renderer, int *k, SDL_Texture *LOADING, SDL_Texture *PLAYERVSMACHINE, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *PAUSEMACHINE, SDL_Texture *MACHINEWIN, SDL_Texture *timebackgroundmvp, bool from_home)
{
    SDL_Color white = {255, 255, 255};
    SDL_Color red = {255, 0, 0};
    Mix_Chunk *YLOSE = Mix_LoadWAV("Sound effects/lose.wav");
    Mix_Chunk *YWIN = Mix_LoadWAV("Sound effects/win.wav");
    SDL_Texture *prpl = initialize_texture_from_file("Flipe_animation/443.1.jpg", renderer);
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOWCAREE.png", renderer);
    SDL_Texture *YOUWINSC = initialize_texture_from_file("images/YOUWINSC.png", renderer);
    SDL_Rect glow_position, image_position = {1366 - 234, 0, 234, 104};
    SDL_Texture *MACHINEPAUSEREPEAT = initialize_texture_from_file("images/MACHINEPAUSEREPEAT.png", renderer);
    SDL_Texture *SHAWDOW = initialize_texture_from_file("images/SHAWDOWCAREE.png", renderer);
    int n;
    int N = RandomNumber(3, 7);
    printf("N=%d", N); // hna 3nd ilyes rahi 8 mechi 7
    if (N % 2 == 0)
    {
        n = RandomNumber(N / 2, N - 1);
        printf("n=%d", n);
    }
    else
    {
        n = RandomNumber(N / 2 + 1, N - 1);
        printf("n=%d", n);
    }
    if (from_home)
        affiche_animation_khfifa(you_want, renderer, 346, 413, 1); // laoding in
    if (N == 8 || from_home)
        affiche_image(renderer, LOADING);
    int i;
    int Tinit[10];         // tabl li yji fih the statrting word
    int T_de_letteres[52]; // tab fih kamel wech ye9der yhot lutilisateur 1 2 3 ... -1 -2 -3...
    for (i = 0; i < 26; i++)
    { // 3amarna tabl hadak 1 2 3...  -1 -2 -3..
        T_de_letteres[i] = i + 1;
    }
    int j = 1;

    for (i = 26; i < 2 * 26; i++)
    {
        T_de_letteres[i] = -j;
        j++;
    }
    for (i = 0; i < 10; i++)
    { // 3amarna tab init b des 0
        Tinit[i] = 0;
    }
    // 3amarna tab init b des valeurs aliatoire men t_de_letters
    int randNum;
    bool cndi;

    for (i = 0; i < N; i++)
    {
        cndi = true;
        while (cndi)
        {
            randNum = rand();
            if (randNum < 2 * 26 && randNum >= 0 && Existe(Tinit, T_de_letteres[randNum]) == false)
                cndi = false;
        }
        Tinit[i] = T_de_letteres[randNum];
    }

    printf("\n________________________________________loading...______________________________________\n\n\n");
    liste tete = cre_de_arbre(N, n, Tinit); // creaction de la liste de tout les cas

    // avoir la taille de la liste
    int taile_de_liste = 0;
    liste p = tete;
    while ((p != NULL))
    {
        taile_de_liste++;
        p = p->svt;
    }

    // avoir un num random de 1 a taille liste
    //******
    int nbr_etapes;
    liste resulta;

    do
    { // boucl hadi bah ma ymedlekch wahed lazmek bezaf khotwat bah tawsalou
        cndi = true;
        while (cndi)
        {
            randNum = rand();
            if (randNum < taile_de_liste && randNum > 0)
                cndi = false;
        }

        // nejebou word (tab) li lazem yawsalo player
        resulta = tete;
        while (randNum != 0)
        {
            randNum--;
            resulta = resulta->svt;
        }

        // jbedna chhal men etapes lazemna bach nawslo w jbednah bel line div 10...
        int line_tempo = resulta->line;
        nbr_etapes = 0;
        while (line_tempo != 0)
        {
            nbr_etapes++;
            line_tempo = line_tempo / 10;
        }

    } while (nbr_etapes > 11);

    if (from_home)
    {
        affiche_animation_khfifa(you_want, renderer, 414, 442, 2); // laoding out
        affiche_image(renderer, prpl);
        affiche_animation(you_want, renderer, 678, 720, 1); // p vs m in khasra :(
    }
    affiche_image(renderer, PLAYERVSMACHINE);

    // affichina word w flipe size w max nmbr of flips
    char spr[6];
    sprintf(spr, "%d", N);
    SDL_Rect Message_rect_int = {672, 197, 25, 21};
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    Message_rect_int.y = Message_rect_int.y + 102;
    sprintf(spr, "%d", n);
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    SDL_Rect Message_rect_int2 = {668, 385, 30, 30};
    int max_flipe = (nbr_etapes * 2) + 1;
    if (max_flipe > 13) // bach max flipes mayfoutch 13
        max_flipe = 13;
    sprintf(spr, "%d", max_flipe - 1);
    inserer_text(renderer, spr, red, Message_rect_int2, 30, false);

    // hado ta3 ra9m estar
    Message_rect_int.x = 910;
    Message_rect_int.y = 123;
    Message_rect_int.w = 20;
    Message_rect_int.h = 24;

    // rect init nehtajohom fel affichage
    SDL_Rect Message_rect_int_line = {1270, 123, 20, 24}; // ta3 wch 9lebna
    SDL_Rect Message_rect = {947, 115, 22, 31};           // hada ta3 estar li ki nebelbou nafiichiwh
    SDL_Rect Message_rect_inverse = {946, 109, 22, 31};
    SDL_Rect Message_rect_enrg = Message_rect;
    SDL_Rect Message_rect_inverse_enrg = Message_rect_inverse;

    // affichina start word w finish word
    SDL_Rect Message_rect_T1 = {516, 540, 20, 32};
    SDL_Rect Message_rect_inverse_T1 = {515, 534, 20, 32};
    affiche_Resultat(Tinit, renderer, white, N, 44, Message_rect_T1, Message_rect_inverse_T1, 1);
    Message_rect_T1.y = Message_rect_T1.y + 152;
    Message_rect_inverse_T1.y = Message_rect_inverse_T1.y + 152;
    affiche_Resultat(resulta->vect, renderer, white, N, 44, Message_rect_T1, Message_rect_inverse_T1, 1);

    //---------------------------------------------------------------------------------------------------------------
    int time_machine = 0, num_etape = 1; // hada li nverifiw bih bah naffichiw estar li wrah fel cas machine
    bool first_time = true;

    // hado li naffichiw bihom wech 9elbet la machine estar kamet
    SDL_Rect Message_rectma = {225 - 110, 115, 22, 31};
    SDL_Rect Message_rectma_inverse = {225 - 110, 109, 22, 31};
    SDL_Rect Message_rectma_inverse_enrg = Message_rectma_inverse;

    SDL_Rect Message_rectma_int_line = {548 - 110, 123, 20, 24}; // hada li naffichiw bih wech 9lebna fel cas machine (pos)
    SDL_Rect Message_rectma_int;                                 // hada li nafichiw bih ra9m estar fel cas machine
    Message_rectma_int.x = 188 - 110;
    Message_rectma_int.y = 123;
    Message_rectma_int.w = 20;
    Message_rectma_int.h = 24;

    int line = resulta->line;
    liste tete2 = cre_de_liste_cherche(Tinit, line, N, n);
    p = tete2;

    //---------------------------------------------------------------------------------------------------------------

    printf("\n                                  the start word is:\n\n"); // affichina starting word
    for (int i = 0; i < 10; i++)
    { // affiche word
        printf("|  %d\t", Tinit[i]);
    }
    printf("|  n=0\n\n");

    printf("\n                                  the result word is:\n\n"); // affichina fhinish word
    for (int i = 0; i < 10; i++)
    { // affiche word
        printf("|  %d\t", resulta->vect[i]);
    }
    printf("|  n=%d\n\n", nbr_etapes);

    int tab_tempo[10];

    // creation de premier element of player liste
    liste tete_liste_player = malloc(sizeof(ne));
    for (i = 0; i < 10; i++)
    {
        tete_liste_player->vect[i] = Tinit[i];
    }

    tete_liste_player->line = 0;
    tete_liste_player->svt = NULL;
    liste Q = tete_liste_player;

    // affichina estar elewel moraha bedena les rects
    sprintf(spr, "%d", 1); // 1 ra9m estar
    inserer_text(renderer, spr, white, Message_rect_int, 24, true);
    sprintf(spr, "%d", 0); // 0 mazal ma ne9elbou
    inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);

    affiche_Resultat(tete_liste_player->vect, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);
    Message_rect.x = Message_rect_enrg.x;
    Message_rect_inverse.x = Message_rect_inverse_enrg.x;
    Message_rect.y = Message_rect.y + 51;
    Message_rect_inverse.y = Message_rect_inverse.y + 51;
    Message_rect_int.y = Message_rect_int.y + 51;
    Message_rect_int_line.y = Message_rect_int_line.y + 51;

    // decla mat li n enregi fiha wah glebna
    int mat_of_words[30][8]; // 3dnk mat of words w vect of pos w Tinit w resulta->vect w max flipe li tehtajhom f pause
    int vect_of_pos[13];
    for (i = 0; i < 30; i++)
    {
        vect_of_pos[i] = -1; //-1 tema vide
        for (j = 0; j < 8; j++)
        {
            mat_of_words[i][j] = 0;
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for (i = 0; i < 30; i++)
    {
        printf("pos=%d\t|", vect_of_pos[i]);
        for (j = 0; j < 8; j++)
        {
            printf("%d\t|", mat_of_words[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for (j = 0; j < 8; j++)
    {
        mat_of_words[0][j] = Tinit[j];
    }
    vect_of_pos[0] = 0;

    for (i = 0; i < 30; i++)
    {
        printf("pos=%d\t|", vect_of_pos[i]);
        for (j = 0; j < 8; j++)
        {
            printf("%d\t|", mat_of_words[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    // boucle bah koul mara lutilisateur ye9leb

    bool win, lose, new_flipe = false;
    win = false;
    lose = false;
    cndi = true;
    int num_of_flipes = 1;
    int pos, cel_y;

    float time_playing = 0; // hada li iokhrejena ykoun bel fasila nrodouh entier w naffichiwh
    int previouse_time = 0;
    int current_time = SDL_GetTicks();
    printf("currenttime%d ", current_time);
    float delta_time = 0; // delta ma3rof beli hiya efar9
    int time_int;

    int time_verification = 1;
    SDL_Rect time_rect = {180, 35, 0, 0};
    SDL_Rect timebackrect = {0, 0, 287, 95};

    sprintf(spr, "%d", 0); // m3a lbedya kaml naffichiw 0
    inserer_text(renderer, spr, white, time_rect, 30, false);
    bool pause = false;

    while (cndi)
    {

        // timer mise a jour

        previouse_time = current_time;
        current_time = SDL_GetTicks();
        delta_time = (current_time - previouse_time) / 1000.0F; // ta9sim alf bah yweli bel second mais mazalou float
        time_playing += delta_time;
        time_int = floor(time_playing); // bah yweli entier
        if (time_playing > time_verification)
        {
            affiche_sha_or_glow(renderer, timebackgroundmvp, timebackrect);
            sprintf(spr, "%d", time_int);
            inserer_text(renderer, spr, white, time_rect, 30, false);
            time_verification++;
        }

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_sha_or_glow(renderer, MACHINEPAUSEREPEAT, image_position);
            switch (event.type)
            {
            case SDL_MOUSEMOTION:
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    glow_position.x = 1147;
                    glow_position.y = 10;
                    glow_position.w = 90;
                    glow_position.h = 90;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    glow_position.x = 1272;
                    glow_position.y = 10;
                    glow_position.w = 82;
                    glow_position.h = 86;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                printf("%d / %d\n", event.motion.x, event.motion.y);
                SDL_RenderPresent(renderer);

                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    pause = true;
                    affiche_image(renderer, PAUSEMACHINE);
                    while (pause)
                    {
                        SDL_Event event;
                        while (SDL_PollEvent(&event))
                        {
                            affiche_image_nopresent(renderer, PAUSEMACHINE);
                            switch (event.type)
                            {
                            case SDL_MOUSEMOTION:
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    glow_position.x = 580;
                                    glow_position.y = 283;
                                    glow_position.w = 210;
                                    glow_position.h = 207;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    glow_position.x = 822;
                                    glow_position.y = 309;
                                    glow_position.w = 153;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    glow_position.x = 391;
                                    glow_position.y = 309;
                                    glow_position.w = 149;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                printf("%d / %d\n", event.motion.x, event.motion.y);
                                SDL_RenderPresent(renderer);

                                break;
                            case SDL_MOUSEBUTTONDOWN:
                                printf("click\n");
                                Mix_PlayChannel(-1, click, 0);
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, resulta->vect, max_flipe, true, first_time, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, false);
                                    return;
                                    pause = false;
                                    break;
                                }
                                if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                                {
                                    playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, false);
                                    return;

                                    break;
                                }
                                if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                                {
                                    affiche_animation(you_want, renderer, 793, 819, 2); // pause mach out
                                    pause = false;
                                    return; // bah yokhroj men fct player tema yweli fel home
                                    break;

                                case SDL_QUIT:
                                    *k = 0;
                                    pause = false;
                                    break;
                                }
                            }
                        }
                    }

                    return;
                    break;
                }
                pos = (event.button.x - 935) / 40;
                pos++;
                cel_y = (event.button.y - 98) / 51;
                if (pos > 0 && pos < N - n + 2 && cel_y == num_of_flipes - 1)
                    new_flipe = true;

                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, false);
                    return;
                    break;
                case SDL_QUIT:
                    *k = 0;
                    return;
                    break;
                }
                break;

                //}hadi ta3 l if li galek ilyes tji haka bah temchi

            case SDL_KEYDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);

                if (event.key.keysym.sym == SDLK_1)
                {
                    pos = 1;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_2)
                {
                    pos = 2;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_3)
                {
                    pos = 3;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_4)
                {
                    pos = 4;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_5)
                {
                    pos = 5;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_6)
                {
                    pos = 6;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_7)
                {
                    pos = 7;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                    // 8 makach lakhaterch minimom ye9leb 2 tema koun ndirou 8 tema ye9leb thamen w tase3 tema pos daymen <N-n
                }
            }
        }

        //--------------------------------------------------------------------------------------------------------------

        if (time_playing > time_machine && p != NULL)
        {
            affiche_Resultat(p->vect, renderer, white, N, 40, Message_rectma, Message_rectma_inverse, 1);
            sprintf(spr, "%d", (p->line) % 10);
            inserer_text(renderer, spr, white, Message_rectma_int_line, 24, true);
            sprintf(spr, "%d", num_etape);
            inserer_text(renderer, spr, white, Message_rectma_int, 24, true);
            num_etape++;
            p = p->svt;
            time_machine++;
            time_machine++;
            // nbedlou les rect
            Message_rect.x = Message_rect_enrg.x;
            Message_rectma_inverse.x = Message_rectma_inverse_enrg.x;
            Message_rectma.y = Message_rectma.y + 51;
            Message_rectma_inverse.y = Message_rectma_inverse.y + 51;
            Message_rectma_int.y = Message_rectma_int.y + 51;
            Message_rectma_int_line.y = Message_rectma_int_line.y + 51;
        }
        if (p == NULL && first_time)
        {
            first_time = false;
            Mix_PlayChannel(-1, YWIN, 0);
            affiche_animation(you_want, renderer, 721, 748, 2);   // p vs m out
            affiche_animation(you_want, renderer, 1035, 1078, 3); // machwin in
            bool machinewin = true;
            if (machinewin)
                affiche_image(renderer, MACHINEWIN);
            while (machinewin)
            {
                SDL_Event event;
                while (SDL_PollEvent(&event))
                {
                    affiche_image_nopresent(renderer, MACHINEWIN);
                    switch (event.type)
                    {
                    case SDL_MOUSEMOTION:
                        if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                        {
                            glow_position.x = 580;
                            glow_position.y = 283;
                            glow_position.w = 210;
                            glow_position.h = 207;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                        {
                            glow_position.x = 822;
                            glow_position.y = 309;
                            glow_position.w = 153;
                            glow_position.h = 148;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                        {
                            glow_position.x = 391;
                            glow_position.y = 309;
                            glow_position.w = 149;
                            glow_position.h = 148;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        printf("%d / %d\n", event.motion.x, event.motion.y);
                        SDL_RenderPresent(renderer);

                        break;
                    case SDL_MOUSEBUTTONDOWN:
                        printf("click\n");
                        Mix_PlayChannel(-1, click, 0);
                        if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                        {
                            affiche_animation(you_want, renderer, 1172, 1199, 2); // machwin out
                            resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, resulta->vect, max_flipe, false, false, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, true);
                            return;
                            machinewin = false;
                            break;
                        }
                        if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                        {
                            machinewin = false;
                            affiche_animation(you_want, renderer, 1172, 1199, 2); // machwin out
                            playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, true);
                            return;
                            break;
                        }
                        if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                        {
                            affiche_animation(you_want, renderer, 1172, 1199, 2); // machwin out
                            machinewin = false;
                            cndi = false;
                            break;

                        case SDL_QUIT:
                            *k = 0;
                            cndi = false;
                            machinewin = false;
                            break;
                        }
                    }
                }
            }
        }
        //--------------------------------------------------------------------------------------------------------------

        if (new_flipe)
        { // lcondition hadi lazem bah mechi koul mara tet3awed elboucle yafichi

            for (i = 0; i < 10; i++)
            {
                tab_tempo[i] = Q->vect[i];
            }

            cre_de_vect(tab_tempo, pos - 1, n);

            for (j = 0; j < 8; j++)
            {
                mat_of_words[num_of_flipes][j] = tab_tempo[j];
            }
            vect_of_pos[num_of_flipes] = pos;

            for (i = 0; i < 30; i++)
            {
                printf("pos=%d\t|", vect_of_pos[i]);
                for (j = 0; j < 8; j++)
                {
                    printf("%d\t|", mat_of_words[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("\n");
            printf("\n");

            Ajout_apres(&Q, tab_tempo, 0, 0);

            // kout 9ader tekhdem bel tab tompo wahdo koul  mara te9leb fih b cre de vect
            // moraha taffichi w virifi ida rbah bla ma dir liste player lakin goult balak dir
            // mouchkil fel affichach bel sdl tema khalitha encas w nehtajouha

            // naffichiw ra9m elkhotwa w wach 9lebna
            num_of_flipes++;
            sprintf(spr, "%d", num_of_flipes);
            inserer_text(renderer, spr, white, Message_rect_int, 24, true);

            // naffichiw cha khrejna w ngedmou les rects

            affiche_Resultat(Q->vect, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);

            sprintf(spr, "%d", pos);
            inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);
            Message_rect.x = Message_rect_enrg.x;
            Message_rect_inverse.x = Message_rect_inverse_enrg.x;
            Message_rect.y = Message_rect.y + 51;
            Message_rect_inverse.y = Message_rect_inverse.y + 51;
            Message_rect_int.y = Message_rect_int.y + 51;
            Message_rect_int_line.y = Message_rect_int_line.y + 51;

            for (int i = 0; i < 10; i++)
            { // affiche word li kharjetena
                printf("|  %d\t", Q->vect[i]);
            }
            printf("  |n=%d\n", num_of_flipes);
            win = true;
            for (int i = 0; i < 10; i++)
            { // affiche word
                if ((resulta->vect[i]) != (Q->vect[i]))
                    win = false;
            }

            if (num_of_flipes == max_flipe && win == false)
                lose = true;

            if ((win == true) || (lose == true))
                cndi = false;

            new_flipe = false; // bah ye9leb khatra bark
        }

    } // fin condi
    if ((win))
    {

        SDL_Rect Winrect = {0, 0, 1366, 676};
        SDL_Rect score_rect = {860, 687, 80, 80};
        SDL_Color blue = {0, 255, 252};

        int score = floor(time_playing / nbr_etapes) * 5;
        printf("your score:%d", score);

        Mix_PlayChannel(-1, YWIN, 0);
        affiche_animation(you_want, renderer, 721, 748, 2); // p vs m out
        affiche_animation(you_want, renderer, 885, 939, 3); // youwin in
        sprintf(spr, "%d", score);
        affiche_image(renderer, YOUWIN);
        inserer_text(renderer, spr, blue, score_rect, 51, false);
        while (win)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_sha_or_glow(renderer, YOUWINSC, Winrect);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 939, 966, 2); // you win out
                        resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, resulta->vect, max_flipe, false, first_time, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, true);
                        return;
                        win = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        win = false;
                        affiche_animation(you_want, renderer, 939, 966, 2); // you win out
                        playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 939, 966, 2); // you win out
                        win = false;
                        break;

                    case SDL_QUIT:
                        *k = 0;
                        win = false;
                        break;
                    }
                }
            }
        }
        printf("                                      < you win! >\n");
    }

    if ((lose))
    {
        Mix_PlayChannel(-1, YLOSE, 0);
        affiche_animation(you_want, renderer, 721, 748, 2);  // p vs m out
        affiche_animation(you_want, renderer, 967, 1008, 3); // youlose in
        affiche_image(renderer, YOULOSE);
        while (lose)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_image_nopresent(renderer, YOULOSE);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // youlose out
                        resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, resulta->vect, max_flipe, false, first_time, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, true);
                        return;
                        lose = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // youlose out
                        lose = false;
                        playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // youlose out
                        lose = false;

                        break;
                    case SDL_QUIT:
                        *k = 0;
                        lose = 0;
                        break;
                    }
                }
            }
        }
        printf("                                      < you lose! >\n");
    }
}

void affiche_Resultatr(int T[10], SDL_Renderer *renderer, SDL_Color white, int N, int n, SDL_Rect Message_rect, SDL_Rect Message_rect_inverse, int u)
{
    SDL_Color red = {255, 0, 0};
    TTF_Font *Sans = TTF_OpenFont("Font/Mokoto Glitch.ttf", 32);
    for (int i = 0; i < N; i++)
    {
        if (T[i] == 1)
        {
            inserer_textr(renderer, "A", white, Message_rect, Sans);
        }

        else if (T[i] == 2)
        {
            inserer_textr(renderer, "B", white, Message_rect, Sans);
        }
        else if (T[i] == 3)
        {
            inserer_textr(renderer, "C", white, Message_rect, Sans);
        }
        else if (T[i] == 4)
        {
            inserer_textr(renderer, "D", white, Message_rect, Sans);
        }
        else if (T[i] == 5)
        {
            inserer_textr(renderer, "E", white, Message_rect, Sans);
        }
        else if (T[i] == 6)
        {
            inserer_textr(renderer, "F", white, Message_rect, Sans);
        }
        else if (T[i] == 7)
        {
            inserer_textr(renderer, "G", white, Message_rect, Sans);
        }
        else if (T[i] == 8)
        {
            inserer_textr(renderer, "H", white, Message_rect, Sans);
        }
        else if (T[i] == 9)
        {
            inserer_textr(renderer, "I", white, Message_rect, Sans);
        }
        else if (T[i] == 10)
        {
            inserer_textr(renderer, "J", white, Message_rect, Sans);
        }
        else if (T[i] == 11)
        {
            inserer_textr(renderer, "K", white, Message_rect, Sans);
        }
        else if (T[i] == 12)
        {
            inserer_textr(renderer, "L", white, Message_rect, Sans);
        }
        else if (T[i] == 13)
        {
            inserer_textr(renderer, "M", white, Message_rect, Sans);
        }
        else if (T[i] == 14)
        {
            inserer_textr(renderer, "N", white, Message_rect, Sans);
        }
        else if (T[i] == 15)
        {
            inserer_textr(renderer, "O", white, Message_rect, Sans);
        }
        else if (T[i] == 16)
        {
            inserer_textr(renderer, "P", white, Message_rect, Sans);
        }
        else if (T[i] == 17)
        {
            inserer_textr(renderer, "Q", white, Message_rect, Sans);
        }
        else if (T[i] == 18)
        {
            inserer_textr(renderer, "R", white, Message_rect, Sans);
        }
        else if (T[i] == 19)
        {
            inserer_textr(renderer, "S", white, Message_rect, Sans);
        }
        else if (T[i] == 20)
        {
            inserer_textr(renderer, "T", white, Message_rect, Sans);
        }
        else if (T[i] == 21)
        {
            inserer_textr(renderer, "U", white, Message_rect, Sans);
        }
        else if (T[i] == 22)
        {
            inserer_textr(renderer, "V", white, Message_rect, Sans);
        }
        else if (T[i] == 23)
        {
            inserer_textr(renderer, "W", white, Message_rect, Sans);
        }
        else if (T[i] == 24)
        {
            inserer_textr(renderer, "X", white, Message_rect, Sans);
        }
        else if (T[i] == 25)
        {
            inserer_textr(renderer, "Y", white, Message_rect, Sans);
        }
        else if (T[i] == 26)
        {
            inserer_textr(renderer, "Z", white, Message_rect, Sans);
        }
        else if (T[i] == -1)
        {
            inserer_textr_retation(renderer, "A", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -2)
        {
            inserer_textr_retation(renderer, "B", white, Message_rect_inverse, Sans);
        }

        else if (T[i] == -3)
        {
            inserer_textr_retation(renderer, "C", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -4)
        {
            inserer_textr_retation(renderer, "D", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -5)
        {
            inserer_textr_retation(renderer, "E", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -6)
        {
            inserer_textr_retation(renderer, "F", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -7)
        {
            inserer_textr_retation(renderer, "G", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -8)
        {
            inserer_textr_retation(renderer, "H", white, Message_rect_inverse, Sans);
            inserer_textr_retation(renderer, "'", red, Message_rect_inverse, Sans);
        }
        else if (T[i] == -9)
        {
            inserer_textr_retation(renderer, "I", white, Message_rect_inverse, Sans);
            inserer_textr_retation(renderer, "'", red, Message_rect_inverse, Sans);
        }
        else if (T[i] == -10)
        {
            inserer_textr_retation(renderer, "J", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -11)
        {
            inserer_textr_retation(renderer, "K", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -12)
        {
            inserer_textr_retation(renderer, "L", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -13)
        {
            inserer_textr_retation(renderer, "M", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -14)
        {
            inserer_textr_retation(renderer, "N", white, Message_rect_inverse, Sans);
            inserer_textr_retation(renderer, "'", red, Message_rect_inverse, Sans);
        }
        else if (T[i] == -15)
        {
            inserer_textr_retation(renderer, "O", white, Message_rect_inverse, Sans);
            inserer_textr_retation(renderer, "'", red, Message_rect_inverse, Sans);
        }
        else if (T[i] == -16)
        {
            inserer_textr_retation(renderer, "P", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -17)
        {
            inserer_textr_retation(renderer, "Q", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -18)
        {
            inserer_textr_retation(renderer, "R", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -19)
        {
            inserer_textr_retation(renderer, "S", white, Message_rect_inverse, Sans);
            inserer_textr_retation(renderer, "'", red, Message_rect_inverse, Sans);
        }
        else if (T[i] == -20)
        {
            inserer_textr_retation(renderer, "T", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -21)
        {
            inserer_textr_retation(renderer, "U", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -22)
        {
            inserer_textr_retation(renderer, "V", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -23)
        {
            inserer_textr_retation(renderer, "W", white, Message_rect_inverse, Sans);
        }
        else if (T[i] == -24)
        {
            inserer_textr_retation(renderer, "X", white, Message_rect_inverse, Sans);
            inserer_textr_retation(renderer, "'", red, Message_rect_inverse, Sans);
        }
        else if (T[i] == -25)
        {
            inserer_textr_retation(renderer, "Y", white, Message_rect_inverse, Sans);
        }
        else
        {
            if (T[i] == -26)
            {
                inserer_textr_retation(renderer, "Z", white, Message_rect_inverse, Sans);
                inserer_textr_retation(renderer, "'", red, Message_rect_inverse, Sans);
            }
        }
        Message_rect.x = Message_rect.x + n;
        Message_rect_inverse.x = Message_rect_inverse.x + n;
    }
    TTF_CloseFont(Sans);
}

void affiche_Resultat(int T[10], SDL_Renderer *renderer, SDL_Color white, int N, int n, SDL_Rect Message_rect, SDL_Rect Message_rect_inverse, int u)
{
    SDL_Color red = {255, 0, 0};
    for (int i = 0; i < N; i++)
    {
        if (T[i] == 1)
        {
            inserer_text(renderer, "A", white, Message_rect, 32, true);
        }

        else if (T[i] == 2)
        {
            inserer_text(renderer, "B", white, Message_rect, 32, true);
        }
        else if (T[i] == 3)
        {
            inserer_text(renderer, "C", white, Message_rect, 32, true);
        }
        else if (T[i] == 4)
        {
            inserer_text(renderer, "D", white, Message_rect, 32, true);
        }
        else if (T[i] == 5)
        {
            inserer_text(renderer, "E", white, Message_rect, 32, true);
        }
        else if (T[i] == 6)
        {
            inserer_text(renderer, "F", white, Message_rect, 32, true);
        }
        else if (T[i] == 7)
        {
            inserer_text(renderer, "G", white, Message_rect, 32, true);
        }
        else if (T[i] == 8)
        {
            inserer_text(renderer, "H", white, Message_rect, 32, true);
        }
        else if (T[i] == 9)
        {
            inserer_text(renderer, "I", white, Message_rect, 32, true);
        }
        else if (T[i] == 10)
        {
            inserer_text(renderer, "J", white, Message_rect, 32, true);
        }
        else if (T[i] == 11)
        {
            inserer_text(renderer, "K", white, Message_rect, 32, true);
        }
        else if (T[i] == 12)
        {
            inserer_text(renderer, "L", white, Message_rect, 32, true);
        }
        else if (T[i] == 13)
        {
            inserer_text(renderer, "M", white, Message_rect, 32, true);
        }
        else if (T[i] == 14)
        {
            inserer_text(renderer, "N", white, Message_rect, 32, true);
        }
        else if (T[i] == 15)
        {
            inserer_text(renderer, "O", white, Message_rect, 32, true);
        }
        else if (T[i] == 16)
        {
            inserer_text(renderer, "P", white, Message_rect, 32, true);
        }
        else if (T[i] == 17)
        {
            inserer_text(renderer, "Q", white, Message_rect, 32, true);
        }
        else if (T[i] == 18)
        {
            inserer_text(renderer, "R", white, Message_rect, 32, true);
        }
        else if (T[i] == 19)
        {
            inserer_text(renderer, "S", white, Message_rect, 32, true);
        }
        else if (T[i] == 20)
        {
            inserer_text(renderer, "T", white, Message_rect, 32, true);
        }
        else if (T[i] == 21)
        {
            inserer_text(renderer, "U", white, Message_rect, 32, true);
        }
        else if (T[i] == 22)
        {
            inserer_text(renderer, "V", white, Message_rect, 32, true);
        }
        else if (T[i] == 23)
        {
            inserer_text(renderer, "W", white, Message_rect, 32, true);
        }
        else if (T[i] == 24)
        {
            inserer_text(renderer, "X", white, Message_rect, 32, true);
        }
        else if (T[i] == 25)
        {
            inserer_text(renderer, "Y", white, Message_rect, 32, true);
        }
        else if (T[i] == 26)
        {
            inserer_text(renderer, "Z", white, Message_rect, 32, true);
        }
        else if (T[i] == -1)
        {
            inserer_text_retation(renderer, "A", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -2)
        {
            inserer_text_retation(renderer, "B", white, Message_rect_inverse, 32, true);
        }

        else if (T[i] == -3)
        {
            inserer_text_retation(renderer, "C", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -4)
        {
            inserer_text_retation(renderer, "D", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -5)
        {
            inserer_text_retation(renderer, "E", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -6)
        {
            inserer_text_retation(renderer, "F", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -7)
        {
            inserer_text_retation(renderer, "G", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -8)
        {
            inserer_text_retation(renderer, "H", white, Message_rect_inverse, 32, true);
            inserer_text_retation(renderer, "'", red, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -9)
        {
            inserer_text_retation(renderer, "I", white, Message_rect_inverse, 32, true);
            inserer_text_retation(renderer, "'", red, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -10)
        {
            inserer_text_retation(renderer, "J", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -11)
        {
            inserer_text_retation(renderer, "K", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -12)
        {
            inserer_text_retation(renderer, "L", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -13)
        {
            inserer_text_retation(renderer, "M", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -14)
        {
            inserer_text_retation(renderer, "N", white, Message_rect_inverse, 32, true);
            inserer_text_retation(renderer, "'", red, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -15)
        {
            inserer_text_retation(renderer, "O", white, Message_rect_inverse, 32, true);
            inserer_text_retation(renderer, "'", red, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -16)
        {
            inserer_text_retation(renderer, "P", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -17)
        {
            inserer_text_retation(renderer, "Q", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -18)
        {
            inserer_text_retation(renderer, "R", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -19)
        {
            inserer_text_retation(renderer, "S", white, Message_rect_inverse, 32, true);
            inserer_text_retation(renderer, "'", red, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -20)
        {
            inserer_text_retation(renderer, "T", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -21)
        {
            inserer_text_retation(renderer, "U", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -22)
        {
            inserer_text_retation(renderer, "V", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -23)
        {
            inserer_text_retation(renderer, "W", white, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -24)
        {
            inserer_text_retation(renderer, "X", white, Message_rect_inverse, 32, true);
            inserer_text_retation(renderer, "'", red, Message_rect_inverse, 32, true);
        }
        else if (T[i] == -25)
        {
            inserer_text_retation(renderer, "Y", white, Message_rect_inverse, 32, true);
        }
        else
        {
            if (T[i] == -26)
            {
                inserer_text_retation(renderer, "Z", white, Message_rect_inverse, 32, true);
                inserer_text_retation(renderer, "'", red, Message_rect_inverse, 32, true);
            }
        }
        Message_rect.x = Message_rect.x + n;
        Message_rect_inverse.x = Message_rect_inverse.x + n;
    }
}

void affiche_main(int LETTER, SDL_Renderer *renderer, SDL_Color white, SDL_Rect Message_rect, int time)
{

    if ((time % 2) == 0)
    {

        if (LETTER == 1)
        {
            inserer_text(renderer, "A", white, Message_rect, 0, false);
        }

        else if (LETTER == 2)
        {
            inserer_text(renderer, "B", white, Message_rect, 0, false);
        }
        else if (LETTER == 3)
        {
            inserer_text(renderer, "C", white, Message_rect, 0, false);
        }
        else if (LETTER == 4)
        {
            inserer_text(renderer, "D", white, Message_rect, 0, false);
        }
        else if (LETTER == 5)
        {
            inserer_text(renderer, "E", white, Message_rect, 0, false);
        }
        else if (LETTER == 6)
        {
            inserer_text(renderer, "F", white, Message_rect, 0, false);
        }
        else if (LETTER == 7)
        {
            inserer_text(renderer, "G", white, Message_rect, 0, false);
        }
        else if (LETTER == 8)
        {
            inserer_text(renderer, "H", white, Message_rect, 0, false);
        }
        else if (LETTER == 9)
        {
            inserer_text(renderer, "I", white, Message_rect, 0, false);
        }
        else if (LETTER == 10)
        {
            inserer_text(renderer, "J", white, Message_rect, 0, false);
        }
        else if (LETTER == 11)
        {
            inserer_text(renderer, "K", white, Message_rect, 0, false);
        }
        else if (LETTER == 12)
        {
            inserer_text(renderer, "L", white, Message_rect, 0, false);
        }
        else if (LETTER == 13)
        {
            inserer_text(renderer, "M", white, Message_rect, 0, false);
        }
        else if (LETTER == 14)
        {
            inserer_text(renderer, "N", white, Message_rect, 0, false);
        }
        else if (LETTER == 15)
        {
            inserer_text(renderer, "O", white, Message_rect, 0, false);
        }
        else if (LETTER == 16)
        {
            inserer_text(renderer, "P", white, Message_rect, 0, false);
        }
        else if (LETTER == 17)
        {
            inserer_text(renderer, "Q", white, Message_rect, 0, false);
        }
        else if (LETTER == 18)
        {
            inserer_text(renderer, "R", white, Message_rect, 0, false);
        }
        else if (LETTER == 19)
        {
            inserer_text(renderer, "S", white, Message_rect, 0, false);
        }
        else if (LETTER == 20)
        {
            inserer_text(renderer, "T", white, Message_rect, 0, false);
        }
        else if (LETTER == 21)
        {
            inserer_text(renderer, "U", white, Message_rect, 0, false);
        }
        else if (LETTER == 22)
        {
            inserer_text(renderer, "V", white, Message_rect, 0, false);
        }
        else if (LETTER == 23)
        {
            inserer_text(renderer, "W", white, Message_rect, 0, false);
        }
        else if (LETTER == 24)
        {
            inserer_text(renderer, "X", white, Message_rect, 0, false);
        }
        else if (LETTER == 25)
        {
            inserer_text(renderer, "Y", white, Message_rect, 0, false);
        }
        else if (LETTER == 26)
        {
            inserer_text(renderer, "Z", white, Message_rect, 0, false);
        }
    }
    if ((time % 2) == 1)
    {

        if (LETTER == 1)
        {
            inserer_text_retation(renderer, "A", white, Message_rect, 0, false);
        }
        else if (LETTER == 2)
        {
            inserer_text_retation(renderer, "B", white, Message_rect, 0, false);
        }

        else if (LETTER == 3)
        {
            inserer_text_retation(renderer, "C", white, Message_rect, 0, false);
        }
        else if (LETTER == 4)
        {
            inserer_text_retation(renderer, "D", white, Message_rect, 0, false);
        }
        else if (LETTER == 5)
        {
            inserer_text_retation(renderer, "E", white, Message_rect, 0, false);
        }
        else if (LETTER == 6)
        {
            inserer_text_retation(renderer, "F", white, Message_rect, 0, false);
        }
        else if (LETTER == 7)
        {
            inserer_text_retation(renderer, "G", white, Message_rect, 0, false);
        }
        else if (LETTER == 8)
        {
            inserer_text_retation(renderer, "H", white, Message_rect, 0, false);
        }
        else if (LETTER == 9)
        {
            inserer_text_retation(renderer, "I", white, Message_rect, 0, false);
        }
        else if (LETTER == 10)
        {
            inserer_text_retation(renderer, "J", white, Message_rect, 0, false);
        }
        else if (LETTER == 11)
        {
            inserer_text_retation(renderer, "K", white, Message_rect, 0, false);
        }
        else if (LETTER == 12)
        {
            inserer_text_retation(renderer, "L", white, Message_rect, 0, false);
        }
        else if (LETTER == 13)
        {
            inserer_text_retation(renderer, "M", white, Message_rect, 0, false);
        }
        else if (LETTER == 14)
        {
            inserer_text_retation(renderer, "N", white, Message_rect, 0, false);
        }
        else if (LETTER == 15)
        {
            inserer_text_retation(renderer, "O", white, Message_rect, 0, false);
        }
        else if (LETTER == 16)
        {
            inserer_text_retation(renderer, "P", white, Message_rect, 0, false);
        }
        else if (LETTER == 17)
        {
            inserer_text_retation(renderer, "Q", white, Message_rect, 0, false);
        }
        else if (LETTER == 18)
        {
            inserer_text_retation(renderer, "R", white, Message_rect, 0, false);
        }
        else if (LETTER == 19)
        {
            inserer_text_retation(renderer, "S", white, Message_rect, 0, false);
        }
        else if (LETTER == 20)
        {
            inserer_text_retation(renderer, "T", white, Message_rect, 0, false);
        }
        else if (LETTER == 21)
        {
            inserer_text_retation(renderer, "U", white, Message_rect, 0, false);
        }
        else if (LETTER == 22)
        {
            inserer_text_retation(renderer, "V", white, Message_rect, 0, false);
        }
        else if (LETTER == 23)
        {
            inserer_text_retation(renderer, "W", white, Message_rect, 0, false);
        }
        else if (LETTER == 24)
        {
            inserer_text_retation(renderer, "X", white, Message_rect, 0, false);
        }
        else if (LETTER == 25)
        {
            inserer_text_retation(renderer, "Y", white, Message_rect, 0, false);
        }
        else if (LETTER == 26)
        {
            inserer_text_retation(renderer, "Z", white, Message_rect, 0, false);
        }
    }
}

void resume(bool you_want, int N, int n, int mat_of_words[30][8], int vect_of_pos[13], liste Q, int Tinit[10], int Tresultat[10], int max_flipe, int flipes_left, bool can_flipe, int num_of_flipes, int nbr_etapes, SDL_Texture *PAUSEPLAYER, SDL_Texture *PLAYER, SDL_Renderer *renderer, SDL_Window *fenetre, int *k, SDL_Texture *LOADING, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *HIGHSCORE, SDL_Texture *timebackground, float time_playing, int num_1ere_ligne_avec_decal, bool from_home)
{
    SDL_Texture *GAMESAVED = initialize_texture_from_file("images/GAMESAVED.png", renderer);
    SDL_Texture *FLIPESLEFT = initialize_texture_from_file("images/FLIPESLEFT.png", renderer);
    SDL_Texture *PLAYERNOTE = initialize_texture_from_file("images/PLAYERNOTE.png", renderer);
    SDL_Texture *prpl = initialize_texture_from_file("Flipe_animation/443.1.jpg", renderer);
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOWCAREE.png", renderer);
    SDL_Texture *SHAWDOW = initialize_texture_from_file("images/SHAWDOWCAREE.png", renderer);
    SDL_Rect glow_position, image_position = {1366 - 234, 0, 234, 104};
    SDL_Texture *MACHINEPAUSEREPEAT = initialize_texture_from_file("images/MACHINEPAUSEREPEAT.png", renderer);
    Mix_Chunk *YLOSE = Mix_LoadWAV("Sound effects/lose.wav");
    Mix_Chunk *YWIN = Mix_LoadWAV("Sound effects/win.wav");

    SDL_Color white = {255, 255, 255};
    SDL_Color red = {255, 0, 0};
    if (from_home)
    {
        affiche_animation(you_want, renderer, 521, 575, 1); // player in
    }
    affiche_image(renderer, PLAYER);
    int tab_afiche[10];

    if (!can_flipe)
    {
        SDL_Rect player_note_rect = {592, 679, 774, 89};
        affiche_sha_or_glow(renderer, PLAYERNOTE, player_note_rect);
    }
    SDL_Rect Message_rect_T1 = {758, 477, 28, 37};
    SDL_Rect Message_rect_inverse_T1 = {757, 471, 28, 37};
    SDL_Rect Message_rect_T2 = {758, 630, 28, 37};
    SDL_Rect Message_rect_inverse_T2 = {757, 624, 28, 37};
    affiche_Resultat(Tinit, renderer, white, N, 44, Message_rect_T1, Message_rect_inverse_T1, 1);
    affiche_Resultat(Tresultat, renderer, white, N, 44, Message_rect_T2, Message_rect_inverse_T2, 1);
    char spr[6];
    sprintf(spr, "%d", N);
    SDL_Rect Message_rect_int = {850, 173, 30, 30};
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    Message_rect_int.y = 275;
    sprintf(spr, "%d", n);
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    SDL_Rect Message_rect_int2 = {1080, 290, 30, 30};

    sprintf(spr, "%d", flipes_left - 1);
    inserer_text(renderer, spr, red, Message_rect_int2, 30, false);

    // ta3 ra9m estar
    Message_rect_int.x = 186;
    Message_rect_int.y = 115;
    Message_rect_int.w = 20;
    Message_rect_int.h = 24;
    // rect init nehtajohom fel affichage
    SDL_Rect Message_rect_int_line = {546, 115, 20, 24};
    SDL_Rect Message_rect = {225, 108, 22, 31};
    SDL_Rect Message_rect_inverse = {224, 102, 22, 31};
    SDL_Rect Message_rect_enrg = Message_rect;
    SDL_Rect Message_rect_inverse_enrg = Message_rect_inverse;
    for (int i = num_1ere_ligne_avec_decal; i < num_of_flipes; i++)
    { // ki dert hadi lboucle sot beli kout 9aader nekhdem b liste hadik directement bla mat w dir while p !=NULL W p=p->svt w fi blaset tab afiche dit p->vect
        // affichina les etapes w koul mara nbedlou les rects
        sprintf(spr, "%d", i + 1); // ra9m estar
        inserer_text(renderer, spr, white, Message_rect_int, 24, true);
        sprintf(spr, "%d", vect_of_pos[i]); // wach 9lebna
        inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);

        for (int j = 0; j < 8; j++)
        {
            tab_afiche[j] = mat_of_words[i][j];
        }
        affiche_Resultatr(tab_afiche, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);
        Message_rect.x = Message_rect_enrg.x;
        Message_rect_inverse.x = Message_rect_inverse_enrg.x;
        Message_rect.y = Message_rect.y + 51;
        Message_rect_inverse.y = Message_rect_inverse.y + 51;
        Message_rect_int.y = Message_rect_int.y + 51;
        Message_rect_int_line.y = Message_rect_int_line.y + 51;
    }
    SDL_RenderPresent(renderer);
    bool win, lose, pause = false, new_flipe = false;
    win = false;
    lose = false;
    bool cndi = true;
    int pos, cel_y;

    int previouse_time = 0;
    int current_time = SDL_GetTicks();
    float delta_time = 0; // delta ma3rof beli hiya efar9
    int time_int = floor(time_playing);
    ;
    int time_verification = ceil(time_playing);
    SDL_Rect time_rect = {180, 35, 0, 0};
    SDL_Rect timebackrect = {0, 0, 455, 89};

    // laffichage ta3 awah time mor resume
    sprintf(spr, "%d", time_int);
    inserer_text(renderer, spr, white, time_rect, 30, false);
    game game_to_saved;
    SDL_Texture *mat_player_background = initialize_texture_from_file("images/mat_player_background.png", renderer);
    while (cndi)
    {
        if (can_flipe)
        {
            // timer mise a jour
            previouse_time = current_time;
            current_time = SDL_GetTicks();
            delta_time = (current_time - previouse_time) / 1000.0F; // ta9sim alf bah yweli bel second mais mazalou float
            time_playing += delta_time;
            time_int = floor(time_playing); // bah yweli entier
            if (time_playing > time_verification)
            {
                affiche_sha_or_glow(renderer, timebackground, timebackrect);
                sprintf(spr, "%d", time_int);
                inserer_text(renderer, spr, white, time_rect, 30, false);
                time_verification++;
            }
        }

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_sha_or_glow(renderer, MACHINEPAUSEREPEAT, image_position);
            switch (event.type)
            {
            case SDL_MOUSEMOTION:
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    glow_position.x = 1147;
                    glow_position.y = 10;
                    glow_position.w = 90;
                    glow_position.h = 90;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    glow_position.x = 1272;
                    glow_position.y = 10;
                    glow_position.w = 82;
                    glow_position.h = 86;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                printf("%d / %d\n", event.motion.x, event.motion.y);
                SDL_RenderPresent(renderer);

                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    pause = true;
                    affiche_image(renderer, PAUSEPLAYER);
                    while (pause)
                    {
                        SDL_Event event;
                        while (SDL_PollEvent(&event))
                        {
                            affiche_image_nopresent(renderer, PAUSEPLAYER);
                            switch (event.type)
                            {
                            case SDL_MOUSEMOTION:
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    glow_position.x = 580;
                                    glow_position.y = 283;
                                    glow_position.w = 210;
                                    glow_position.h = 207;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    glow_position.x = 822;
                                    glow_position.y = 309;
                                    glow_position.w = 153;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    glow_position.x = 391;
                                    glow_position.y = 309;
                                    glow_position.w = 149;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                printf("%d / %d\n", event.motion.x, event.motion.y);
                                SDL_RenderPresent(renderer);

                                break;
                            case SDL_MOUSEBUTTONDOWN:
                                affiche_image(renderer, PAUSEPLAYER);
                                printf("click\n");
                                Mix_PlayChannel(-1, click, 0);
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    resume(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, Tresultat, max_flipe, flipes_left, can_flipe, num_of_flipes, nbr_etapes, PAUSEPLAYER, PLAYER, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, HIGHSCORE, timebackground, time_playing, num_1ere_ligne_avec_decal, false);
                                    return;
                                    pause = false;
                                    break;
                                }
                                if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                                {
                                    affiche_image(renderer, GAMESAVED);
                                    // hna l 3aks ndeclariw "game to save" nmedoulha koulech moraha nhotoha fel fichier bel fct li dernaha
                                    game_to_saved.N = N;
                                    game_to_saved.n = n;
                                    for (int i = 0; i < 30; i++)
                                    {
                                        game_to_saved.vect_of_pos[i] = vect_of_pos[i];
                                        for (int j = 0; j < 8; j++)
                                        {
                                            game_to_saved.mat_of_words[i][j] = mat_of_words[i][j];
                                        }
                                    }
                                    for (int i = 0; i < 10; i++)
                                    {
                                        game_to_saved.Tinit[i] = Tinit[i];
                                        game_to_saved.Tresultat[i] = Tresultat[i];
                                    }
                                    game_to_saved.max_flipe = max_flipe;
                                    game_to_saved.flipes_left = flipes_left;
                                    game_to_saved.can_flipe = can_flipe;
                                    game_to_saved.num_of_flipes = num_of_flipes;
                                    game_to_saved.nbr_etapes = nbr_etapes;
                                    game_to_saved.time_playing = time_playing;
                                    game_to_saved.num_1ere_ligne_avec_decal = num_1ere_ligne_avec_decal;

                                    copy_game_to_file(game_to_saved);
                                    break;
                                }
                                if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                                {
                                    pause = false;
                                    affiche_animation(you_want, renderer, 858, 884, 2); // pause out
                                    return;                                             // bah yokhroj men fct player tema yweli fel home
                                    break;

                                case SDL_QUIT:
                                    *k = 0;
                                    pause = false;
                                    break;
                                }
                            }
                        }
                    }

                    return;
                    break;
                }
                pos = (event.button.x - 213) / 40;
                pos++;
                cel_y = (event.button.y - 91) / 51;
                if (num_of_flipes > 12)
                {
                    if (cel_y == 12)
                    {
                        cel_y = num_of_flipes - 1;
                    }
                    else
                    {
                        cel_y = -1;
                    }
                }
                if (pos > 0 && pos < N - n + 2 && cel_y == num_of_flipes - 1)
                    new_flipe = true;

                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    player(you_want, fenetre, renderer, k, LOADING, PLAYER, click, YOUWIN, YOULOSE, PAUSEPLAYER, HIGHSCORE, timebackground, false);
                    return;
                    break;
                case SDL_QUIT:
                    *k = 0;
                    return;
                    break;
                }
                break;

                //}hadi ta3 l if li galek ilyes tji haka bah temchi

            case SDL_KEYDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);

                if (event.key.keysym.sym == SDLK_1)
                {
                    pos = 1;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_2)
                {
                    pos = 2;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_3)
                {
                    pos = 3;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_4)
                {
                    pos = 4;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_5)
                {
                    pos = 5;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_6)
                {
                    pos = 6;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_7)
                {
                    pos = 7;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                    // 8 makach lakhaterch minimom ye9leb 2 tema koun ndirou 8 tema ye9leb thamen w tase3 tema pos daymen <N-n
                }
            }
        }

        int tab_tempo[10];
        if (new_flipe && can_flipe)
        { // HADI BAH NHAR TJIH YOU WIN W YDIR RESUME MA TKHALIHCH YE9LEB
            //------------------//decalage------------------------------------------------------------------------------------------
            if (num_of_flipes > 12)
            {
                num_1ere_ligne_avec_decal++;
                SDL_Rect mat_position = {0, 0, 625, 768};
                affiche_sha_or_glow(renderer, mat_player_background, mat_position);
                // ta3 ra9m estar
                Message_rect_int.x = 188;
                Message_rect_int.y = 115;
                Message_rect_int.w = 20;
                Message_rect_int.h = 24;
                // rect init nehtajohom fel affichage
                SDL_Rect Message_rect_int_line = {548, 115, 20, 24};
                SDL_Rect Message_rect = {225, 108, 22, 31};
                SDL_Rect Message_rect_inverse = {225, 102, 22, 31};
                SDL_Rect Message_rect_enrg = Message_rect;
                SDL_Rect Message_rect_inverse_enrg = Message_rect_inverse;
                for (int i = num_1ere_ligne_avec_decal; i < num_of_flipes; i++)
                { // ki dert hadi lboucle sot beli kout 9aader nekhdem b liste hadik directement bla mat w dir while p !=NULL W p=p->svt w fi blaset tab afiche dit p->vect
                    // affichina les etapes w koul mara nbedlou les rects
                    sprintf(spr, "%d", i + 1); // ra9m estar
                    inserer_text(renderer, spr, white, Message_rect_int, 24, true);
                    sprintf(spr, "%d", vect_of_pos[i]); // wach 9lebna
                    inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);

                    for (int j = 0; j < 8; j++)
                    {
                        tab_afiche[j] = mat_of_words[i][j];
                    }
                    affiche_Resultatr(tab_afiche, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);
                    Message_rect.x = Message_rect_enrg.x;
                    Message_rect_inverse.x = Message_rect_inverse_enrg.x;
                    Message_rect.y = Message_rect.y + 51;
                    Message_rect_inverse.y = Message_rect_inverse.y + 51;
                    Message_rect_int.y = Message_rect_int.y + 51;
                    Message_rect_int_line.y = Message_rect_int_line.y + 51;
                }
                SDL_RenderPresent(renderer);
            }

            //------------------//decalage------------------------------------------------------------------------------------------
            SDL_Rect player_note_rect = {592, 679, 774, 89};
            affiche_sha_or_glow(renderer, PLAYERNOTE, player_note_rect);
            SDL_Rect flipes_left_rect = {909, 0, 457, 371};
            flipes_left--;
            affiche_sha_or_glow(renderer, FLIPESLEFT, flipes_left_rect);
            sprintf(spr, "%d", flipes_left - 1);
            inserer_text(renderer, spr, red, Message_rect_int2, 30, false);

            for (int i = 0; i < 10; i++)
            {
                tab_tempo[i] = Q->vect[i];
            }

            cre_de_vect(tab_tempo, pos - 1, n);

            for (int j = 0; j < 8; j++)
            {
                mat_of_words[num_of_flipes][j] = tab_tempo[j];
            }
            vect_of_pos[num_of_flipes] = pos;

            for (int i = 0; i < 30; i++)
            {
                printf("pos=%d\t|", vect_of_pos[i]);
                for (int j = 0; j < 8; j++)
                {
                    printf("%d\t|", mat_of_words[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("\n");
            printf("\n");

            Ajout_apres(&Q, tab_tempo, 0, 0);

            // kout 9ader tekhdem bel tab tompo wahdo koul  mara te9leb fih b cre de vect
            // moraha taffichi w virifi ida rbah bla ma dir liste player lakin goult balak dir
            // mouchkil fel affichach bel sdl tema khalitha encas w nehtajouha

            // naffichiw ra9m elkhotwa w wach 9lebna
            num_of_flipes++;
            sprintf(spr, "%d", num_of_flipes);
            inserer_text(renderer, spr, white, Message_rect_int, 24, true);

            // naffichiw cha khrejna w ngedmou les rects

            affiche_Resultat(Q->vect, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);

            sprintf(spr, "%d", pos);
            inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);
            if (num_of_flipes <= 12)
            {
                Message_rect.x = Message_rect_enrg.x;
                Message_rect_inverse.x = Message_rect_inverse_enrg.x;
                Message_rect.y = Message_rect.y + 51;
                Message_rect_inverse.y = Message_rect_inverse.y + 51;
                Message_rect_int.y = Message_rect_int.y + 51;
                Message_rect_int_line.y = Message_rect_int_line.y + 51;
            }

            for (int i = 0; i < 10; i++)
            { // affiche word li kharjetena
                printf("|  %d\t", Q->vect[i]);
            }
            printf("  |n=%d\n", num_of_flipes);
            win = true;
            for (int i = 0; i < 10; i++)
            { // affiche word
                if ((Tresultat[i]) != (Q->vect[i]))
                    win = false;
            }

            if ((num_of_flipes == max_flipe && win == false) || (time_playing > 300 && win == false))
                lose = true;

            if ((win == true) || (lose == true))
                cndi = false;

            new_flipe = false; // bah ye9leb khatra bark
        }

    } // fin condi
    if ((win))
    {
        SDL_Texture *YOUWINSC = initialize_texture_from_file("images/YOUWINSC.png", renderer);
        SDL_Rect Winrect = {0, 0, 1366, 676};
        // high score
        Mix_PlayChannel(-1, YWIN, 0);
        int score = floor(time_playing / nbr_etapes) * 5;
        printf("your score:%d", score);
        affiche_animation(you_want, renderer, 576, 600, 2); // player out
        high_score(you_want, renderer, time_int, score, HIGHSCORE, click, k);
        affiche_animation(you_want, renderer, 885, 939, 3); // youwin in
        affiche_image(renderer, YOUWIN);
        SDL_Rect score_rect = {860, 687, 80, 80};
        sprintf(spr, "%d", score);
        inserer_text(renderer, spr, white, score_rect, 51, false);
        while (win)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_sha_or_glow(renderer, YOUWINSC, Winrect);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 939, 966, 2); // youwin out
                        affiche_image(renderer, prpl);
                        resume(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, Tresultat, max_flipe, flipes_left, false, num_of_flipes, nbr_etapes, PAUSEPLAYER, PLAYER, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, HIGHSCORE, timebackground, time_playing, num_1ere_ligne_avec_decal, true);
                        return;
                        win = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        win = false;
                        affiche_animation(you_want, renderer, 939, 966, 2); // youwin out
                        affiche_image(renderer, prpl);
                        player(you_want, fenetre, renderer, k, LOADING, PLAYER, click, YOUWIN, YOULOSE, PAUSEPLAYER, HIGHSCORE, timebackground, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        win = false;
                        affiche_animation(you_want, renderer, 939, 966, 2); // youwin out
                        affiche_image(renderer, prpl);
                        break;

                    case SDL_QUIT:
                        *k = 0;
                        win = false;
                        break;
                    }
                }
            }
        }
        printf("                                      < you win! >\n");
    } // fin win
    if ((lose))
    {
        Mix_PlayChannel(-1, YLOSE, 0);
        affiche_animation(you_want, renderer, 576, 600, 2);  // player out
        affiche_animation(you_want, renderer, 967, 1008, 3); // youlose in
        affiche_image(renderer, YOULOSE);
        while (lose)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_image_nopresent(renderer, YOULOSE);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2);                                                                                                                                                                                                                                   // you lose out
                        resume(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, Tresultat, max_flipe, flipes_left, false, num_of_flipes, nbr_etapes, PAUSEPLAYER, PLAYER, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, HIGHSCORE, timebackground, time_playing, num_1ere_ligne_avec_decal, true); // les arguments ta3 resume w player jaw haka barceque resume n3aytolha fi player w player n3aytolha fi resume tema lazem les argument ta3 player tmedhom l resume w kach haja tehtajha resume makach fe player (makach fel les argument w madeclarinahach w khdemna biha kima Tinit .. ) nmedouha l player
                        return;
                        lose = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        lose = false;
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // you lose out
                        player(you_want, fenetre, renderer, k, LOADING, PLAYER, click, YOUWIN, YOULOSE, PAUSEPLAYER, HIGHSCORE, timebackground, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // you lose out
                        lose = false;

                        break;
                    case SDL_QUIT:
                        *k = 0;
                        lose = 0;
                        break;
                    }
                }
            }
        }
        printf("                                      < you lose! >\n");

    } // FIN LOSE
    SDL_DestroyTexture(GAMESAVED);
    SDL_DestroyTexture(FLIPESLEFT);
    SDL_DestroyTexture(PLAYERNOTE);
}

void resume_ma_vs_pla(bool you_want, int N, int n, int mat_of_words[30][8], int vect_of_pos[13], liste Q, int Tinit[10], int Tresultat[10], int max_flipe, bool can_flipe, bool first_time, int num_of_flipes, SDL_Texture *PAUSEMACHINE, SDL_Texture *PLAYERVSMACHINE, SDL_Renderer *renderer, SDL_Window *fenetre, int *k, SDL_Texture *LOADING, Mix_Chunk *click, SDL_Texture *YOUWIN, SDL_Texture *YOULOSE, SDL_Texture *MACHINEWIN, SDL_Texture *timebackgroundmvp, float time_playing, int line, bool from_home)
{
    Mix_Chunk *YLOSE = Mix_LoadWAV("Sound effects/lose.wav");
    Mix_Chunk *YWIN = Mix_LoadWAV("Sound effects/win.wav");
    SDL_Rect glow_position, image_position = {1366 - 234, 0, 234, 104};
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOWCAREE.png", renderer);
    SDL_Texture *YOUWINSC = initialize_texture_from_file("images/YOUWINSC.png", renderer);
    SDL_Texture *SHAWDOW = initialize_texture_from_file("images/SHAWDOWCAREE.png", renderer);
    SDL_Texture *MACHINEPAUSEREPEAT = initialize_texture_from_file("images/MACHINEPAUSEREPEAT.png", renderer);

    SDL_Color white = {255, 255, 255};
    SDL_Color red = {255, 0, 0};
    if (from_home)
    {
        affiche_animation(you_want, renderer, 678, 720, 1); // p vs m in khasra :(
    }
    affiche_image(renderer, PLAYERVSMACHINE);
    char spr[6];
    sprintf(spr, "%d", N);
    SDL_Rect Message_rect_int = {672, 197, 25, 21};
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    Message_rect_int.y = Message_rect_int.y + 102;
    sprintf(spr, "%d", n);
    inserer_text(renderer, spr, white, Message_rect_int, 23, false);
    SDL_Rect Message_rect_int2 = {668, 385, 30, 30};

    sprintf(spr, "%d", max_flipe - 1);
    inserer_text(renderer, spr, red, Message_rect_int2, 30, false);
    Message_rect_int.x = 910;
    Message_rect_int.y = 123;
    Message_rect_int.w = 20;
    Message_rect_int.h = 24;

    //---------------------------------------------------------------------------------------------------------------
    int time_machine = 0, num_etape = 1; // hada li nverifiw bih bah naffichiw estar li wrah fel cas machine

    // hado li naffichiw bihom wech 9elbet la machine estar kamet
    SDL_Rect Message_rectma = {225 - 110, 115, 22, 31};
    SDL_Rect Message_rectma_inverse = {225 - 110, 109, 22, 31};
    SDL_Rect Message_rectma_inverse_enrg = Message_rectma_inverse;

    SDL_Rect Message_rectma_int_line = {548 - 110, 123, 20, 24}; // hada li naffichiw bih wech 9lebna fel cas machine (pos)
    SDL_Rect Message_rectma_int;                                 // hada li nafichiw bih ra9m estar fel cas machine
    Message_rectma_int.x = 188 - 110;
    Message_rectma_int.y = 123;
    Message_rectma_int.w = 20;
    Message_rectma_int.h = 24;
    liste tete = cre_de_liste_cherche(Tinit, line, N, n), p = tete;

    //---------------------------------------------------------------------------------------------------------------

    // rect init nehtajohom fel affichage
    SDL_Rect Message_rect_int_line = {1270, 123, 20, 24}; // ta3 wch 9lebna
    SDL_Rect Message_rect = {947, 115, 22, 31};           // hada ta3 estar li ki nebelbou nafiichiwh
    SDL_Rect Message_rect_inverse = {946, 109, 22, 31};
    SDL_Rect Message_rect_enrg = Message_rect;
    SDL_Rect Message_rect_inverse_enrg = Message_rect_inverse;

    // affichina start word w finish word
    SDL_Rect Message_rect_T1 = {516, 540, 20, 32};
    SDL_Rect Message_rect_inverse_T1 = {515, 534, 20, 32};
    affiche_Resultat(Tinit, renderer, white, N, 44, Message_rect_T1, Message_rect_inverse_T1, 1);
    Message_rect_T1.y = Message_rect_T1.y + 152;
    Message_rect_inverse_T1.y = Message_rect_inverse_T1.y + 152;
    affiche_Resultat(Tresultat, renderer, white, N, 44, Message_rect_T1, Message_rect_inverse_T1, 1);

    int i, j;
    int tab_afiche[10];
    for (i = 0; i < num_of_flipes; i++)
    { // ki dert hadi lboucle sot beli kout 9aader nekhdem b liste hadik directement bla mat w dir while p !=NULL W p=p->svt w fi blaset tab afiche dit p->vect
        // affichina les etapes w koul mara nbedlou les rects
        sprintf(spr, "%d", i + 1); // ra9m estar
        inserer_text(renderer, spr, white, Message_rect_int, 24, true);
        sprintf(spr, "%d", vect_of_pos[i]); // wach 9lebna
        inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);

        for (j = 0; j < 8; j++)
        {
            tab_afiche[j] = mat_of_words[i][j];
        }
        affiche_Resultat(tab_afiche, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);
        Message_rect.x = Message_rect_enrg.x;
        Message_rect_inverse.x = Message_rect_inverse_enrg.x;
        Message_rect.y = Message_rect.y + 51;
        Message_rect_inverse.y = Message_rect_inverse.y + 51;
        Message_rect_int.y = Message_rect_int.y + 51;
        Message_rect_int_line.y = Message_rect_int_line.y + 51;
    }

    bool win, lose, pause = false, new_flipe = false;
    win = false;
    lose = false;
    bool cndi = true;
    int pos, cel_y;

    int previouse_time = 0;
    int current_time = SDL_GetTicks();
    float delta_time = 0; // delta ma3rof beli hiya efar9
    int time_int = floor(time_playing);
    ;
    int time_verification = ceil(time_playing);
    SDL_Rect time_rect = {180, 35, 0, 0};
    SDL_Rect timebackrect = {0, 0, 287, 95};

    // laffichage ta3 awah time mor resume
    sprintf(spr, "%d", time_int);
    inserer_text(renderer, spr, white, time_rect, 30, false);

    while (cndi)
    {
        if (can_flipe && first_time)
        {
            // timer mise a jour
            previouse_time = current_time;
            current_time = SDL_GetTicks();
            delta_time = (current_time - previouse_time) / 1000.0F; // ta9sim alf bah yweli bel second mais mazalou float
            time_playing += delta_time;
            time_int = floor(time_playing); // bah yweli entier
            if (time_playing > time_verification)
            {
                affiche_sha_or_glow(renderer, timebackgroundmvp, timebackrect);
                sprintf(spr, "%d", time_int);
                inserer_text(renderer, spr, white, time_rect, 30, false);
                time_verification++;
            }
        }

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_sha_or_glow(renderer, MACHINEPAUSEREPEAT, image_position);
            switch (event.type)
            {
            case SDL_MOUSEMOTION:
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    glow_position.x = 1147;
                    glow_position.y = 10;
                    glow_position.w = 90;
                    glow_position.h = 90;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    glow_position.x = 1272;
                    glow_position.y = 10;
                    glow_position.w = 82;
                    glow_position.h = 86;
                    printf("glow");
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                printf("%d / %d\n", event.motion.x, event.motion.y);
                SDL_RenderPresent(renderer);

                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);
                if (event.button.x > 1147 && event.button.x < 1237 && event.button.y > 10 && event.button.y < 100)
                {
                    pause = true;
                    affiche_image(renderer, PAUSEMACHINE);
                    while (pause)
                    {
                        SDL_Event event;
                        while (SDL_PollEvent(&event))
                        {
                            affiche_image_nopresent(renderer, PAUSEMACHINE);
                            switch (event.type)
                            {
                            case SDL_MOUSEMOTION:
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    glow_position.x = 580;
                                    glow_position.y = 283;
                                    glow_position.w = 210;
                                    glow_position.h = 207;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                                {
                                    glow_position.x = 822;
                                    glow_position.y = 309;
                                    glow_position.w = 153;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                                {
                                    glow_position.x = 391;
                                    glow_position.y = 309;
                                    glow_position.w = 149;
                                    glow_position.h = 148;
                                    printf("glow");
                                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                                }
                                else
                                {
                                    glow_position.x = 0;
                                    glow_position.y = 0;
                                    glow_position.w = 0;
                                    glow_position.h = 0;
                                }
                                printf("%d / %d\n", event.motion.x, event.motion.y);
                                SDL_RenderPresent(renderer);

                                break;
                            case SDL_MOUSEBUTTONDOWN:
                                printf("click\n");
                                Mix_PlayChannel(-1, click, 0);
                                if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                                {
                                    resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, Tresultat, max_flipe, can_flipe, first_time, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, false);
                                    return;
                                    pause = false;
                                    break;
                                }
                                if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                                {

                                    playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, false);
                                    return;

                                    break;
                                }
                                if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                                {
                                    affiche_animation(you_want, renderer, 793, 819, 2); // pause mach out
                                    pause = false;
                                    return; // bah yokhroj men fct player tema yweli fel home
                                    break;

                                case SDL_QUIT:
                                    *k = 0;
                                    pause = false;
                                    break;
                                }
                            }
                        }
                    }

                    return;
                    break;
                }
                pos = (event.button.x - 935) / 40;
                pos++;
                cel_y = (event.button.y - 98) / 51;
                if (pos > 0 && pos < N - n + 2 && cel_y == num_of_flipes - 1)
                {
                    new_flipe = true;
                }

                if (event.button.x > 1272 && event.button.x < 1354 && event.button.y > 10 && event.button.y < 96)
                {
                    playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, false);
                    return;
                    break;
                case SDL_QUIT:
                    *k = 0;
                    return;
                    break;
                }
                break;

                //}hadi ta3 l if li galek ilyes tji haka bah temchi

            case SDL_KEYDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);

                if (event.key.keysym.sym == SDLK_1)
                {
                    pos = 1;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_2)
                {
                    pos = 2;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_3)
                {
                    pos = 3;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_4)
                {
                    pos = 4;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_5)
                {
                    pos = 5;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_6)
                {
                    pos = 6;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                }
                if (event.key.keysym.sym == SDLK_7)
                {
                    pos = 7;
                    if (pos < N - n + 2)
                        new_flipe = true;
                    break;
                    // 8 makach lakhaterch minimom ye9leb 2 tema koun ndirou 8 tema ye9leb thamen w tase3 tema pos daymen <N-n
                }
            }
        }

        //--------------------------------------------------------------------------------------------------------------

        if (time_playing > time_machine && p != NULL)
        {
            affiche_Resultat(p->vect, renderer, white, N, 40, Message_rectma, Message_rectma_inverse, 1);
            sprintf(spr, "%d", (p->line) % 10);
            inserer_text(renderer, spr, white, Message_rectma_int_line, 24, true);
            sprintf(spr, "%d", num_etape);
            inserer_text(renderer, spr, white, Message_rectma_int, 24, true);
            num_etape++;
            p = p->svt;
            time_machine++;
            time_machine++;
            // nbedlou les rect
            Message_rect.x = Message_rect_enrg.x;
            Message_rectma_inverse.x = Message_rectma_inverse_enrg.x;
            Message_rectma.y = Message_rectma.y + 51;
            Message_rectma_inverse.y = Message_rectma_inverse.y + 51;
            Message_rectma_int.y = Message_rectma_int.y + 51;
            Message_rectma_int_line.y = Message_rectma_int_line.y + 51;
        }
        if (p == NULL && first_time)
        {
            first_time = false;
            can_flipe = false;
            affiche_animation(you_want, renderer, 721, 748, 2);   // p vs m out
            affiche_animation(you_want, renderer, 1035, 1078, 3); // machwin in
            affiche_image(renderer, MACHINEWIN);
            Mix_PlayChannel(-1, YWIN, 0);
            bool machinewin = true;
            affiche_image(renderer, MACHINEWIN);
            while (machinewin)
            {
                SDL_Event event;
                while (SDL_PollEvent(&event))
                {
                    affiche_image_nopresent(renderer, MACHINEWIN);
                    switch (event.type)
                    {
                    case SDL_MOUSEMOTION:
                        if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                        {
                            glow_position.x = 580;
                            glow_position.y = 283;
                            glow_position.w = 210;
                            glow_position.h = 207;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                        {
                            glow_position.x = 822;
                            glow_position.y = 309;
                            glow_position.w = 153;
                            glow_position.h = 148;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                        {
                            glow_position.x = 391;
                            glow_position.y = 309;
                            glow_position.w = 149;
                            glow_position.h = 148;
                            printf("glow");
                            affiche_sha_or_glow(renderer, BGLOW, glow_position);
                        }
                        else
                        {
                            glow_position.x = 0;
                            glow_position.y = 0;
                            glow_position.w = 0;
                            glow_position.h = 0;
                        }
                        printf("%d / %d\n", event.motion.x, event.motion.y);
                        SDL_RenderPresent(renderer);

                        break;
                    case SDL_MOUSEBUTTONDOWN:
                        printf("click\n");
                        Mix_PlayChannel(-1, click, 0);
                        if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                        {
                            affiche_animation(you_want, renderer, 1172, 1199, 2); // machwin out
                            resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, Tresultat, max_flipe, can_flipe, false, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, true);
                            return;
                            machinewin = false;
                            break;
                        }
                        if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                        {
                            affiche_animation(you_want, renderer, 1172, 1199, 2); // machwin out
                            playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, true);
                            return;
                            machinewin = false;
                            break;
                        }
                        if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                        {
                            affiche_animation(you_want, renderer, 1172, 1199, 2); // machwin out
                            machinewin = false;
                            cndi = false;

                            break;

                        case SDL_QUIT:
                            *k = 0;
                            cndi = false;
                            machinewin = false;
                            break;
                        }
                    }
                }
            }
        }
        //--------------------------------------------------------------------------------------------------------------

        int tab_tempo[10];
        if (new_flipe && can_flipe)
        { // HADI BAH NHAR TJIH YOU WIN W YDIR RESUME MA TKHALIHCH YE9LEB

            for (i = 0; i < 10; i++)
            {
                tab_tempo[i] = Q->vect[i];
            }

            cre_de_vect(tab_tempo, pos - 1, n);

            for (j = 0; j < 8; j++)
            {
                mat_of_words[num_of_flipes][j] = tab_tempo[j];
            }
            vect_of_pos[num_of_flipes] = pos;

            for (i = 0; i < 30; i++)
            {
                printf("pos=%d\t|", vect_of_pos[i]);
                for (j = 0; j < 8; j++)
                {
                    printf("%d\t|", mat_of_words[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("\n");
            printf("\n");

            Ajout_apres(&Q, tab_tempo, 0, 0);

            // kout 9ader tekhdem bel tab tompo wahdo koul  mara te9leb fih b cre de vect
            // moraha taffichi w virifi ida rbah bla ma dir liste player lakin goult balak dir
            // mouchkil fel affichach bel sdl tema khalitha encas w nehtajouha

            // naffichiw ra9m elkhotwa w wach 9lebna
            num_of_flipes++;
            sprintf(spr, "%d", num_of_flipes);
            inserer_text(renderer, spr, white, Message_rect_int, 24, true);

            // naffichiw cha khrejna w ngedmou les rects

            affiche_Resultat(Q->vect, renderer, white, N, 40, Message_rect, Message_rect_inverse, 1);

            sprintf(spr, "%d", pos);
            inserer_text(renderer, spr, white, Message_rect_int_line, 24, true);
            Message_rect.x = Message_rect_enrg.x;
            Message_rect_inverse.x = Message_rect_inverse_enrg.x;
            Message_rect.y = Message_rect.y + 51;
            Message_rect_inverse.y = Message_rect_inverse.y + 51;
            Message_rect_int.y = Message_rect_int.y + 51;
            Message_rect_int_line.y = Message_rect_int_line.y + 51;

            for (int i = 0; i < 10; i++)
            { // affiche word li kharjetena
                printf("|  %d\t", Q->vect[i]);
            }
            printf("  |n=%d\n", num_of_flipes);
            win = true;
            for (int i = 0; i < 10; i++)
            { // affiche word
                if ((Tresultat[i]) != (Q->vect[i]))
                    win = false;
            }

            if (num_of_flipes == max_flipe && win == false)
                lose = true;

            if ((win == true) || (lose == true))
                cndi = false;

            new_flipe = false; // bah ye9leb khatra bark
        }

    } // fin condi
    if ((win))
    {
        SDL_Rect score_rect = {860, 687, 80, 80};
        SDL_Color blue = {0, 255, 252};
        SDL_Rect Winrect = {0, 0, 1366, 676};

        int score = floor(time_playing / max_flipe / 2) * 5;
        printf("your score:%d", score);

        Mix_PlayChannel(-1, YWIN, 0);
        affiche_animation(you_want, renderer, 721, 748, 2); // p vs m out
        affiche_animation(you_want, renderer, 885, 939, 3); // youwin in
        sprintf(spr, "%d", score);
        affiche_image(renderer, YOUWIN);
        inserer_text(renderer, spr, blue, score_rect, 51, false);
        while (win)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_sha_or_glow(renderer, YOUWINSC, Winrect);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, BGLOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 939, 966, 2); // you win out
                        resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, Tresultat, max_flipe, false, first_time, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, true);
                        return;
                        win = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 939, 966, 2); // you win out
                        win = false;
                        playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 939, 966, 2); // you win out
                        win = false;
                        break;

                    case SDL_QUIT:
                        *k = 0;
                        win = false;
                        break;
                    }
                }
            }
        }
        printf("                                      < you win! >\n");
    } // fin win
    if ((lose))
    {
        Mix_PlayChannel(-1, YLOSE, 0);
        affiche_animation(you_want, renderer, 721, 748, 2);  // p vs m out
        affiche_animation(you_want, renderer, 967, 1008, 3); // youlose in
        affiche_image(renderer, YOULOSE);
        while (lose)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                affiche_image_nopresent(renderer, YOULOSE);
                switch (event.type)
                {
                case SDL_MOUSEMOTION:
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        glow_position.x = 580;
                        glow_position.y = 283;
                        glow_position.w = 210;
                        glow_position.h = 207;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 826 && event.button.x < 977 && event.button.y > 314 && event.button.y < 457)
                    {
                        glow_position.x = 822;
                        glow_position.y = 309;
                        glow_position.w = 153;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    if (event.button.x > 391 && event.button.x < 540 && event.button.y > 309 && event.button.y < 457)
                    {
                        glow_position.x = 391;
                        glow_position.y = 309;
                        glow_position.w = 149;
                        glow_position.h = 148;
                        printf("glow");
                        affiche_sha_or_glow(renderer, SHAWDOW, glow_position);
                    }
                    else
                    {
                        glow_position.x = 0;
                        glow_position.y = 0;
                        glow_position.w = 0;
                        glow_position.h = 0;
                    }
                    printf("%d / %d\n", event.motion.x, event.motion.y);
                    SDL_RenderPresent(renderer);

                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 592 && event.button.x < 780 && event.button.y > 287 && event.button.y < 490)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2);                                                                                                                                                                                                                         // youlose out
                        resume_ma_vs_pla(you_want, N, n, mat_of_words, vect_of_pos, Q, Tinit, Tresultat, max_flipe, false, first_time, num_of_flipes, PAUSEMACHINE, PLAYERVSMACHINE, renderer, fenetre, k, LOADING, click, YOUWIN, YOULOSE, MACHINEWIN, timebackgroundmvp, time_playing, line, true); // les arguments ta3 resume w player jaw haka barceque resume n3aytolha fi player w player n3aytolha fi resume tema lazem les argument ta3 player tmedhom l resume w kach haja tehtajha resume makach fe player (makach fel les argument w madeclarinahach w khdemna biha kima Tinit .. ) nmedouha l player
                        return;
                        lose = false;
                        break;
                    }
                    if (event.button.x > 821 && event.button.x < 975 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // youlose out
                        lose = false;
                        playerVSmachine(you_want, fenetre, renderer, k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, true);
                        return;
                        break;
                    }
                    if (event.button.x > 393 && event.button.x < 545 && event.button.y > 313 && event.button.y < 462)
                    {
                        affiche_animation(you_want, renderer, 1009, 1034, 2); // youlose out
                        lose = false;

                        break;
                    case SDL_QUIT:
                        *k = 0;
                        lose = 0;
                        break;
                    }
                }
            }
        }
        printf("                                      < you lose! >\n");

    } // FIN LOSE
}
// high score fcts
void copy_tab_to_file(Player Tab[5])
{
    FILE *top5_file_ptr;
    if ((top5_file_ptr = fopen("Files/top5_file.bin", "wb")) == NULL)
    {
        supp_liste();
        top5_file_ptr = fopen("Files/top5_file.bin", "rb");
        // printf("Error! opening file");
        // exit(1);
    }
    for (int n = 0; n < 5; n++)
    {
        fwrite(&Tab[n], sizeof(struct Player), 1, top5_file_ptr);
    }
    fclose(top5_file_ptr);
}

void copy_file_to_tab(Player Tab[5])
{
    FILE *top5_file_ptr;
    if ((top5_file_ptr = fopen("Files/top5_file.bin", "rb")) == NULL)
    {
        supp_liste();
        top5_file_ptr = fopen("Files/top5_file.bin", "rb");
        // printf("Error! opening file");
        // exit(1);
    }

    for (int n = 0; n < 5; n++)
    {
        fread(&Tab[n], sizeof(Player), 1, top5_file_ptr);
    }
    fclose(top5_file_ptr);
}

int check_if_high_score(Player Tab2[5], int score)
{
    for (int i = 0; i < 5; i++)
    {
        if (Tab2[i].score > score)
        {
            return i;
        }
    }
    return -1;
}

Player *inserer_player_in_top5_tab(Player TopPlayers[], Player User)
{
    int i;
    Player Tab[5];
    if (check_if_high_score(TopPlayers, User.score) != -1)
    {
        for (i = 0; i < check_if_high_score(TopPlayers, User.score); i++)
        {
            Tab[i] = TopPlayers[i];
        }
        Tab[i] = User;
        for (i = i; i < 4; i++)
        {
            Tab[i + 1] = TopPlayers[i];
        }
        for (i = 0; i < 5; i++)
        {
            TopPlayers[i] = Tab[i];
        }
        copy_tab_to_file(TopPlayers);
    }
    return TopPlayers;
}

void high_score(bool you_want, SDL_Renderer *renderer, int tim, int score, SDL_Texture *HIGHSCORE, Mix_Chunk *click, int *k)
{
    printf("in high_score fct");
    // declaration
    SDL_Texture *HIGHSCORE2 = initialize_texture_from_file("images/HIGHSCORE2.png", renderer);
    SDL_Texture *HIGHSCOREBACKGROUND = initialize_texture_from_file("images/HIGHSCOREBACKGROUND.png", renderer);

    char spr[3];
    SDL_Rect score_rect = {1366 / 2, 240, 0, 0};
    SDL_Rect background_rect = {0, 682, 1366, 86};
    Player user;
    Player top5_tab[5];
    bool high_scr = true, input = false, del = false;
    char UserName[10], date[11];
    // date
    time_t t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);

    // copy lel contenu ta3 l fichier fi tableaubah nekhedmou bih
    copy_file_to_tab(top5_tab);
    for (int i = 0; i < 5; i++)
    {
        printf("\nname:%s", top5_tab[i].name);
        printf("\nscore:%d", top5_tab[i].score);
    }

    if (check_if_high_score(top5_tab, score) != -1)
    {
        printf("l9inah sah high core");
        SDL_Rect name_rect = {1366 / 2, 420, 0, 0};
        SDL_Color white = {255, 255, 255};
        int letter_w = 40;
        affiche_animation(you_want, renderer, 1200, 1249, 1); // high score in
        affiche_image(renderer, HIGHSCORE);
        sprintf(spr, "%d", score);
        inserer_text_no_present(renderer, spr, white, score_rect, 80);
        SDL_RenderPresent(renderer);
        UserName[0] = '\0';
        int NLetters = 0;
        while (high_scr)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                if (input)
                {
                    affiche_image_nopresent(renderer, HIGHSCORE2);
                    input = false;
                }
                if (del)
                {
                    affiche_sha_or_glow(renderer, HIGHSCOREBACKGROUND, background_rect);
                    del = false;
                }
                inserer_text_no_present(renderer, spr, white, score_rect, 80);
                inserer_text(renderer, UserName, white, name_rect, 80, false);
                SDL_RenderPresent(renderer);
                switch (event.type)
                {
                case SDL_QUIT:
                    *k = 0;
                    return;
                    high_scr = false;
                    break;
                case SDL_KEYDOWN:
                    input = true;
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_a:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'a';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_b:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'b';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_c:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'c';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_d:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'd';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_e:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'e';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_f:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'f';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_g:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'g';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_h:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'h';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_i:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'i';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_j:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'j';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_k:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'k';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_l:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'l';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_m:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'm';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_n:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'n';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_o:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'o';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_p:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'p';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_q:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'q';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_r:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'r';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_s:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 's';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_t:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 't';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_u:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'u';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_v:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'v';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_w:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'w';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_x:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'x';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_y:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'y';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_z:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = 'z';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_1:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '1';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_2:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '2';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_3:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '3';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_4:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '4';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_5:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '5';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_6:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '6';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_7:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '7';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_8:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '8';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_9:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '9';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_KP_0:
                        if (strlen(UserName) <= 8)
                        {
                            UserName[NLetters] = '0';
                            UserName[NLetters + 1] = '\0';
                            NLetters++;
                            name_rect.x = name_rect.x - letter_w;
                        }
                        break;
                    case SDLK_BACKSPACE:
                        del = true;
                        if (strlen(UserName) > 0)
                        {
                            UserName[NLetters - 1] = '\0';
                            NLetters--;
                            name_rect.x = name_rect.x + letter_w;
                        }
                        break;
                    }
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("click\n");
                    Mix_PlayChannel(-1, click, 0);
                    if (event.button.x > 590 && event.button.x < 783 && event.button.y > 508 && event.button.y < 583 && strlen(UserName) > 0)
                    {
                        sprintf(date, "%02d-%02d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                        printf("la date:%s\n", date);
                        strcpy(user.name, UserName);
                        strcpy(user.date, date);
                        user.score = score;
                        user.time = tim;
                        inserer_player_in_top5_tab(top5_tab, user);
                        affiche_animation(you_want, renderer, 1250, 1278, 2); // high score out
                        top_liste(you_want, renderer, click, k);
                        return;
                    }
                    if (event.button.x > 730 && event.button.x < 909 && event.button.y > 630 && event.button.y < 679)
                    {
                        affiche_animation(you_want, renderer, 1250, 1278, 2); // high score out
                        return;

                        break;
                    }
                }
            }
        }
    }
    SDL_DestroyTexture(HIGHSCORE2);
    SDL_DestroyTexture(HIGHSCOREBACKGROUND);
}

void top_liste(bool you_want, SDL_Renderer *renderer, Mix_Chunk *click, int *k)
{
    SDL_Texture *TOPLISTE = initialize_texture_from_file("Flipe_animation/1331.jpg", renderer);
    SDL_Texture *TOPLISTERETURN = initialize_texture_from_file("images/TOPLISTERETURN.png", renderer);
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOWCAREE.png", renderer);
    affiche_animation(you_want, renderer, 1279, 1331, 1); // topliste in
    affiche_image(renderer, TOPLISTE);
    SDL_Color white = {255, 255, 255};
    SDL_Rect glow_position, image_position = {1366 - 129, 768 - 122, 129, 122};
    Player top5_tab[5];
    copy_file_to_tab(top5_tab);
    for (int i = 0; i < 5; i++)
    {
        printf("\nname:%s", top5_tab[i].name);
        printf("\ndate:%s", top5_tab[i].date);
        printf("\nscore:%d", top5_tab[i].score);
        printf("\ntime:%d", top5_tab[i].time);
    }
    SDL_Rect liste_rect = {150, 273, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        liste_rect.x = 137;
        liste_rect.y = 280 + 90 * i;

        inserer_text(renderer, top5_tab[i].name, white, liste_rect, 30, false);
        liste_rect.x = liste_rect.x + 276;

        inserer_text(renderer, top5_tab[i].date, white, liste_rect, 30, false);
        liste_rect.x = liste_rect.x + 376;

        char spr[6];
        sprintf(spr, "%d", top5_tab[i].time);
        inserer_text(renderer, spr, white, liste_rect, 30, false);
        liste_rect.x = liste_rect.x + 296;

        sprintf(spr, "%d", top5_tab[i].score);
        inserer_text(renderer, spr, white, liste_rect, 30, false);
    }
    bool liste_open = true;
    while (liste_open)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_sha_or_glow(renderer, TOPLISTERETURN, image_position);
            switch (event.type)
            {
            case SDL_MOUSEMOTION:
                if (event.button.x > 1245 && event.button.x < 1345 && event.button.y > 657 && event.button.y < 752)
                {
                    glow_position.x = 1245;
                    glow_position.y = 657;
                    glow_position.w = 100;
                    glow_position.h = 95;
                    affiche_sha_or_glow(renderer, BGLOW, glow_position);
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                printf("%d / %d\n", event.motion.x, event.motion.y);
                SDL_RenderPresent(renderer);

                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);

                if (event.button.x > 435 && event.button.x < 925 && event.button.y > 690 && event.button.y < 745)
                {
                    supp_liste();
                    affiche_image(renderer, TOPLISTE);
                    copy_file_to_tab(top5_tab);
                    for (int i = 0; i < 5; i++)
                    {
                        liste_rect.x = 137;
                        liste_rect.y = 280 + 90 * i;

                        inserer_text(renderer, top5_tab[i].name, white, liste_rect, 30, false);
                        liste_rect.x = liste_rect.x + 276;

                        inserer_text(renderer, top5_tab[i].date, white, liste_rect, 30, false);
                        liste_rect.x = liste_rect.x + 376;

                        char spr[6];
                        sprintf(spr, "%d", top5_tab[i].time);
                        inserer_text(renderer, spr, white, liste_rect, 30, false);
                        liste_rect.x = liste_rect.x + 296;

                        sprintf(spr, "%d", top5_tab[i].score);
                        inserer_text(renderer, spr, white, liste_rect, 30, false);
                    }
                }
                if (event.button.x > 1245 && event.button.x < 1345 && event.button.y > 657 && event.button.y < 752)
                {
                    liste_open = false;
                    return;
                    break;
                case SDL_QUIT:
                    *k = 0;
                    liste_open = false;
                    return;
                    break;
                }
            }
        }
    }

    SDL_DestroyTexture(TOPLISTE);
}

void supp_liste()
{

    // lprgrm hada houwa li amarna bih lfichier awal mara w jbedna bih la date
    time_t t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    char date[11];
    sprintf(date, "%02d-%02d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("la date:%s\n", date);

    char user_name[10] = {'a', 'n', 'k', 'n', 'o', 'w', 'n', '\0'};

    Player tab[5];

    for (int i = 0; i < 5; i++)
    {
        tab[i].score = 999;
        tab[i].time = 999;
        strcpy(tab[i].name, user_name);
        strcpy(tab[i].date, date);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nname:%s", tab[i].name);
        printf("\ndate:%s", tab[i].date);
        printf("\nscore:%d", tab[i].score);
        printf("\ntime:%d", tab[i].time);
    }
    copy_tab_to_file(tab);
    Player tab2[5];
    copy_file_to_tab(tab2);
    for (int i = 0; i < 5; i++)
    {
        printf("\nname2:%s", tab2[i].name);
        printf("\ndate2:%s", tab2[i].date);
        printf("\nscore2:%d", tab2[i].score);
        printf("\ntime2:%d", tab2[i].time);
    }
}
// save and load game
void copy_game_to_file(game player_game)
{
    FILE *game_file_ptr;
    if ((game_file_ptr = fopen("Files/game_file.bin", "wb")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    fwrite(&player_game, sizeof(game), 1, game_file_ptr);

    fclose(game_file_ptr);
}

game copy_file_to_game()
{
    game player_game;
    FILE *game_file_ptr;
    if ((game_file_ptr = fopen("Files/game_file.bin", "rb")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    fread(&player_game, sizeof(game), 1, game_file_ptr);
    fclose(game_file_ptr);
    return player_game;
}
