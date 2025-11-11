/*data una stringa iniziale e il fattore di cifratura creare
la stringa cifrata*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* stringa;


void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}


int main(){
    stringa s1;
    int n=0;
    int codc=0;
    int len=0;
    char scelta=0;

    printf("di quanto vuoi che sia lunga la tua password? ");
    scanf("%d",&n);
    while(getchar()!='\n'){}
    s1 = (stringa)malloc(n * sizeof (char));
    printf("inserisci la stringa: ");
    fgets(s1, n , stdin);    


    len= strlen(s1);
    printf("di quanto vuoi che sia il codice di cifratura? " );
    scanf("%d", &codc);
    clear_buffer();
    for(int i=0; i<len-1; i++){
        s1[i]+=codc;
    }
    printf("la password cifrata è: %s ", s1);
    
    printf("vuoi decifrare la password? inserisci S se si o N se no ");
    scanf("%c", &scelta);

    if(scelta == 'S'){
        for(int i=0; i<len-1; i++){
            s1[i]-=codc;
        }
    }

   printf("la password decifrata è: %s ", s1);
    
    
}