/* Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini
    se  stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ ,
    tale da stampare solo i valori che rendono la serie crescente o decrescente
    e restituire quanti numeri erano stati inseriti.
*/
#include <stdio.h>
int main(){
    int n,cre,dec;
    printf("vuoi stampare in senso crescente(1) o decrescente(2) ?");
    scanf("%d", &n);

    switch(n){
        case 1:
                do{
                    printf("inserisci un numero: ");
                    scanf("%d",&n);
                }while(n==0);
                cre=n;
                
                



        case 2: 
    }


    
}