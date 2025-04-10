/*Dato
un vettore numerico di N posizioni al primo elemento dispari stampare
quanti valori diversi da zero si sono incontrati, il numero dispari
incontrato e la sua posizione nel vettore;*/
#include <stdio.h>
#include "libreria.c"
#define DIM 6

void _trovaPosizione (int vett[], int dim){
    int i=0,cnt=0;
    while(vett[i]%2==0 && i<dim){
        if(vett[i]!=0){
            cnt++;
            i++;
        }
            
    }
    if(vett[i]%2==1){
        printf("\nil primo numero dispari è %d\n nella posizione %d",vett[i],i);
        printf("sono stati incontrati %d valori",cnt);
    }
    
   
}

int main(){
    int vettore[DIM]={0};
    richiediValori(vettore,DIM);
    stampaVett(vettore,DIM, '_');
    _trovaPosizione (vettore,DIM);
}