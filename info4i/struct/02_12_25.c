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
    printf("\ninserisci l'età della persona: ");
    scanf("%d", &(p1.età));
    fflush(stdin);
    printf("\ndati della persona: %s, %s, %d", p1.nome, p1.cognome, p1.età);

    //inseriamo le informazioni in p2

    p2=malloc(sizeof(persona));
     printf("\ninserisci il nome della persona: ");
    scanf("%s", p2->nome);
    fflush(stdin);
    printf("\ninserisci il cognome della persona: ");
    scanf("%s", p2->cognome);
    fflush(stdin);
    printf("\ninserisci l'età della persona: ");
    scanf("%d", &(p2->età));
    fflush(stdin);
    printf("\ndati della persona: %s, %s, %d", p2->nome, p2->cognome, p2->età);
}