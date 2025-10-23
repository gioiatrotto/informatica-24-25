/*data una stringa eliminare gli spazi */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef char* stringa;

void compatta(stringa buffer, int len){

    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1] = '\0';
        len--;
    }
}

void elimina_spazi(stringa frase){
    
    for(int i=0; frase[i]!='\0'; i++){
        if(frase[i] == ' '){
        for(int j=i; frase[j]!='\0'; j++)
            frase[j]=frase[j+1];
        }
      
    }
    
}

void stampa_stringa(stringa frase){
        printf("%s", frase);
}

int main(){
    char buffer[200];
    stringa frase;
    int i=0;

    printf("inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);
    int len = strlen(buffer);
    compatta(buffer,len);
    frase=(stringa)malloc((len+1) *sizeof(char));
    if(frase == NULL){
        printf("c'è un errore\n");
        return 1;
    }

    strcpy(frase,buffer);
    stampa_stringa(frase);
    elimina_spazi(frase);
    printf("\n");
    stampa_stringa(frase);
    free(frase);
    return 0;

}