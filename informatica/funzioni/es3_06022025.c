/*dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>

void circonferenza(float *_raggio, float *_circ);
void area(float *_raggio, float *_A);


int main(){
    float raggio=0;
    float circ=0;
    float A=0;
    printf("inserisci il valore del raggio: ");
    scanf("%f", &raggio);

    circonferenza(&raggio, &circ);
    area(&raggio,&A);

    printf("la circonferenza del cerchio é: %f",circ);
    printf("l'area del cerchio é: %f",A);
}
void circonferenza(float *_raggio, float *_circ){
    *_circ=*_raggio*2*3.14;
}
void area(float *_raggio, float *_A){
    *_A=*_raggio**_raggio*3.14;
}