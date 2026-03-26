/*esempio di apertura file in append */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char frase[200];
    char scelta;
    //apriamo il file in append
    fp= fopen("es6.txt", "a");
    if( fp== NULL){
        printf("\nErrore!");
        return 1;
    }
    do{
        printf("\ninserisci una frase: ");
        fgets(frase, sizeof(frase), stdin);
        //scriviamo la farse sul file
        fputs(" ",fp);
        fputs(frase,fp);

        printf("\nvuoi inserire un'altra frase?(s/n) ");
        scanf("%c", &scelta);
        getchar();


    }while(scelta=='s'|| scelta=='S');
    fclose(fp);
    printf("\nle frasi sono state salvate sul file ");
    return 0;
}