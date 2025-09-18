/*calcolare la somma dei primi N numeri
naturali.
es: 5 1+2+3+4+5*/

#include <stdio.h>
int main(){
    
    int N=0;
    int somma=0;
    do{
        printf("insiresci un valore: ");
        scanf("%d", &N);
    }while(N<=0);

    for(int i=0; i<=N; i++){
        somma+=i;
    }
    printf("la somma é: %d",somma);
}