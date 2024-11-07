/* DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE  PREVEDA: 
    1) LA SOMMA IN VALORE ASSOLUTO; 
    2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE; 
    3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI  AVVICINA DI PIÙ; 
    4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     
    int n1=0, n2=0;
    int somvalass=0;
    int differenza;
    int k;
    int scelta;
    int maggiore=0, minore=0;


    printf("inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("inserisci il secondo numero: ");
    scanf("%d",&n2);

    printf("inserisci quale operazione vuoi fare: ");
    scanf("%d", &scelta);

    switch(scelta){

        case 1:
    
                somvalass=n1+n2;
    
                if(somvalass<0){
                    somvalass=somvalass*(-1);
                    printf("la somma in valore assoluto è: %d", somvalass);
                }
                else if(somvalass>0)
                    printf("la somma in valore assoluto è: %d", somvalass);

                break;

        case 2: 
                if(n1>n2){
                    maggiore=n1;
                    minore=n2;
                    printf("il numero maggiore è : %d e quello minore: %d", n1,n2);
                    differenza=n1-n2;
                    printf("la differenza è: %d",differenza);
                }
                else if("n2>n1"){
                    maggiore= n2;
                    minore=n1;
                    printf("il numero maggiore è : %d e quello minore: %d", n2,n1);
                    differenza=n2-n1;
                    printf("la differenza è: %d",differenza);
                }
                break;

        case 3:  srand (time(NULL));
                break;

        case 4: 
                

                

    
    
        default:
            printf("l'operazione scelta non è accettabile");
    }
        
         



   



}