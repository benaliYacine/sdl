#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <windows.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "projet_sans_SDL.h"
#include "fonction_SDL.h"

int main(int argc, char **argv)
{

    SDL_Rect shadow_position;
    SDL_Rect glow_position;
    SDL_Window *fenetre = NULL;
    SDL_Renderer *renderer = NULL;

    TTF_Init();
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);

    int plus_de_y = 0;

    // la fenetre

    fenetre = SDL_CreateWindow("FLIPE", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1366, 768, SDL_WINDOW_OPENGL); // SDL_WINDOW_FULLSCREEN

    // renderer

    renderer = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (NULL == renderer)
    {
        fprintf(stderr, "Erreur SDL_CreateRenderer : %s", SDL_GetError());
    }

    SDL_Texture *FIRSTIMAGE = initialize_texture_from_file("images/FIRSTIMAGE.png", renderer);
    affiche_image(renderer, FIRSTIMAGE);
    SDL_Texture *BGLOW = initialize_texture_from_file("images/BGLOW.png", renderer); // TEXTURES HADO KOUTO 9ADRIN DIRO TA3 KOUL FCT LDAKHEL FIHA BLA MA DIR ECHKIL HADA TA3 TMEDHOM M3A LES ARGUMENTS
    SDL_Texture *CHOOSENn = initialize_texture_from_file("Flipe_animation/224.jpg", renderer);
    SDL_Texture *HOME = initialize_texture_from_file("Flipe_animation/120.jpg", renderer);
    SDL_Texture *LOADING = initialize_texture_from_file("Flipe_animation/413.jpg", renderer);
    SDL_Texture *MACHINE = initialize_texture_from_file("Flipe_animation/647.jpg", renderer);
    SDL_Texture *MACHINEWIN = initialize_texture_from_file("Flipe_animation/1078.jpg", renderer);
    SDL_Texture *PAUSEPLAYER = initialize_texture_from_file("Flipe_animation/857.jpg", renderer);
    SDL_Texture *PAUSEMACHINE = initialize_texture_from_file("Flipe_animation/792.jpg", renderer);
    SDL_Texture *PLAYER = initialize_texture_from_file("Flipe_animation/575.jpg", renderer);
    SDL_Texture *PLAYERVSMACHINE = initialize_texture_from_file("Flipe_animation/720.jpg", renderer);
    SDL_Texture *RGLOW = initialize_texture_from_file("images/RGLOW.png", renderer);
    SDL_Texture *SHADOW = initialize_texture_from_file("images/SHADOW.png", renderer);
    SDL_Texture *SHADOWHOME = initialize_texture_from_file("images/SHADOWHOME.png", renderer);
    SDL_Texture *STARTANDRESULT = initialize_texture_from_file("Flipe_animation/316.jpg", renderer);
    SDL_Texture *STARTGAME = initialize_texture_from_file("Flipe_animation/40.jpg", renderer);
    SDL_Texture *WRONG = initialize_texture_from_file("Flipe_animation/493.jpg", renderer);
    SDL_Texture *YOULOSE = initialize_texture_from_file("Flipe_animation/1008.jpg", renderer);
    SDL_Texture *YOUWIN = initialize_texture_from_file("Flipe_animation/939.jpg", renderer);
    SDL_Texture *timebackground = initialize_texture_from_file("images/timebackground.png", renderer);
    SDL_Texture *timebackgroundmvp = initialize_texture_from_file("images/timebackgroundmvp.png", renderer);
    SDL_Texture *HIGHSCORE = initialize_texture_from_file("Flipe_animation/1249.jpg", renderer);
    SDL_Texture *YOUWINPVS = initialize_texture_from_file("images/YOUWINPVS.png", renderer);
    /*
        SDL_Texture * FIRSTIMAGE = initialize_texture_from_file("images/FIRSTIMAGE.png", renderer);
        affiche_image(renderer,FIRSTIMAGE);
        SDL_Texture * BGLOW = initialize_texture_from_file("images/BGLOW.png", renderer);//TEXTURES HADO KOUTO 9ADRIN DIRO TA3 KOUL FCT LDAKHEL FIHA BLA MA DIR ECHKIL HADA TA3 TMEDHOM M3A LES ARGUMENTS
        SDL_Texture * CHOOSENn = initialize_texture_from_file("images/CHOOSENn.png", renderer);
        SDL_Texture * HOME = initialize_texture_from_file("images/HOME.png", renderer);
        SDL_Texture * LOADING = initialize_texture_from_file("images/LOADING.png", renderer);
        SDL_Texture * MACHINE = initialize_texture_from_file("images/MACHINE.png", renderer);
        SDL_Texture * MACHINEWIN = initialize_texture_from_file("images/MACHINEWIN.png", renderer);
        SDL_Texture * PAUSEPLAYER = initialize_texture_from_file("images/PAUSEPLAYER.png", renderer);
        SDL_Texture * PAUSEMACHINE = initialize_texture_from_file("images/PAUSEMACHINE.png", renderer);
        SDL_Texture * PLAYER = initialize_texture_from_file("images/PLAYER.png", renderer);
        SDL_Texture * PLAYERVSMACHINE = initialize_texture_from_file("images/PLAYERVSMACHINE.png", renderer);
        SDL_Texture * RGLOW = initialize_texture_from_file("images/RGLOW.png", renderer);
        SDL_Texture * SHADOW = initialize_texture_from_file("images/SHADOW.png", renderer);
        SDL_Texture * SHADOWHOME = initialize_texture_from_file("images/SHADOWHOME.png", renderer);
        SDL_Texture * STARTANDRESULT = initialize_texture_from_file("images//STARTANDRESULT", renderer);
        SDL_Texture * STARTGAME = initialize_texture_from_file("images/STARTGAME.png", renderer);
        SDL_Texture * WRONG = initialize_texture_from_file("images/WRONG.png", renderer);
        SDL_Texture * YOULOSE = initialize_texture_from_file("images/YOULOSE.png", renderer);
        SDL_Texture * YOUWIN = initialize_texture_from_file("images/YOUWIN.png", renderer);
        SDL_Texture * timebackground = initialize_texture_from_file("images/timebackground.png", renderer);
        SDL_Texture * timebackgroundmvp = initialize_texture_from_file("images/timebackgroundmvp.png", renderer);
        SDL_Texture * HIGHSCORE = initialize_texture_from_file("images/HIGHSCORE.png", renderer);
        */

    bool you_want = true;

    // Initialize SDL mixer
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    // Load audio files
    Mix_Chunk *click = Mix_LoadWAV("Sound effects/Mouse_click.wav");
    Mix_Chunk *INTRO = Mix_LoadWAV("Sound effects/logo_intro.wav");
    // Mix_Chunk *enable_device = Mix_LoadWAV("Sound effects/enable_device.wav");
    Mix_Chunk *enable = Mix_LoadWAV("Sound effects/enable.wav");
    Mix_Chunk *disable = Mix_LoadWAV("Sound effects/disable.wav");
    Mix_PlayChannel(1, INTRO, 0);

    affiche_animation(you_want, renderer, 2, 40, 0); // into in
    affiche_image(renderer, STARTGAME);

    Mix_Chunk *BACKGROUND = Mix_LoadWAV("Sound effects/Bachground.WAV");
    Mix_PlayChannel(-1, BACKGROUND, -1);

    // boucle infini debut

    int i;
    SDL_Event event;
    SDL_WaitEvent(&event);
    if (event.key.keysym.sym == SDLK_SPACE)
    {
        printf("a");
    }

    int k = 1, z = 1;

    while (z)
    {

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_image_nopresent(renderer, STARTGAME);
            switch (event.type)
            {

            case SDL_MOUSEMOTION:
                printf("%d / %d\n", event.motion.x, event.motion.y);
                if (event.button.x > 488 && event.button.x < 950 && event.button.y > 622 && event.button.y < 670)
                {
                    printf("shadow");
                    shadow_position.x = 1366 / 2 - 330;
                    shadow_position.y = 600;
                    shadow_position.w = 630;
                    shadow_position.h = 167;
                }
                else
                {
                    shadow_position.x = 0;
                    shadow_position.y = 0;
                    shadow_position.w = 0;
                    shadow_position.h = 0;
                }
                affiche_sha_or_glow(renderer, SHADOW, shadow_position);
                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);
                if (event.button.x > 488 && event.button.x < 950 && event.button.y > 622 && event.button.y < 670)
                {
                    z = false;
                    break;

                case SDL_QUIT:
                    z = 0;
                    k = 0;
                    break;
                }
            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_SPACE)
                {
                    z = false;
                }
                break;
            }
        }
        SDL_RenderPresent(renderer);
    }
    bool nclk = true;
    game game_saved;
    liste tete, Q;

    int l;
    SDL_Rect Message_rect = {0, 0, 0, 0};

    float time_playing = 0; // hada li iokhrejena ykoun bel fasila nrodouh entier w naffichiwh
    int previouse_time = 0;
    int current_time = SDL_GetTicks();
    printf("currenttime%d ", current_time);
    float delta_time = 0; // delta ma3rof beli hiya efar9
    float time_verification = 4;
    if (k != 0)
    {
        affiche_animation(you_want, renderer, 44, 68, 2); // intro out

        affiche_animation(you_want, renderer, 72, 120, 1); // home in
    }

    while (k)
    {

        previouse_time = current_time;
        current_time = SDL_GetTicks();
        delta_time = (current_time - previouse_time) / 1000.0F; // ta9sim alf bah yweli bel second mais mazalou float
        time_playing += delta_time;

        if (time_playing > time_verification && nclk)
        {
            affiche_image_nopresent(renderer, HOME);

            l = RandomNumber(1, 26);
            // SDL_Color couleur={RandomNumber(0,255),RandomNumber(0,255),RandomNumber(0,255)};
            SDL_Color couleur = {255, 255, 255};
            int int_time = floor(time_verification);
            if (int_time % 2 == 0)
            {
                affiche_main(l, renderer, couleur, Message_rect, int_time);
            }
            else
            {
                affiche_main(l, renderer, couleur, Message_rect, int_time);
            }
            time_verification = time_verification + 0.2;
        }

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            affiche_image_nopresent(renderer, HOME);
            switch (event.type)
            {

            case SDL_MOUSEMOTION:
                printf("%d / %d\n", event.motion.x, event.motion.y);
                if (event.button.x > 608 && event.button.x < 843 && event.button.y > 244 && event.button.y < 312)
                {
                    plus_de_y = 0;
                    shadow_position.x = 1366 / 2 - 263;
                    shadow_position.y = 230 + plus_de_y * 99;
                    shadow_position.w = 630;
                    shadow_position.h = 167;
                }
                else
                {
                    if (event.button.x > 605 && event.button.x < 852 && event.button.y > 345 && event.button.y < 407)
                    {
                        plus_de_y = 1;
                        shadow_position.x = 1366 / 2 - 263;
                        shadow_position.y = 230 + plus_de_y * 99;
                        shadow_position.w = 630;
                        shadow_position.h = 167;
                    }
                    else
                    {
                        if (event.button.x > 478 && event.button.x < 1031 && event.button.y > 444 && event.button.y < 508)
                        {
                            plus_de_y = 2;
                            shadow_position.x = 1366 / 2 - 263;
                            shadow_position.y = 230 + plus_de_y * 99;
                            shadow_position.w = 630;
                            shadow_position.h = 167;
                        }
                        else
                        {
                            if (event.button.x > 525 && event.button.x < 927 && event.button.y > 543 && event.button.y < 608)
                            {
                                plus_de_y = 3;
                                shadow_position.x = 1366 / 2 - 263;
                                shadow_position.y = 230 + plus_de_y * 99;
                                shadow_position.w = 630;
                                shadow_position.h = 167;
                            }
                            else
                            {
                                if (event.button.x > 577 && event.button.x < 874 && event.button.y > 639 && event.button.y < 707)
                                {
                                    plus_de_y = 4;
                                    shadow_position.x = 1366 / 2 - 263;
                                    shadow_position.y = 230 + plus_de_y * 99;
                                    shadow_position.w = 630;
                                    shadow_position.h = 167;
                                }
                                else
                                {
                                    shadow_position.x = 0;
                                    shadow_position.y = 0;
                                    shadow_position.w = 0;
                                    shadow_position.h = 0;
                                }
                            }
                        }
                    }
                }
                if (event.button.x > 1251 && event.button.x < 1350 && event.button.y > 650 && event.button.y < 753)
                {
                    printf("GLOW");
                    glow_position.x = 845;
                    glow_position.y = 465;
                    glow_position.w = 900;
                    glow_position.h = 506;
                }
                else
                {
                    glow_position.x = 0;
                    glow_position.y = 0;
                    glow_position.w = 0;
                    glow_position.h = 0;
                }
                affiche_sha_or_glow(renderer, BGLOW, glow_position);
                affiche_sha_or_glow(renderer, SHADOWHOME, shadow_position);
                break;
            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_SPACE)
                {

                    if (you_want)
                    {
                        you_want = false;
                        Mix_PlayChannel(1, disable, 0);
                    }
                    else
                    {
                        you_want = true;
                        Mix_PlayChannel(1, enable, 0);
                    }
                    break;
                }

            case SDL_MOUSEBUTTONDOWN:
                nclk = false;
                printf("click\n");
                Mix_PlayChannel(-1, click, 0);
                if (event.button.x > 608 && event.button.x < 843 && event.button.y > 244 && event.button.y < 312)
                {
                    affiche_animation(you_want, renderer, 121, 147, 2); // home out
                    player(you_want, fenetre, renderer, &k, LOADING, PLAYER, click, YOUWIN, YOULOSE, PAUSEPLAYER, HIGHSCORE, timebackground, true);
                    if (k != false)
                        affiche_animation(you_want, renderer, 72, 120, 1); // home in
                    break;
                }
                if (event.button.x > 605 && event.button.x < 852 && event.button.y > 345 && event.button.y < 407)
                {
                    affiche_animation(you_want, renderer, 121, 147, 2); // home out
                    machine(you_want, renderer, &k, STARTANDRESULT, LOADING, WRONG, MACHINE, MACHINEWIN, CHOOSENn, click, PAUSEMACHINE, timebackground);
                    if (k != false)
                        affiche_animation(you_want, renderer, 72, 120, 1); // home in
                    break;
                }
                if (event.button.x > 478 && event.button.x < 1031 && event.button.y > 444 && event.button.y < 508)
                {
                    affiche_animation(you_want, renderer, 121, 147, 2); // home out
                    playerVSmachine(you_want, fenetre, renderer, &k, LOADING, PLAYERVSMACHINE, click, YOUWIN, YOULOSE, PAUSEMACHINE, MACHINEWIN, timebackgroundmvp, true);
                    if (k != false)
                        affiche_animation(you_want, renderer, 72, 120, 1); // home in
                    break;
                }
                if (event.button.x > 525 && event.button.x < 927 && event.button.y > 543 && event.button.y < 608)
                {

                    // rana d�ja declarina "game saved" type ta3o "game" hna jbedna wech kan fel fichir medinahlou
                    game_saved = copy_file_to_game();

                    // creation de premier element de la liste
                    tete = malloc(sizeof(ne)); // hna tani ne fi blaset liste
                    for (i = 0; i < 10; i++)
                    {
                        tete->vect[i] = game_saved.mat_of_words[game_saved.num_of_flipes - 1][i];
                    }
                    tete->line = 0;
                    tete->svt = NULL;
                    Q = tete;
                    affiche_animation(you_want, renderer, 121, 147, 2); // home out
                    resume(you_want, game_saved.N, game_saved.n, game_saved.mat_of_words, game_saved.vect_of_pos, Q, game_saved.Tinit, game_saved.Tresultat, game_saved.max_flipe, game_saved.flipes_left, game_saved.can_flipe, game_saved.num_of_flipes, game_saved.nbr_etapes, PAUSEPLAYER, PLAYER, renderer, fenetre, &k, LOADING, click, YOUWIN, YOULOSE, HIGHSCORE, timebackground, game_saved.time_playing, game_saved.num_1ere_ligne_avec_decal, true);
                    if (k != false)
                        affiche_animation(you_want, renderer, 72, 120, 1); // home in
                    break;
                }
                if (event.button.x > 577 && event.button.x < 874 && event.button.y > 639 && event.button.y < 707)
                {
                    affiche_animation(you_want, renderer, 121, 147, 2); // home out
                    top_liste(you_want, renderer, click, &k);
                    break;
                }
                if (event.button.x > 1251 && event.button.x < 1350 && event.button.y > 650 && event.button.y < 753)
                {
                    k = 0;
                    break;

                case SDL_QUIT:
                    k = 0;
                    break;
                }
            }
        }
        SDL_RenderPresent(renderer);
    }

    if (k == false)
    {
        printf("\nExit");
    }

    IMG_Quit();
    SDL_DestroyTexture(FIRSTIMAGE);
    SDL_DestroyTexture(BGLOW);
    SDL_DestroyTexture(CHOOSENn);
    SDL_DestroyTexture(HOME);
    SDL_DestroyTexture(LOADING);
    SDL_DestroyTexture(MACHINE);
    SDL_DestroyTexture(MACHINEWIN);
    SDL_DestroyTexture(PAUSEPLAYER);
    SDL_DestroyTexture(PAUSEMACHINE);
    SDL_DestroyTexture(PLAYER);
    SDL_DestroyTexture(PLAYERVSMACHINE);
    SDL_DestroyTexture(RGLOW);
    SDL_DestroyTexture(SHADOW);
    SDL_DestroyTexture(SHADOWHOME);
    SDL_DestroyTexture(STARTANDRESULT);
    SDL_DestroyTexture(STARTGAME);
    SDL_DestroyTexture(WRONG);
    SDL_DestroyTexture(YOULOSE);
    SDL_DestroyTexture(YOUWIN);
    SDL_DestroyTexture(YOUWINPVS);
    SDL_DestroyTexture(timebackground);
    SDL_DestroyTexture(timebackgroundmvp);
    SDL_DestroyTexture(HIGHSCORE);

    Mix_FreeChunk(INTRO);
    Mix_FreeChunk(click);
    Mix_FreeChunk(BACKGROUND);
    Mix_CloseAudio();
    TTF_Quit();

    if (fenetre != NULL)
    {
        SDL_DestroyWindow(fenetre);
    }

    if (NULL != renderer)
        SDL_DestroyRenderer(renderer);

    SDL_Quit();
    return 0;
}
