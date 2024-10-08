/* data una data in formato gg mm aaaa
    verificare se la data è accettabile*/

#include <stdio.h>

int main(){
    
    int giorno=0;
    int mese=0;
    int anno=0;
    int bisestile=0;

    //richiesta degli input

    printf("inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("inserisci il mese: ");
    scanf("%d", &mese);
    printf("inserisci il anno: ");
    scanf("%d", &anno);

    //controllo dell'annno
    //un anno è bisestile se è multiplo di 4 ma non di 100 oppure multiplo di 400
    if(anno%100==0){
        if(anno%400==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    }
    else{
        if(anno%4==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    }

    //controllo del mese e del giorno

    if(mese>=1 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile)
                printf("la data è accettabile");
            else{
                printf("la data non è accettabile");
            }
        }
        
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && giorno<=30){
                    printf("\nla data è accettabile");
                }
                else{
                    printf("la data non è accettabile");
                }
            }
            else{
                if(giorno>=1 && giorno<=31){
                    printf("\nla data è accettabile");
                }
                else{
                    printf("la data non è accettabile");
                }
            }
        }
    }
    else{
        printf("la data non è accettabile");
    }
}