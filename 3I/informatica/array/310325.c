/*dopo aver caricato un vettore confrontare la somma delle
    componenti di indici pari con la somma delle componenti dispari e dire
    se la somma maggiore è divisibile per un valore K diverso da 0
*/
#include <stdio.h>
#include "libreria.c"
#define DIM 5

int main(){
    int vett[DIM]={0};
    richiediValori(vett ,DIM);
    stampaVett(vett, DIM, '.');

}