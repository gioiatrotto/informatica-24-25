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

    max = n1;
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }

  
    min = n1;
    if (n2 < min) {
        min = n2;
    }
    if (n3 < min) {
        min = n3;
    }

    media = (n1 + n2 + n3) / 3;

    printf("\nIl numero più grande è: %.2f\n", max);
    printf("Il numero più piccolo è: %.2f\n", min);
    printf("La media aritmetica è: %.2f\n", media);

}