/* Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori. 
    Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso. 
*/
#include <stdio.h>
int main(){
    int n=0,cntp=0;

    for(int i=0; i>10; i++){  
        printf("inserisci un valore: ");
        scanf("%d", &n);
        
        for(int j=n; j>0; j--){
            if(n%j==0){
                cntp++;
                }
            }
            if(cntp==2){
                printf("%d è un numero primo", n);
            }
        }
        printf("%d ", cntp);
    }
