/* calcola il costo sostenuto dalla scolaresca per andare a teatro 
    sapendo che il biglietto ordinario costa 12 euro,
     i 2 docenti accompagnatori hanno lo sconto del 50% 
     e che il numero degli alunni deve essere letto in INPUT.*/

#include <stdio.h>

int main(){
    float scolaresca,docenti,prezzofinalescolaresca,prezzofinaledocenti,prezzofinaledocentitotale;
    printf("inserisci numero della scolaresca");
    scanf("%f", &scolaresca);
    prezzofinalescolaresca=scolaresca*12;
    prezzofinaledocenti=12/2;
    prezzofinaledocentitotale=prezzofinaledocenti*2;
    printf("il prezzo finale della scolaresca è: %.2f ",prezzofinalescolaresca);
    printf("il prezzo finale a testa per i docenti è: %.2f",prezzofinaledocenti);
    printf("il prezzo finale totale dei docenti è: %.2f",prezzofinaledocentitotale);
}