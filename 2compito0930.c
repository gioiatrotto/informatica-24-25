/*Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.*/
#include <stdio.h>

int main() {
    float n1, n2, n3;
    float max, min;
    float media;

    printf("Inserisci il primo numero: ");
    scanf("%f", &n1);
    
    printf("Inserisci il secondo numero: ");
    scanf("%f", &n2);
    
    printf("Inserisci il terzo numero: ");
    scanf("%f", &n3);

    max=n1;
    min=n1;
    if(max>n2){
        max=n2;
        if(max<n3)
            max=n3;
    }
    else
        if(max<n3)
             max=n3;

    printf("il massimo è: %.2f",max);

    if(min>n2){
        min=n2;
        if(min>n3)
            min=n3;
    }
    else
        if(min>n3)
            min=n3;

    printf("\n il minimo é: %.2f", min);

    media=(n1+n2+n3)/3;
    printf("\n la media dei 3 numeri è: %.2f",media);
        
}
