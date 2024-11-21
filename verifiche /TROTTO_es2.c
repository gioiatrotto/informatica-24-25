/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra 1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/
#include <stdio.h>
int main(){

    int N=0, C=0, multiplo=0;
    printf("inserisci un valore N minore di 20: ");
    scanf("%d", &N);
    printf("inserisci un valore C compreso tra 1 e 9: ");
    scanf("%d", &C);

    if(C>=1 && C<=9){
        if(N<20 && N!=0 && N>0){
          multiplo=C+C;
          printf("\n%d", multiplo);
          if(multiplo<N){
            multiplo=multiplo+C;
            printf("\n%d", multiplo);
                 if(multiplo<N){
                    multiplo=multiplo+C;
                    printf("\n%d", multiplo);
                     if(multiplo<N){
                        multiplo=multiplo+C;
                        printf("\n%d", multiplo);
                         if(multiplo<N){
                            multiplo=multiplo+C;
                            printf("\n%d", multiplo);
                             if(multiplo<N){
                                multiplo=multiplo+C;
                                printf("\n%d", multiplo);
                                  if(multiplo<N){
                                    multiplo=multiplo+C;
                                    printf("\n%d", multiplo);
                                      if(multiplo<N){
                                        multiplo=multiplo+C;
                                        printf("\n%d", multiplo);
                                    }      
                                }      
                            }      
                        }      
                    }      
                }      
            }            
        }
    } else
        printf("il valori inseriti non sono corretti");
        
}