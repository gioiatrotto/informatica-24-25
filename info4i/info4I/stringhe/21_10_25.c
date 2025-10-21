/*data una stringa contare il numero delle vocali */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* stringa;

void compatta(stringa buffer, int len){

    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1] = '\0';
        len--;
    }
}

int conteggio(stringa frase){
    int cnt=0;
    for(int i=0; frase[i]!='\0'; i++){
        char c = tolower(frase[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            cnt++;
        }
    }
}

int main(){
    char buffer[200];
    stringa frase;


    printf("inserisci una stringa");
    fgets(buffer, sizeof(buffer), stdin);
    int len = strlen(buffer);
    compatta(buffer,len);

    frase=(stringa)malloc((len+1) *sizeof(char));
    if(frase == NULL){
        printf("c'è un errore\n");
        return 1;
    }

    strcpy(frase,buffer);

    printf("il numero delle vocali è: %d", conteggio(frase));

    free(frase);
    return 0;

}