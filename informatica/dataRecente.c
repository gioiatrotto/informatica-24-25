/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. */
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
                printf("la data è accettabile\n");
            else{
                printf("la data non è accettabile\n");
            }
        }
        
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && giorno<=30){
                    printf("\nla data è accettabile\n");
                }
                else{
                    printf("la data non è accettabile\n");
                }
            }
            else{
                if(giorno>=1 && giorno<=31){
                    printf("\nla data è accettabile\n");
                }
                else{
                    printf("la data non è accettabile\n");
                }
            }
        }
    }
    else{
        printf("la data non è accettabile\n");
    }

    int giorno1=0;
    int mese1=0;
    int anno1=0;
    int bisestile1=0;

    //richiesta degli input

    printf("inserisci il giorno: ");
    scanf("%d", &giorno1);
    printf("inserisci il mese: ");
    scanf("%d", &mese1);
    printf("inserisci il anno: ");
    scanf("%d", &anno1);

    //controllo dell'annno
    //un anno è bisestile se è multiplo di 4 ma non di 100 oppure multiplo di 400
    if(anno1%100==0){
        if(anno1%400==0){
            printf("l'anno è bisestile");
            bisestile1=1;
        }
    }
    else{
        if(anno1%4==0){
            printf("l'anno è bisestile");
            bisestile1=1;
        }
    }

    //controllo del mese e del giorno

    if(mese1>=1 && mese1<=12){
        if(mese1==2){
            if(giorno1>=1 && giorno1<=28+bisestile1)
                printf("la data è accettabile\n");
            else{
                printf("la data non è accettabile\n");
            }
        }
        
        else{
            if(mese1==11 || mese1==4 || mese1==6 || mese1==9){
                if(giorno1>=1 && giorno1<=30){
                    printf("\nla data è accettabile\n");
                }
                else{
                    printf("la data non è accettabile\n");
                }
            }
            else{
                if(giorno1>=1 && giorno1<=31){
                    printf("\nla data è accettabile\n");
                }
                else{
                    printf("la data non è accettabile\n");
                }
            }
        }
    }
    else{
        printf("la data non è accettabile\n");
    }

    if(anno>anno1)
        printf("la prima data è più recente");
    else if(anno==anno1){
        if(mese>mese1)
            printf("la prima data è più recente");
        else if(mese==mese1){
            if(giorno>giorno1)
                printf("la prima data è più recente");
            else if(giorno==giorno1)
                printf("entrambe le date sono uguali");
            else
                printf("la seconda data è più recente");

        } 
        else
            printf("la seconda data è più recente");
    } 
    else 
        printf("la seconda data è più recente");
}