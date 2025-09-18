/*Caricare
da tastiera un vettore di N elementi. Scorrendo il vettore, al primo
zero incontrato stampare la somma di tutti gli elementi considerati e
quanti ne hai sommati*/
#include <stdio.h>
#include "libreria.c"
#define DIM 6
int main(){
    int vettore[DIM]={0};
    int sommavett=0;
    int cnt=0;
    richiediValori(vettore,DIM);
    stampaVett(vettore,DIM, '_');
    sommavett=SommaVettore(vettore,DIM, &cnt);
    printf("\n i %d elementi sommati danno la somma di: %d",cnt,sommavett);
}