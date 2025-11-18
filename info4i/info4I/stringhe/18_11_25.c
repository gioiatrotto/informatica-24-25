/*DATA UNA STRINGA SCRIVERLA ALL'INVERSO*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* stringa;
void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}

void compatta(stringa buffer, int len){

    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1] = '\0';
        len--;
    }
}



int main(){
    stringa s1;
    stringa s2;
    int n;
    int len;
    int cnt=0;

    printf("di quanto vuoi che sia lunga la scritta? ");
    scanf("%d", &n);
    clear_buffer();
    s1=(stringa)malloc(n* sizeof(char));
    s2=(stringa)malloc(n* sizeof(char));
  
    printf("inserisci la frase: ");
    fgets(s1, n, stdin);
    
    
    len=strlen(s1);
    compatta(s1, len);

    for(int i=len-1; i>=0 ; i--){
        s2[cnt]=s1[i];
        cnt++;
    
    }
    printf("la frase al contrario è: %s", s2);
    

}