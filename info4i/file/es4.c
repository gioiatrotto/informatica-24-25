/*scrivere una funzione che preso in ingresso il nome 
del file contenente interi, lo modifichi in modo tale
da contenere gli stessinumeri ma ordinati in senso decrescente*/
#include <stdio.h>
#include <stdlib.h>

void Ordinafile(char nomefile[]){
    FILE *Fp;
    int vett[100],i=0;

    Fp = fopen(nomefile, "r");
    if(Fp == NULL){
        printf("errore\n");
        return;
    }

    //lettura dei numeri dal file
    while(fscanf(Fp, "%d", &vett[i])== 1){
        printf("elemento %d: %d\n", i+1,vett[i]);
        i++;
    }
    fclose(Fp);
}

int main(){
    char nome[20];

    printf("inserisci il nome del file: ");
    scanf("%s", nome);

    Ordinafile(nome);

}