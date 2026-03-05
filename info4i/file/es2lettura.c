//lettura di dati formattati
#include <stdio.h>
int main(){
    FILE *file = fopen("dati.txt", "r");
    char nome[100];
    int età;
    float media=0;

    if(file==NULL){
        printf("errore apertura file\n");
        return 1;
    }
    fscanf(file,"%s %d %f", nome, &età, &media);
    printf("nome: %s  età: %d  media: %.2f", nome, età, media);
    fclose(file);
    return 0;
}