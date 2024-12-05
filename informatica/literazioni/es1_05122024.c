/* calcolare il quoziente fra due numeri appliccando il metodo
    delle sottrazioni successive
*/
#include <stdio.h>
int main(){
    int num1,num2,quoz,num3,cnt=0;

    do{
    printf("inserisci il primo valore: ");
    scanf("%d", &num1);
    printf("inserisci il secondo valore: ");
    scanf("%d", &num2);
    }while(num1<=0 || num2<=0);

    
    if(num1<num2)
        num3=num2;
        num2=num1;
        num1=num3;
    
    quoz=num1;
    while(quoz>num2){
        quoz-=num2;
        cnt++;
    }

}