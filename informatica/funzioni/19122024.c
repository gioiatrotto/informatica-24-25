/*  dato un numero N calcolare il suo quadrato 
    sommando i primi N numeri dispari
    es:N=7 7^2=49 
    1 3 5 7 9 11 13
*/
#include <stdio.h>
int main(){
    int N=0;
    int somm=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &N);
    }while(N<=0);

    for(int i=1; i<N*2; i+=2){
        somm+=i;
    }
    printf("%d^2=%d", N,somm);
}