//scrittura di dati formattati
#include <stdio.h>
typedef struct persona{
    char nome[20];
    char cognome[20];
    int eta;
}persona;

int main(){
    FILE *file = fopen("dati.txt", "w");
    persona persone[3];
     for(int i=0; i<3; i++){
        printf("\nnome: ");
        scanf("%s",persone[i].nome);
        printf("\ncognome: ");
        scanf("%s",persone[i].cognome);
        printf("\netà: ");
        scanf("%d",&persone[i].eta);
     }
     
    if(file==NULL){
        printf("errore apertura file\n");
        return 1;
    }
    
    fclose(file);
    return 0;
}