/*CREATA UNA STRUCT PRODOTTO CON NOME, ID PREZZO SCRIVERE
 SU FILE BINARIO UNA SERIE DI PRODOTTI
 MODIFICARE IL PREZZO DI UN PRODOTTO DATO IL SUO ID*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char nome[50];
    float prezzo;
}Prodotto;

void inserisciProdotto(const char *filename){
    FILE *fp= fopen(filename,"ab");
    int n;
    Prodotto p;
    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }
    printf("\nquanti prodotti vuoi inserire? ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("\nProdotto %d\n",i+1);
        printf("\nID: ");
        scanf("%d", &p.id);
        getchar();
        printf("\nNOME: ");
        scanf("%[^\n]", p.nome);
        getchar();
        printf("\nPREZZO: ");
        scanf("%f", &p.prezzo);
        getchar();
        fwrite(&p, sizeof(Prodotto),1, fp);
    }
    fclose(fp);
}

void stampaProdotti(const char *filename){
    FILE *fp= fopen(filename,"rb");
    Prodotto p;
    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }
    printf("\nElenco prodotti\n ");
    while(fread(&p,sizeof(Prodotto),1,fp)==1){
        printf("\nID: %d - Nome: %s - Prezzo: %.2f", p.id,p.nome,p.prezzo);
    }
    fclose(fp);
}
void cercaProdotto(const char *filename, int _id){
    FILE *fp= fopen(filename,"rb");
    Prodotto p;
    int trovato;
    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }
    while(fread(&p ,sizeof(Prodotto),1,fp)==1 && !trovato){
        if(p.id == _id){
            printf("\nTrovato Nome: %s - Pezzo %f", p.nome, p.prezzo);
            trovato= 1;

        }
    }
    if(!trovato)
        printf("\nprodotto non trovato.");

    fclose(fp);
}
void modificaProdotto(const char *filename, int _id, float nP){
    FILE *fp= fopen(filename,"r+b");
    Prodotto p;
    
    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }
    while(fread(&p ,sizeof(Prodotto),1,fp)==1 ){
        if(p.id == _id){
           p.prezzo = nP;
           fseek(fp, -sizeof(Prodotto), SEEK_CUR);
           fwrite(&p, sizeof(Prodotto), 1, fp);
        }
    }
    fclose(fp);
}

int main(){
    const char *file="prodotti.dat";
    int scelta,id;
    float nuovoprezzo;
     do {
        printf("\nMenu prodotti:\n");
        printf("1. Aggiungi prodotto\n");
        printf("2. Visualizza elenco prodotti\n");
        printf("3. Modifica prezzo prodotto\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                inserisciProdotto(file);
                break;
            case 2:
                stampaProdotti(file);
                break;
            case 3:
                printf("\nInserisci l'id del prodotto: ");
                scanf("%d", &id);
                getchar();
                cercaProdotto(file, id);
                printf("\ninerisci il nuovo prezzo: ");
                scanf("%f", &nuovoprezzo);
                getchar();
                modificaProdotto(file,id, nuovoprezzo);
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while(scelta != 0);
}