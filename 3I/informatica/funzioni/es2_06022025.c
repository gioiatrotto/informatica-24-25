/*calcolare un fattoriale di un numero*/
#include <stdio.h>
void fattoriale(int *_n, long *_fatt);
int main(){

    int n;
    long fatt=0;

    do{
    printf("inserisci il valore di cui vuoi il fattoriale: ");
    scanf("%d", &n);
   }while(n<=0);

    fattoriale(&n,&fatt);
    printf(" il calcolo del fattoriale di %d è: %ld", n,fatt);
}
void fattoriale(int *_n, long *_fatt){
     
    for(int i=1; i<=*_n; i++)
    *_fatt*=i;
  
}


