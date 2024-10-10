/* dato un nummero a più cifre
   stampare le cifre che compongono il numero */
#include <stdio.h>
int main(){
    int num=0;
    int q,R;

printf("inserisci un numero: ");
scanf("%d",&num);

    R=num%10;
    q=num/10;
    num=q;
    printf("\n unità: %d", q);
    R=num%10;
    q=num/10;
    num=q;
    printf("\n decine: %d",q);
    R=num%10;
    q=num/10;
    num=q;
    printf("\n migliaia: %d",q);
}