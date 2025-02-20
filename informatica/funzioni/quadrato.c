/*si osservi che il quadrato di ogni numero intero positivo N
sommando tra di loro i primi N numeri dispari
esempio: N=5; N2= 1+3+5+7+9*/
#include <stdio.h>
void Quadrato(int *_N);
int main(){
    int N=0;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &N);
    }while(N<=0);
    Quadrato(&N);
}
void Quadrato(int *_N){
    int somm=0;
    for(int i=1; i<*_N*2; i+=2){
        somm+=i;
    }
    printf("%d^2=%d",*_N,somm);
}
