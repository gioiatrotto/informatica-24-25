/*stampa i primi N numeri dispari successivi al numero A */
#include <stdio.h>
int main(){

    int A=0;
    int n=0;
    do{
    printf("inserisci il valore da cui vuoi partire: ");
    scanf("%d", &A);
    printf("inserisci il numero di valori dispari che vuoi stampare dopo %d: ", A);
    scanf("%d", &n);
    }while (A=0);
    
    for(int i=0; i<n; i++){
        if(A%2==1){
            A+=2;
            
        }
    }

}