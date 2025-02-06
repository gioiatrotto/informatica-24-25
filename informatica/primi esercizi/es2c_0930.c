/* Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.*/
#include <stdio.h>
int main(){
    float a=0;
    float b=0;
    float c=0;
    float media;
    float d=0;

    printf("inserisci il primo valore: ");
    scanf("%f",&a);
    printf("inserisci il secondo valore: ");
    scanf("%f",&b);
    printf("inserisci il terzo valore: ");
    scanf("%f", &c);
    media= (a+b+c)/3;
    printf("la media aritmetica dei 3 valori è: %.2f",media);

    if(a<=b){
        d=a;
    }
    else{
        if(b<c)
        printf("il valore più piccolo è: %.2f",b);
        else 
        printf("il valore più piccolo è: %.2f",c);
    }
        
   if(d<=c){
    printf("il valore più piccolo è: %.2f",d);
   }
   else
    printf("il valore più piccolo è: %.2f",c);


}