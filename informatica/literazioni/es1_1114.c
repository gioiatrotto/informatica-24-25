/*dati 5 valori stamparli*/
#include <stdio.h>
int main(){

    int  num=0, cnt=0; //variabile contatore sempre inizializzata a zero

    while(cnt<5){

        printf("\ninserisci un numero: ");
        scanf("%d",&num);
        cnt++;
        printf("\n il valore inserito é: %d ", num);
    }
    

}