/* scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 
    e che indica quanti valori della sequenza di fibonacci mostrare. 
    Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.*/

    #include <stdio.h>
    int main(){

        int num=0;
        printf("inserisci un numero: ");
        scanf("%d", &num);

        while(num<3){
            printf("\n il numero inserito non è valido");
            printf("\n inserisci un altro numero: ");
            scanf("%d", &num);
        }
        if(num>3)
            printf("il numero inserito è maggiore di 3");
        
        

    }