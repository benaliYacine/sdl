#include <stdio.h>
#include <stdlib.h>
#include "projet_sans_SDL.h"
#include <stdbool.h>
#include <math.h>

int main()
{
    int N, n;
    printf("                                     donner N:");
    scanf("%d", &N);
    printf("                                     donner n:");
    scanf("%d", &n);
    bool vect_juste;
    int j;
    liste tete, p;
    tete = cre_de_arbre(N, n);
    printf("-----------------------------------N = %d  et  n = %d-----------------------------------\n", N, n);
    j = 1;
    p = tete;
    while (tete != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("|  %d\t", tete->vect[i]);
        }

        printf("|  n=%d\n\n", j);
        j++;
        printf("    line= %d\n\n", tete->line);
        tete = tete->svt;
    }
    j--;
    printf(" n avec les vect negative =%d", j);
    while (p != NULL)
    {
        vect_juste = true;
        for (int i = 0; i < 10; i++)
        {
            if (p->vect[i] < 0)
            {
                vect_juste = false;
            }
        }
        if (vect_juste == false)
        {
            j--;
        }
        p = p->svt;
    }
    printf("\n\n n sans les vect negative =%d\n\n", j);

    return 0;
}
