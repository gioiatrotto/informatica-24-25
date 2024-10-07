/*Verificare se un numero dato in input è divisibile sia per 3 sia per 5*/
#include <stdio.h>
int main(){
    int A=0;
    printf("inserisci un valore: ");
    scanf("%d", &A);

    if (A/3){
        printf("il numero è divisibile per 3");
    }
    else{
        printf("il numero non è divisibile per 3");
    }
     if (A/5){
        printf("il numero è divisibile per 5");
    }
    else{
        printf("il numero non è divisibile per 5");
    }
   
    
    
}