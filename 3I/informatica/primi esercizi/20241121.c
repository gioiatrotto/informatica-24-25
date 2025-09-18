/*Dato un numero stampare tutto i suoi divisori*/
#include <stdio.h>
int main(){
    int numero;
    int divisore=2;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    while(divisore<=numero/2){
        if(numero%divisore==0)
            printf("%d è un divisore di %d\t", divisore, numero);
        divisore++;
    } printf("1\t%d", numero);
}