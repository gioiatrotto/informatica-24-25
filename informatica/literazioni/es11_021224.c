/* 
    Scrivi un programma che effettua il prodotto tra due numeri
    utilizzando il metodo delle somme successive 
    dopo aver controllato l’input e accettato solo valori maggiori di 0
*/
#include <stdio.h>
int main(){
    int num1,num2,i,somma=0;
    

    do{
        printf("inserisci il primo valore: ");
        scanf("%d",&num1);
        
    }while(num1<0);


    do{
        printf("inserisci il secondo valore: ");
        scanf("%d",&num2);
    }while(num2<0);
    
    for(i=0; i<num1; i++){
        somma+=num2;        //somma=somma+num2
    }
    printf("il prodotto tra %d e %d vale: %d", num1,num2,somma);
}
