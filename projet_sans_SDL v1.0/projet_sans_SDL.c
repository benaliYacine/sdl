#include <stdio.h>
#include <stdlib.h>
#include "projet_sans_SDL.h"
#include <stdbool.h>
#include <math.h>
//tested
void cre_de_vect(int T[10],int pos,int n){
    int i,x;
    //pos--;

    if(n%2==0){
        for(i=0;i<n/2;i++){
            x=T[i+pos];
            T[i+pos]=T[n-i-1+pos];
            T[n-i-1+pos]=x;
        }
    }else{
        for(i=0;i<=n/2;i++){
            x=T[i+pos];
            T[i+pos]=T[n-i-1+pos];
            T[n-i-1+pos]=x;
        }

    }
    for(i=0;i<n;i++){
            T[i+pos]=T[i+pos]*(-1);
    }
}

bool existe_deja(int T[10],liste tete){
    int i;
    bool ve_de_cel;bool ve_de_vec=false;liste p; p=tete;
    while(p!=NULL && ve_de_vec==false){// ZeDt fel condition et ve de vec == false
        ve_de_cel=true;
        for(i=0;i<10;i++){
            if(T[i]!=p->vect[i])
            ve_de_cel=false;
        }

        if(ve_de_cel==true){
            ve_de_vec=true;
        }
        p=p->svt;
    }
    return(ve_de_vec);

}

void Ajout_apres(liste *Q,int T[10],int pos,int line){
    int i;
    liste nouv=malloc(sizeof(ne)); //HADA TANI BEDELT FIH + LISTE raditha ne

    for(i=0;i<10;i++){
      nouv->vect[i]=T[i];
    }
    nouv->svt=(*Q)->svt;// canet nouv->svt=NULL;
    (*Q)->svt=nouv;
    (*Q)=nouv;
    (*Q)->line=line*10+pos+1;

}

void cre_de_tous_les_cas(liste adr_de_cel,liste *Q,liste tete,int N,int n){
    int tab_tempo[10],i,j;
    bool ve_existe;

    for(j=0;j<=N-n;j++){
        for(i=0;i<10;i++){                //hadi kouna dayrina bara lakin sot belilazem
        tab_tempo[i]=adr_de_cel->vect[i]; //tji hna lakhaterch les tableau daymen entrés
        }                                 //sortie tema lazem koul khatra tjadedha
        cre_de_vect(tab_tempo,j,n); //ki t3ayat l cre de vect rayha tetbedel tab tompo w hna moraha nestha9ou l9dima 3labiha
        ve_existe=existe_deja(tab_tempo,tete);
        if(ve_existe==false){         // if kanet bara for aya dakhaltha
            Ajout_apres(Q,tab_tempo,j,adr_de_cel->line);
        }
    }

}

liste cre_de_arbre(int N,int n){
    liste tete,Q,adr_de_cel;
    int i;

    tete=malloc(sizeof(ne));// hna tani ne fi blaset liste
    for(i=0;i<10;i++){
        tete->vect[i]=0;
    }
    for(i=0;i<N;i++){
        tete->vect[i]=i+1;
    }
    tete->line=0;
    tete->svt=NULL;
    Q=tete;
    adr_de_cel=tete; // hada estar zetou kouna nasyiine nhoto adr de cel fel la tete
    while(adr_de_cel!=NULL){
        cre_de_tous_les_cas(adr_de_cel,&Q,tete,N,n);
        adr_de_cel=adr_de_cel->svt;
    }
    return tete;


}
//tested
int mod_inv(int n){

    while(n/10!=0){
        n=n/10;
    }
    return n;

}
//tested
int div_inv(int n){
    int R=0,i=0;

    while(n/10!=0){
        R=(n%10)*pow(10,i)+R;
        i++;
        n=n/10;
    }

    return R;

}











