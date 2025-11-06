/*calcola il codice fiscale:
CCC → prime tre lettere del cognome, formate prendendo le consonanti (o le vocali, 
se le consonanti non bastano);
NNN → prime tre lettere del nome, con una regola simile a quella del cognome (ma se 
ci sono quattro consonanti, si prendono la 1ª, 3ª e 4ª);
YY → ultime due cifre dell’anno di nascita;
M → lettera che rappresenta il mese di nascita (A = gennaio, B = febbraio, C = marzo,
D = aprile, E = maggio, H = giugno, L = luglio, M = agosto, P = settembre, R 
= ottobre, S = novembre, T = dicembre);
DD → giorno di nascita (per le donne si aggiunge 40 al giorno);
LLLL → codice del comune di nascita (per questo esercizio useremo G186, che è il codice del comune di Ostiglia);
C → lettera di controllo calcolata con una formula basata sui precedenti 15 caratteri.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* stringa;
typedef int* array;

void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}


int main(){
    char nome[30];
    char codice [20];
    char cognome[30];
    array anno[4];
    char comune[]="G186";
    char mese;
    int giorno;
    char sesso;
    int cntc=0;
    int j=0;

    printf("inserisci il nome: ");
    scanf("%s", nome);
    clear_buffer();
    printf("\ninserisci il cognome: ");
    scanf("%s", cognome);
    clear_buffer();
    /*printf("\ndi che anno sei? ");
    scanf("%d", &anno);
    printf("\nin che mese sei nato? A = gennaio,B = febbraio, C = marzo, D = aprile, E = maggio, H = giugno, L = luglio, M = agosto, P = settembre, R = ottobre, S = novembre, T = dicembre ");
    scanf("%c", &mese);
    clear_buffer();
    printf("\nin che giorno sei nato? ");
    scanf("%d", &giorno);
    clear_buffer();
    printf("di che sesso sei? inserisci 'm' se sei maschio o 'f' se sei femmina ");
    scanf("%c", &sesso);*/

    //COGNOME
    for(int i=0; i<=strlen(cognome); i++){
        if(cognome[i]!='a' && cognome[i]!='e' && cognome[i]!='i' && cognome[i]!='o' && cognome[i]!='u'){
            codice[j++]=cognome[i];
            cntc++;
        }
    }
    if(cntc<3){
        for(int i=0; i<=strlen(cognome); i++){
            if(cognome[i]=='a'||cognome[i]=='e'||cognome[i]=='i'||cognome[i]=='o'||cognome[i]=='u'){
                codice[j++]=cognome[i];
            }
        }

    }
    j=3;
    

    //NOME
    cntc=0;
    for(int i=0; i<=strlen(nome); i++){
        if(nome[i]!='a' && nome[i]!='e' && nome[i]!='i' && nome[i]!='o' && nome[i]!='u' && nome[i]!='\0'){
        
            codice[j++]=nome[i];
            cntc++;
        }
    }
    
    if(cntc<3){
        for(int i=0; i<=strlen(nome); i++){
            if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u'){
                codice[j++]=nome[i];
            }
        }
    }
    j=6;
  
    for(int i=0; i<j; i++){
        printf("%c", codice[i]);
    }
}