/*Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.*/
#include <stdio.h>
#include <time.h>
#define N 4

void caricaMat(int(*_mat)[]){
    printf("carichiamo la matrice: ");
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            _mat[i][j]=rand()%30+1;

}
 void stampaMat(int(*_mat)[N]){
      for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            printf("%d\t", _mat[i][j]);
                printf("\n");
 }

 void scambioDiag(int(*_mat)[N]){
    int temp=0;
    for(int i=0; i<N; i++){
        temp=_mat[i][i];
        _mat[i][i]=_mat[i][N-1-i];
        _mat[i][N-1-i]=temp;
    }
 }

int main(){

    int matrice[N][N]={0};
    srand(time(NULL));
    
    //caricamento matrice
    caricaMat(matrice);
    //stampa matrice
    stampaMat(matrice);
    //scambio diagonali
    scambioDiag(matrici);
     //stampa matrice
    stampaMat(matrice);
}