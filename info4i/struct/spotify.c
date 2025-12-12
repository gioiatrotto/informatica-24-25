#include <stdio.h>
#include <stdlib.h>

int id=0;

typedef char* stringa;

typedef struct{
    stringa titolo[30];
    stringa artista[30];
    int durata;
}canzone;

typedef struct {
    canzone* testa;
    int lunghezza;
} Lista;

int main(){
    int scelta;
    do{

        printf("1.");
        printf("2.");
        printf("3.");
        printf("4.");
        printf("5.");
        printf("6.");
        printf("7.");
        printf("8. Esci dal programma");

    }while(scelta!=8)
    
}