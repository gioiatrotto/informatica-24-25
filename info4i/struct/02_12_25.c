/*esempio di utilizzo di una struttura complessa 
facendo accesso ai campi in modaliotà variabile
e in modalità puntatore alla struttura
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    char cognome[20];
    int età;
}persona;

int main(){
    persona p1;
    persona *p2;

    //inseriamo le informazioni in p1

    printf("inserisci il nome della persona: ");
    scanf("%s", p1.nome);
    fflush(stdin);
    printf("\ninserisci il cognome della persona: ");
    scanf("%s", p1.cognome);
    fflush(stdin);
    printf("inserisci l'età della persona: ");
    scanf("%d", &(p1.età));
    fflush(stdin);
    printf("dati della persona: %s, %s, %d", p1.nome, p1.cognome, p1.età);
}