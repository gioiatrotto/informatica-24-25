/*Esercizio 1 
    Data una sequenza di numeri (si termina non appena si inseriscono due numeri 
    consecutivi uguali),
    determinare il minimo e il massimo e verificare se uno è 
    il multiplo/divisore dell’altro. 
*/
#include <stdio.h>
int main(){
    int n=0,min,max,npre;

    printf("inserisci il primo numero della sequenza: ");
    scanf("%d", &n);
    min=n;

    do{
    printf("inserisci un valore : ");
    scanf("%d", &n);
    
        if(n>max){
            max=n;
        }
        if(min<max)
            min=max;

    }while(n!=0);

    printf("%d è il valore maggiore", max);
    printf("\n%d è il valore minore", max);

    
    
}