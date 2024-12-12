/*dati N numeri in input (con N chiesto all'utente strettamennte maggiore di 5 ), calcolare 
e mostrare la somma dei numeri nrgativi e positvi.*/
#include <stdio.h>
int main(){

    int N,val=0,sumn=0,sump=0;
    do{
        printf("\ninserisci il numero di valori che vengono inseriti: ");
        scanf("%d", &N);
    }while(N<5);

    for(int i=0; i<N; i++){
        printf("\ninserisci un valore: ");
        scanf("%d", &val);
        if(val>=0)
            sump+=val;
        else
            sumn+=val;
    }
    printf("\nla somma dei numeri positivi è: %d",sump);
    printf("\nla somma dei numeri negativi è: %d",sumn);
    
}