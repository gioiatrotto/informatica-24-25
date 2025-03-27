/*dati 2 vettori eseguire gli scambi dei valori tra i due vettori*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "libreria.c"
#define DIM 10

int main(){
    srand(time(NULL));
    int vettoreA[DIM]={0};
    int vettoreB[DIM]={0};
    valoriRandom(vettoreA, DIM);
    stampaVett(vettoreA, DIM, '.');
    printf("\n");
    valoriRandom(vettoreB, DIM);
    stampaVett(vettoreB, DIM, '.');
    scambiaVettori(vettoreA, vettoreB, DIM);
    printf("\nscambio i valori dei vettori:\n");
    stampaVett(vettoreA, DIM, '.');
    printf("\n");
    stampaVett(vettoreB, DIM, '.');
}