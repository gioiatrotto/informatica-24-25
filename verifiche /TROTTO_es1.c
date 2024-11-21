/* GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI 
    E SAPENDO  CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO 
    COMUNICARE LA DATA DI CONSEGNA
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int dataa=0;
    int datam=0;
    int datag=0;
    int datac=0;
    srand(time(NULL));
    dataa=rand()%2025;
    datam=rand()%12;
    datag=rand()%31;
    
    printf("la data generata è: %d/%d/%d", datag,datam,dataa);

    if (dataa%400==0)



}