#include <stdio.h>
#include <stdlib.h>
#include "projet_sans_SDL.h"
#include <stdbool.h>
#include <math.h>
#include "fonction_SDL.h"
// tested
void cre_de_vect(int T[10], int pos, int n)
{
    int i, x;
    // pos--;

    if (n % 2 == 0)
    {
        for (i = 0; i < n / 2; i++)
        {
            x = T[i + pos];
            T[i + pos] = T[n - i - 1 + pos];
            T[n - i - 1 + pos] = x;
        }
    }
    else
    {
        for (i = 0; i <= n / 2; i++)
        {
            x = T[i + pos];
            T[i + pos] = T[n - i - 1 + pos];
            T[n - i - 1 + pos] = x;
        }
    }
    for (i = 0; i < n; i++)
    {
        T[i + pos] = T[i + pos] * (-1);
    }
}
// tested
bool existe_deja(int T[10], liste tete)
{
    int i;
    bool ve_de_cel;
    bool ve_de_vec = false;
    liste p;
    p = tete;
    while (p != NULL && ve_de_vec == false)
    { // ZeDt fel condition et ve de vec == false
        ve_de_cel = true;
        for (i = 0; i < 10; i++)
        {
            if (T[i] != p->vect[i])
                ve_de_cel = false;
        }

        if (ve_de_cel == true)
        {
            ve_de_vec = true;
        }
        p = p->svt;
    }
    return (ve_de_vec);
}
// tested
void Ajout_apres(liste *Q, int T[10], int pos, int line)
{
    int i;
    liste nouv = malloc(sizeof(ne)); // HADA TANI BEDELT FIH + LISTE raditha ne

    for (i = 0; i < 10; i++)
    {
        nouv->vect[i] = T[i];
    }
    nouv->svt = NULL; // canet nouv->svt=NULL;
    (*Q)->svt = nouv;
    (*Q) = nouv;
    (*Q)->line = line * 10 + pos + 1;
}
// tested
void cre_de_tous_les_cas(liste adr_de_cel, liste *Q, liste tete, int N, int n)
{
    int tab_tempo[10], i, j;
    bool ve_existe;

    for (j = 0; j <= N - n; j++)
    {
        for (i = 0; i < 10; i++)
        {                                       // hadi kouna dayrina bara lakin sot belilazem
            tab_tempo[i] = adr_de_cel->vect[i]; // tji hna lakhaterch les tableau daymen entr�s
        }                                       // sortie tema lazem koul khatra tjadedha
        cre_de_vect(tab_tempo, j, n);           // ki t3ayat l cre de vect rayha tetbedel tab tompo w hna moraha nestha9ou l9dima 3labiha
        ve_existe = existe_deja(tab_tempo, tete);
        if (ve_existe == false)
        { // if kanet bara for aya dakhaltha
            Ajout_apres(Q, tab_tempo, j, adr_de_cel->line);
        }
    }
}
// tested
liste cre_de_arbre(int N, int n, int T[10])
{
    liste tete, Q, adr_de_cel;
    int i;

    tete = malloc(sizeof(ne)); // hna tani ne fi blaset liste
    for (i = 0; i < 10; i++)
    {
        tete->vect[i] = T[i];
    }
    /*for(i=0;i<N;i++){    // hadi nhar kouna dayrin beli lbedya daymen abc..
        tete->vect[i]=i+1;
    }*/
    tete->line = 0;
    tete->svt = NULL;
    Q = tete;
    adr_de_cel = tete; // hada estar zetou kouna nasyiine nhoto adr de cel fel la tete
    while (adr_de_cel != NULL)
    {
        cre_de_tous_les_cas(adr_de_cel, &Q, tete, N, n);
        adr_de_cel = adr_de_cel->svt;
    }
    return tete;
}
// tested
int mod_inv(int n)
{

    while (n / 10 != 0)
    {
        n = n / 10;
    }
    return n;
}
// tested
int div_inv(int n)
{
    int R = 0, i = 0;

    while (n / 10 != 0)
    {
        R = (n % 10) * pow(10, i) + R;
        i++;
        n = n / 10;
    }

    return R;
}
// tested
int cherche_line(int tab_init[10], int tab_cherche[10], int N, int n)
{

    int i, line_resultat;
    liste p, tete;
    bool ve_de_cel, ve_de_vect = false;

    tete = cre_de_arbre(N, n, tab_init);
    p = tete;
    while (p != NULL && ve_de_vect == false)
    {
        ve_de_cel = true;
        for (i = 0; i < 10; i++)
        {
            if (tab_cherche[i] != p->vect[i])
            {
                ve_de_cel = false;
            }
        }
        if (ve_de_cel == true)
        {
            ve_de_vect = true;
            line_resultat = p->line;
        }
        else
        {
            p = p->svt;
        }
    }
    if (ve_de_vect == false)
    {
        line_resultat = 404;
    }
    return line_resultat;
}
// tested
liste cre_de_liste_cherche(int tab_init[10], int line, int N, int n)
{
    int i, tab_tempo[10];
    liste Q;
    liste tete = malloc(sizeof(ne));
    for (i = 0; i < 10; i++)
    {
        tete->vect[i] = tab_init[i];
    }
    int line_incomplet = 0;
    tete->line = 0;
    tete->svt = NULL;
    Q = tete;
    for (i = 0; i < 10; i++)
    {
        tab_tempo[i] = Q->vect[i];
    }
    while (line != 0)
    {
        cre_de_vect(tab_tempo, mod_inv(line) - 1, n);
        Ajout_apres(&Q, tab_tempo, mod_inv(line) - 1, line_incomplet);
        line_incomplet = Q->line;
        line = div_inv(line);
    }
    return tete;
}
// tested
void machine_SANS_SDL(int N, int n)
{
    int i, T[10], Tinit[10];

    int line, j;
    liste tete, p;
    do
    { // demandina ya3tina word initial
        printf("\n________________________________write the start word:__________________________________\n\n");
        for (i = 0; i < N; i++)
        {
            printf("\n                                  char num %d:", i);

            scanf("%d", &Tinit[i]);
        }
        for (i = N; i < 10; i++)
        {
            Tinit[i] = 0;
        }

        // demandina ya3tina word resulta
        printf("\n________________________________write the result word:__________________________________\n\n");
        for (i = 0; i < N; i++)
        {
            printf("\n                                  char num %d:", i);

            scanf("%d", &T[i]);
        }
        for (i = N; i < 10; i++)
        {
            T[i] = 0;
        }

        printf("\n________________________________________loading...______________________________________\n\n\n"); // ndirou loading 9bel ma n3aytou lel fct cherchline lakhtrch 9ader tedi bezaf wa9t
        line = cherche_line(Tinit, T, N, n);                                                                        // nchoufou ida la ligne ne9edrou nelah9oulha  nejebdou line ida nou n9ouloulou mane9edrouch 3awed seyi
        if (line == 404)
        {
            printf("\n                   these word cannot be reached try againe\n\n");
        }
    } while (line == 404);

    tete = cre_de_liste_cherche(Tinit, line, N, n); // bel la line nejebdou la liste li fiha kamel elkhotowat bah moraha n affichiwha
    p = tete;
    j = 0;

    while (p != NULL)
    { // affichina liste fiha kamel elkhotowat
        for (int i = 0; i < 10; i++)
        {
            printf("|  %d\t", p->vect[i]);
        }

        printf("|  n=%d\n\n", j);
        j++;
        printf("    line= %d\n\n", p->line);
        p = p->svt;
    }
    printf("                                      < machine win >\n");
}
// tested
void player_SANS_SDL(int N, int n)
{
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
            if (randNum < 2 * 26 /*kanet 2*N ki kan mel a lel h*/ && randNum >= 0)
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

    cndi = true;
    while (cndi)
    {
        randNum = rand();
        if (randNum < taile_de_liste && randNum > 0)
            cndi = false;
    }

    // nejebou word (tab) li lazem yawsalo player
    liste resulta = tete;
    while (randNum != 0)
    {
        randNum--;
        resulta = resulta->svt;
    }

    // jbedna chhal men etapes lazemna bach nawslo w jbednah bel line div 10...
    int line_tempo = resulta->line;
    int nbr_etapes = 0;
    while (line_tempo != 0)
    {
        nbr_etapes++;
        line_tempo = line_tempo / 10;
    }

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

    printf("\n________________________________________________________________________________________\n\n");
    for (int i = 0; i < 10; i++)
    { // affiche first word
        printf("|  %d\t", tete_liste_player->vect[i]);
    }
    printf("|  n=0\n");

    // boucle bah koul mara lutilisateur ye9leb
    bool win, lose;
    win = false;
    lose = false;
    cndi = true;
    int num_of_flipes = 1;
    int pos;
    j = 1;

    while (cndi)
    {
        do
        { // scan l pos li ne9elbou 3andha
            scanf("%d", &pos);
        } while (pos < 1 || pos > N - n + 1);

        for (i = 0; i < 10; i++)
        {
            tab_tempo[i] = Q->vect[i];
        }

        cre_de_vect(tab_tempo, pos - 1, n);
        Ajout_apres(&Q, tab_tempo, 0, 0);

        // kout 9ader tekhdem bel tab tompo wahdo koul  mara te9leb fih b cre de vect
        // moraha taffichi w virifi ida rbah bla ma dir liste player lakin goult balak dir
        // mouchkil fel affichach bel sdl tema khalitha encas w nehtajouha

        for (int i = 0; i < 10; i++)
        { // affiche word li kharjetena
            printf("|  %d\t", Q->vect[i]);
        }
        printf("  |n=%d\n", j);
        j++;

        win = true;
        for (int i = 0; i < 10; i++)
        { // affiche word
            if ((resulta->vect[i]) != (Q->vect[i]))
                win = false;
        }

        num_of_flipes++;
        if ((num_of_flipes == 13) || (num_of_flipes == nbr_etapes * 3))
            lose = true;

        if ((win == true) || (lose == true))
            cndi = false;
    }

    if ((win))
        printf("                                      < you win! >\n");
    if ((lose))
        printf("                                      < you lose! >\n");
}
// tested
void player_vs_machine(int N, int n)
{

    // les deux **********************************************************************************************

    int i, j;
    int Tinit[10];                                         // tabl li yji fih the statrting word
    int T_de_letteres[52 /*kanet 16 ki kan mel a lel h*/]; // tab fih kamel wech ye9der yhot lutilisateur 1 2 3 ... -1 -2 -3...
    for (i = 0; i < 26 /*kanet N ki kan mel a lel h*/; i++)
    { // 3amarna tabl hadak 1 2 3...  -1 -2 -3..
        T_de_letteres[i] = i + 1;
    }
    j = 1;
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
            if (randNum < 2 * 26 /*kanet 2*N ki kan mel a lel h*/ && randNum >= 0)
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
    cndi = true;
    while (cndi)
    {
        randNum = rand();
        if (randNum < taile_de_liste && randNum > 0)
            cndi = false;
    }

    // nejebou word (tab) li lazem yawsalo player et machine
    liste resulta = tete;
    while (randNum != 0)
    {
        randNum--;
        resulta = resulta->svt;
    }

    // cas machine******************************************************************************

    // jbedna chhal men etapes lazemna bach nawslo w jbednah bel line div 10...
    int line_tempo = resulta->line;
    int nbr_etapes = 0;
    while (line_tempo != 0)
    {
        nbr_etapes++;
        line_tempo = line_tempo / 10;
    }

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

    printf("________________________________________machine :_______________________________________\n\n");

    int line = resulta->line;
    tete = cre_de_liste_cherche(Tinit, line, N, n);

    p = tete;
    j = 0;

    while (p != NULL)
    { // affichina kammel elkhotwat
        for (int i = 0; i < 10; i++)
        {
            printf("|  %d\t", p->vect[i]);
        }

        printf("|  n=%d\n\n", j);
        j++;
        printf("    line= %d\n\n", p->line);
        p = p->svt;
    }
    printf("                                      < machine win >\n");

    // cas player**************************************************************************************

    printf("_________________________________________player :_______________________________________\n\n");

    // creation de premier element of player liste
    liste tete_liste_player = malloc(sizeof(ne));
    for (i = 0; i < 10; i++)
    {
        tete_liste_player->vect[i] = Tinit[i];
    }

    tete_liste_player->line = 0;
    tete_liste_player->svt = NULL;
    liste Q = tete_liste_player;

    printf("\n                                  the init word is:\n\n");
    for (int i = 0; i < 10; i++)
    { // affiche first word
        printf("|  %d\t", tete_liste_player->vect[i]);
    }
    printf("|  n=0\n");

    // boucle bah koul mara lutilisateur ye9leb
    bool win, lose;
    win = false;
    lose = false;
    cndi = true;
    int num_of_flipes = 1;
    int pos;
    j = 1;

    int tab_tempo[10];

    while (cndi)
    {
        do
        { // scan l pos li ne9elbou 3andha
            scanf("%d", &pos);
        } while (pos < 1 || pos > N - n + 1);

        for (i = 0; i < 10; i++)
        {
            tab_tempo[i] = Q->vect[i];
        }

        cre_de_vect(tab_tempo, pos - 1, n);
        Ajout_apres(&Q, tab_tempo, 0, 0);

        // kout 9ader tekhdem bel tab tompo wahdo koul  mara te9leb fih b cre de vect
        // moraha taffichi w virifi ida rbah bla ma dir liste player lakin goult balak dir
        // mouchkil fel affichach bel sdl tema khalitha encas w nehtajouha

        for (int i = 0; i < 10; i++)
        { // affiche word li kharjetena
            printf("|  %d\t", Q->vect[i]);
        }
        printf("  |n=%d\n", j);
        j++;

        win = true;
        for (int i = 0; i < 10; i++)
        { // affiche word
            if ((resulta->vect[i]) != (Q->vect[i]))
                win = false;
        }

        num_of_flipes++;
        if ((num_of_flipes == 13) || (num_of_flipes == nbr_etapes * 3))
            lose = true;

        if ((win == true) || (lose == true))
            cndi = false;
    }

    if ((win))
        printf("                                      < you win! >\n");
    if ((lose))
        printf("                                      < you lose! >\n");
}
// tested
bool Existe(int T[10], int x)
{
    int i = 0;
    bool V = false;
    for (i = 0; i < 10; i++)
        /*if(T[i]==x)
             //V=true;
             else if(T[i]==-x)
                //V=true;*/
        return V;
}

int RandomNumber(int nr_min, int nr_max)
{
    bool cndi = true;
    int randNum;
    while (cndi)
    {
        randNum = rand();
        if (randNum <= nr_max && randNum >= nr_min)
            cndi = false;
    }
    return randNum;
}
