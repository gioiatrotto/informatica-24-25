/* STABILIRE SE DATI DUE NUMERI A e B 
    CONTROLLARE SE A è MINORE, UGUALE o MAGGIORE DI B
*/
#include <stdio.h>
int main(){
    int a=0;
    int b=0;

   printf("inserisci il primo valore: ");
    scanf("%d",&a);
    printf("inserisci il secondo valore: ");
    scanf("%d",&b);

     if (a == b){
        printf("i due valori sono uguali");
     }
     else{
        if(a>b)
            printf("il primo valore %d è maggiore del secondo valore %d",a,b);
    else
        if(a<b)
            printf("il primo valore %d è minore del secondo valore %d",a,b);      
}
     
}