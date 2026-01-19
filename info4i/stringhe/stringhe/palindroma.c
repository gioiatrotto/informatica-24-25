/*verificare se una stringa è palindroma
es: otto, anna*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

int lunghezza(string s){
    int i=0;
    while(s[i]!='\0'){
         i++;
    }              
     return i-1;
}
int Palindroma(string s, int dim){
    int i,j;
    int flag=0;
    for( i=0,j=dim-1; i<dim/2; i++,j--){
        if(s[i]!=s[j]){
            flag=1;
        }
    }
    return flag;
}
int main(){
    int dim=0, palindroma=0;
    string s=(string)malloc(50*sizeof(char));
    if(s==NULL)
        return 1;
    printf("inserisci una stringa: ");
    fgets(s, 50, stdin);
    printf("\n%s", s);
    dim= lunghezza(s);
    printf("\n%d", dim);
    palindroma = Palindroma(s,dim);
    if(palindroma==1)
        printf("\nla frase non è palindroma");
    else 
        printf("\nla frase non é palindroma");
}