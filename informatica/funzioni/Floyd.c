/*sviluppare un programma in c che sviluppi il triangolo di floyd
n=5
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15*/
#include <stdio.h>
void TriangoloFloyd(int *_n);
int main(){
    int n;
    do{
        printf("inserisci un valore: ");
        scanf("%d", &n);
    }while(n<=0);

    TriangoloFloyd(&n);
}
void TriangoloFloyd(int *_n){
    int cnt=0;
    for(int i=1; i<=*_n; i++){
        for(int j=1; j<=i; j++){
            cnt++;
            printf("%d\t", cnt);
        }
        printf("\n");
    }
}
