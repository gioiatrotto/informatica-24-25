/*Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.*/
#include <stdio.h>
int main(){
    int n,fatt=1;
   
    printf("inserisci il valore di cui vuoi il fattoriale: ");
    scanf("%d", &n);
   for(int i=1; i<n; i++)
    fatt*=i;

    printf(" il calcolo del fattoriale di %d è: %d", n,fatt);
   
}