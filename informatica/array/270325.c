/*dati 2 vettori eseguire gli scambi dei valori tra i due vettori*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "libreria.c"
#define DIM 10

int main(){
    int vettoreA[DIM]={0};
    int vettoreB[DIM]={0};
    valoriRandom(vettoreA, DIM);
    stampaVett(vettoreA, DIM, '.');
    printf("\n");
    srand(time(NULL));
    valoriRandom(vettoreB, DIM);
    stampaVett(vettoreB, DIM, '.');

    for(int i=0; i<DIM; i++){

    }
}