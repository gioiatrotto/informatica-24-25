/* dati n numeri sommarli 4 a 
    termina non appena si introduce uno 0
*/
#include <stdio.h>
int main(){

    int num1,somma=0,cnt=0;

    do{
        printf("\ninserisci un valore: ");
        scanf("%d",&num1);
        somma+=num1;
        cnt++;
        if(cnt%4==0){
            printf("\nla somma é: %d", somma);
        }
}while(num1!=0);

}