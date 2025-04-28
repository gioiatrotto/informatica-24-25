/*creiamo un menu di richieste
    1) caricare un array
    2)stampare l'array
    3)ordina l'array con la tecnica del bubble sort 
*/
#include <stdio.h>
#include "libreria.c"
#define DIM 5
int main(){
    int vett[DIM];
    int scelta;
    do{   
        printf("\nMENU");
        printf("\n1) caricare un array");
        printf("\n2) stampa l'array");
        printf("\n3) ordina tramite il bubble sort");
        printf("\nDigita 0 per terminare");
        scanf("%d",&scelta);

        switch (scelta){
            case 1:{
                richiediValori(vett,DIM);
                break;
            }
            case 2:{
                stampaVett(vett,DIM,'-');
                break;
            }
            case 3:{
                caricaBubble(vett, DIM);
            }
            default:
            break;
        }
    
    }while(scelta!=0);

    
} 
