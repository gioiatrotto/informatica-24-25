/*inserire le informazioni di studenti: 
nome- età- media voti scolastici
detereminare lo studnte con la media scolastica piu alta*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int eta;
    float media;
}studente;

void scrivistudenti(char *nome_file, int n_studenti){
    FILE *f = fopen(nome_file, "ab");
    if( f== NULL){
        printf("\nErrore!");
        return;
    }
    for(int i=0; i<n_studenti; i++){
        studente s;
        printf("\ninserisci nome studente %d", i+1);
        scanf("%49s", &s.nome);
        printf("\ninserisci nome studente %d", i+1);
        scanf("%d", &s.eta);
        printf("\ninserisci nome studente %d", i+1);
        scanf("%f", &s.media);
        getchar();
        fwrite(&s, sizeof(studente),  1, f);
    }
    fclose(f);
    if(ferror(f)){
        printf("\nerrore chiusura!");
    }
}

studente* leggistudenti(char *nome_file, studente *array){
    FILE* f= fopen(nome_file, "rb");
    if( f== NULL){
        printf("\nErrore!");
        return array;
    }
    int i=0;
    array = (studente*)realloc(array,sizeof(studente));
    while(fread(&array[i], sizeof(studente), 1,f)!= 0){
        i++;
        array = (studente*)realloc(array,(i+1) * sizeof(studente));
    }
    array = (studente*)realloc(array, i * sizeof(studente));
    fclose(f);
    return array;
}

studente trovamigliore(studente *array){
    int dim= sizeof(array) / sizeof(studente);
    studente best = {"", 0, 0};

    for(int i=0; i<dim; i++){
        if(array[i].media > best.media){
            best.media = array[i].media;
            best.eta= array[i].eta;
            strcpy(best.nome, array[i].nome);
        }
    }
    return best;
}
int main(){
    
}