/*controllare se l'orario è accettabile*/
#include <stdio.h>

int main(){
    
    int ora=0;
    int minuti=0;
    int secondi=0;

    //richiesta degli input

    printf("inserisci l'ora: ");
    scanf("%d", &ora);
    printf("inserisci i minuti: ");
    scanf("%d", &minuti);
    printf("inserisci i secondi: ");
    scanf("%d", &secondi);

    if(ora>=0 && ora<24 ){
        if(minuti>=0 && minuti<60){
            if(secondi>=0 && secondi<60)
                printf("l'orario è accettabile");
            else
                printf("l'orario non è accettabile");
        }
        else
                printf("l'orario non è accettabile");
    }
    else
                printf("l'orario non è accettabile");
}