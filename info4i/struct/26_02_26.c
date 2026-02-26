/* data la struct prodotto:
-nome
-codice
-quantità
-prezzo
Eseguire 
1. inserire prodotto
2. stampare elenco prodotti
3. cercare un prodotto per codice
4. calcolare il valore totale del magazzino */

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[30];
    int codice;
    int quantità;
    float prezzo;
}prodotto;

void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}


void inserisci(prodotto *Pr){

    printf("\ninserisci il nome del prodotto: ");
    fgets(Pr -> nome,30,stdin);
    clear_buffer();
    printf("\ninserisci il codice del prodotto:");
    scanf("%d", &Pr->codice);
    clear_buffer();
    printf("\ninserisci la quantità del prodotto:");
    scanf("%d", &Pr->quantità);
    clear_buffer();
    printf("\ninserisci il prezzo del prodotto:");
    scanf("%d", &Pr->codice);
    clear_buffer();

}
void stampa(prodotto *Pr){

    printf("\nil nome del prodotto è: %s", Pr-> nome);
    printf("\nil codice del prodotto é: %d", Pr-> codice);
    printf("\nla quantità del prodotto é: %d", Pr->quantità);
    printf("\nil prezzo del prodotto é: %d", Pr->prezzo);

}


int main(){
    prodotto *Pr;
    int n=0;
    int scelta=0;
    printf("\nquanti prodotti vuoi inserire?");
    scanf("%d", &n);
    Pr=(prodotto*)malloc(n * sizeof(prodotto));
   
    for(int i=0; i<n; i++){
        inserisci(&Pr[i]);
    }

    while(scelta!=4){
        printf("\n1. Stampa elenco dei prodotti");
        printf("\n2. cercare un prodotto per codice");
        printf("\n3. calcolare il valore totale del magazino");
        printf("\n4. esci dal programma");
        scanf("%d", &scelta);
    
        switch(scelta){
            case 1:
                for(int i=0; i<n; i++)
                    stampa(&Pr[i]);
            break;

            case 2:
               
            break;
            
            case 3:
           
            break;

            case 4:
               
            break;
        }
    }
}