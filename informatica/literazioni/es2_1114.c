/* 
    leggere una sequenza di numeri, visualizzarla.
    si termina non appena arriva uno zero
*/
#include <stdio.h>

int main(){
    int num;

    printf("inserisci un numero: ");
    scanf("%d", &num);

    while(num != 0){
        printf("il valore inserito é: %d", num);
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }
    
}