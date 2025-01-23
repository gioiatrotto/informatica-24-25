/*Esercizio 2 
Data una sequenza di valori (si termina non appena si inserisce -1)
verificare se i divisori dei valori  cadono nell’intervallo [8,38]. 
*/
#include <stdio.h>
int main(){
    int n=0,div=0;
    do{
        printf("\ninserisci un valore: ");
        scanf("%d",&n);
            for(int i=1; i<=n; i++){
            if(n%i==0){
                div=i;
                if(div>=8 && div<=38){
                    printf("\nil divisore %d del numero %d è compreso tra 8 e 38", div,n);
                }
            }else
                printf("\nil divisore %d del numero %d non è compreso tra 8 e 38", div,n);
        }
    }while(n!=(-1));
}