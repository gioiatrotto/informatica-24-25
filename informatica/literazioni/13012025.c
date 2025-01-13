/* Esercizio n°12
    Scrivi un programma che visualizzi la somma dei quadrati 
    dei primi 12 numeri naturali successivi a 8
    es: somma=9*9+10*10+11*11+....20*20
*/
#include <stdio.h>
int main(){
    int somma=0,inizio=0, quantita=0;
    printf("\ninserisci il valore iniziale: ");
    scanf("%d", &inizio);
    do{
    printf("\ninserisci quanti elementi vuoi considerare: ");
    scanf("%d", &quantita);
    }while(quantita<=0);

    for(int i=inizio+1; i<=inizio+quantita; i++ ){
        somma+=i*i;
    }
    printf("\nla somma dei %d valori da %d in poi vale: %d", quantita,inizio,somma);
}