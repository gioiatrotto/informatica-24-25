/* INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA  200, 
    CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI. 
*/
#include <stdio.h>
int main(){

    int n1=0,n2=0,n3=0,n4=0;
    int media, valins;
    int somma=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("inserisci il secondo numero: ");
    scanf("%d",&n2);

    if(n1+n2<200){
        printf("la somma non supera i 200,aggiungi un altro numero: ");
        scanf("%d", &n3);
       
        }
        else if(n1+n2+n3<200){
            printf("la somma non supera i 200,aggiungi un altro numero: ");
            scanf("%d", &n4);
            }

            else if(n1+n2+n3+n4<200){
                printf("la somma non supera i 200, hai finito i tentativi!");
            } 
            
    else 
    printf("la somma ha superato i 200!");
    
   

}
    
   

  


   

