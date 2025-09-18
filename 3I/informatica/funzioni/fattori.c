/*dato un valore stampare i suoi fattori
es: 28=2*2*7   2,2,7 */
#include <stdio.h>
void fattori(int *_n);
int main(){
    int n=0;
    do{
    printf("inserisci un valore: ");
    scanf("%d", &n); 
    }while(n<=0);
    fattori(&n);

}
void fattori(int *_n){
    int i=2;
    while(*_n!=1){
        if(*_n%i==0){
            *_n/=i;
            printf("%d*",i);
        }
        else
            i++;
    }
}