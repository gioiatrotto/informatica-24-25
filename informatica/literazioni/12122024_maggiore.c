/*dati in input 10 numeri interi determinare il valore maggiore e quante volte compare*/
#include <stdio.h>
int main(){

    int N,max=0, cnt=0;
    for(int i=0; i<10; i++){
        printf("inserisci un valore: ");
        scanf("%d", &N);
        if(i==0)
            max=N;
            if(N>max){ 
                max=N;
                cnt=1;
            }
            else if(max==N){
                cnt++;
            }
    }
   printf("\nil valore maggiore inserito é: %d", max);
   printf("\nil valore %d compare %d volte", max,cnt);
}