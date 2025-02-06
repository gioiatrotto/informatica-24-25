/*calcolare un fattoriale di un numero*/
#include <stdio.h>
long fattoriale(int _n);
int main(){

    int n;
    long fatt=0;
    do{
    printf("inserisci il valore di cui vuoi il fattoriale: ");
    scanf("%d", &n);
   }while(n<=0);
    fatt=fattoriale(n);
    printf(" il calcolo del fattoriale di %d è: %ld", n,fatt);
}
long fattoriale(int _n){
    long fatt=1; 
    for(int i=1; i<=_n; i++)
    fatt*=i;
    return fatt;
}


