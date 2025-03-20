/*caricato un vettore con valori random
    calcolare la media dei valori
*/
#include <stdio.h>
#include "libreria.c"
#define DIM 10

int main(){
    int vettore[DIM]={0};
    float media;
    valoriRandom(vettore, DIM);
    stampaVett(vettore, DIM, '_');
    media=CalcolaMedia(vettore, DIM);
    printf("la media è : %.2f", media);
}
