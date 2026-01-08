/*classe di studenti:
cognome,nome,classe,matricola.
per ogni studente dotato di mmatricola abbiamo le informazioni 
riguardante gli esami e il livello raggiunto:
1) calcolare lo studente con piu certificazioni
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char cognome[20];
    char nome[20];
    char classe[3];
    int matricola;//1000-9999
}studente;

typedef struct{
    int matricola;
    struct esame{
        char corso[20];
        int livello;//(1-3)
    };
}certificazioni;
int main(){
    studente *studenti;
    int n;

    do{
        printf("inserisci il numero degli studenti(max 9999): ");
        scanf("%d", &n);

    }while(n<0 || n>9999);
 
    studenti = (char*)malloc(sizeof(char));
    if(studenti==NULL){
        printf("Errore di allocazione");
        return 1;
    }
    for(int i=0; i<n; i++){
        printf("\ninserisci il nome dello studente: ");
        scanf("%s", studenti[i].nome);
        fflush(stdin);
        printf("\ninserisci il cognome dello studente: ");
        scanf("%s", studenti[i].cognome);
        fflush(stdin);
        printf("\ninserisci la classe dello studente: ");
        scanf("%s",  studenti[i].classe);
        fflush(stdin);
        printf("\ninserisci la matricola dello studente: ");
        scanf("%d",  studenti[i].matricola);
        fflush(stdin);
    }
}