/* scrivi un programma che, dati in  input n numeri interi
e un numero x determini:
- quanti numeri sono maggiori di x
-quanti numeri sono minori di x
-quanti numeri sono uguali a x*/
#include <stdio.h>
int main(){
    int n=0,x=0, cnt=0;
    printf("inserisci il valore che vuoi controllare: ");
    scanf("%d", &x);
    for(int i=0; i<10; i++){
        printf("inserisci un numero: ");
        scanf("%d", &n);
        if(n>x){
            cnt++;
        }
    }
    printf("i numeri maggiori di %d sono: %d", x,cnt);
}