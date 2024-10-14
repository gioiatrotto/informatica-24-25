/* Scrivere un programma che legge 2 orari in ore minuti e secondi
     e dice quale viene prima dei due. 
     (Si risolva l’esercizio senza trasformare tutto in secondi).
*/
#include <stdio.h>

int main(){
    
    int ora=0;
    int minuti=0;

    //richiesta degli input

    printf("inserisci l'ora: ");
    scanf("%d", &ora);
    printf("inserisci i minuti: ");
    scanf("%d", &minuti);

    if(ora>=0 && ora<24 ){
        if(minuti>=0 && minuti<60){
                printf("l'orario è accettabile\n");
        }
        else
                printf("l'orario non è accettabile\n");
       
    }
    else
                printf("l'orario non è accettabile\n");

    int ora1=0;
    int minuti1=0;

    //richiesta degli input

    printf("inserisci l'ora: ");
    scanf("%d", &ora1);
    printf("inserisci i minuti: ");
    scanf("%d", &minuti1);

    if(ora1>=0 && ora1<24 ){
        if(minuti1>=0 && minuti1<60){
                printf("l'orario è accettabile\n");
        }
        else
                printf("l'orario non è accettabile\n");
       
    }
    else
                printf("l'orario non è accettabile\n");

    if(ora<ora1)
        printf("il primo orario è meno recente");
    else if(ora==ora1){
        if(minuti<minuti1)
            printf("il primo orario è meno recente");
        else if(minuti==minuti1)
            printf("i due orari sono uguali");
        else
            printf("il secondo orario è meno recente");
    }
      else
            printf("il secondo orario è meno recente");
}