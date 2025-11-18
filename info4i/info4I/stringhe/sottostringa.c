#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* Stringa;
int sottostringa(Stringa s1, Stringa s2){
    int dim1 = strlen(s1), dim2= strlen(s2), flag=0;
    for(int i = 0; i <=dim1-dim2+1; i++){
        if(s1[i] == s2[0]){
            flag = 1;
            for(int j = 1; j < dim2; j++){
                if(s1[i+j] != s2[j]){
                flag = 0;
                break;
                }
            }
            if(flag == 1){
                return i;
            }
        }
    }
    return -1; 
}
int main(){
    char s1[100];
    char s2[100];
    int posizione_sottostringa = 0;
    printf("inserisci una srtringa: ");
    fgets(s1, 100, stdin);
    printf("inserisci una srtringa: ");
    fgets(s2, 100, stdin );
    posizione_sottostringa = sottostringa(s1, s2);
    if(posizione_sottostringa != -1){
        printf("sottostringa trovata alla posizione %d\n", posizione_sottostringa);
    } else {
        printf("sottostringa non trovata\n");
    }
}