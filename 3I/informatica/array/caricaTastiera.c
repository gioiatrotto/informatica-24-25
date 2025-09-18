/*costruire un vettore di N elementi letti da tastiera*/
#include <stdio.h>
#define MAX 5
int main(){
    int v[MAX];
    
    for (int i=0; i<MAX; i++){
        printf("\ninserisci un valore: ");
        scanf("%d", &v[i]);
        printf("%d\n", v[i]);
    }
}