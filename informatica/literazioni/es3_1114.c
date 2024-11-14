/* 
    leggere una sequenza di numeri, visualizzarla e dterminare quanti
    numeri sono stati inseriti,si termina non appena arriva uno zero
*/
#include <stdio.h>

int main(){
    int num;
    int cnt=1;

    printf("inserisci un numero: ");
    scanf("%d", &num);
    
    while(num != 0){
        printf("il valore inserito é: %d\n", num);
        printf("inserisci un numero: ");
        scanf("%d", &num);
        cnt++;
    }
    printf("\n hai inserito %d valori",cnt);
}