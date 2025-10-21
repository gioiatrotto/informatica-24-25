/*Esercizio 3 
Dato un numero comunicare il numero di cifre di cui è composto e sommarle; 
verificare inoltre se la somma è multiplo di 3 di 5 oppure di 7.
*/
#include <stdio.h>
int main(){
    int n,quoz=0,cnt=0,somm=0, cifra;
    printf("inserisci un valore: ");
    scanf("%d", &n);
        quoz=n/10;
        cifra=n%10;
        somm+=cifra;
        cnt++;
    do{
        quoz=quoz%10;
        cifra=quoz%10;
        somm+=cifra;
        cnt++;
    }while(n==0);

        if(somm%3==0 && somm%5==0){
            printf("\nla somma è %d ed è multiplo sia di 3 e di 5", somm);
        }
        else if(somm%7==0){
            printf("\nla somma è %d ed è multiplo di 7", somm);
        }
        printf("\nla somma è %d non è multiplo ne di 3 ne di 5 ne di 7", somm);

    printf("il numero è composto da %d cifre", cnt);
}