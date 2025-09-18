/*carica la matrice a spirale*/

#include <stdio.h>
#define N 4

    void riempiMat(int mat[][N]){
        int num=1, i;
        int top=0;
        int bottom=N-1;
        int left=0;
        int right=N-1;

        while(num<=N*N){
            //sinistra vado a destra
            for(i=left; i<=right; i++)
                mat[top][i]=num++;
            top++;
            //alto verso il basso
            for(i=top; i<=bottom; i++)
                mat[i][right]=num++;
            right--;
            //destra verso sinistra
            for(i=right; i>=left; i--)
                mat[bottom][i]=num++;
            bottom--;
            //basso verso l'alto
            for(i=bottom; i>=top; i--)
                mat[i][left]=num++;
            left++;
        }
    }
    void stampaMat(int _mat[][N]){
        for(int i=0; i<N; i++){
            for(int j=0; j<N;j++)
            printf("%d\t",_mat[i][j]);
        printf("\n");
        }
    }
int main(){
    int mat[N][N];

    riempiMat(mat);
    printf("la matrice a spirale è: \n");
    stampaMat(mat);
}