/*DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI;*/
#include <stdio.h>
#define DIM 6
void Richiedivalori(int vett[],int dim);
void PariDispari(int vett[], int dim);
int main(){
    int vettore[DIM];
    Richiedivalori(vettore,DIM);
    PariDispari(vettore,DIM);
}

void Richiedivalori(int vett[],int dim){
    printf("inserisi un valore: ");
    for(int i=0; i<dim; i++){
        scanf("%d", &vett[i]);
    }
}
void PariDispari(int vett[], int dim){
    int cntp=0;
    int cntd=0;
    for(int i=0; i<dim; i++){
        if(vett[i]%2==0)
            cntp++;
        else
        cntd++;
    }
    printf("i numeri pari sono: %d", cntp);
    printf("i numeri dispari sono: %d", cntd);
}