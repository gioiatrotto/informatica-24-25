/* Calcola il resto ricevuto dal benzinaio: 
    dopo aver inserito il numero di litri di carburante introdotto nel motorino e il costo al litro della benzina,
     il programma deve visualizzare l’importo da pagare.
      L’utente digita l’importo di una banconota di valore superiore a tale importo
       e il programma visualizza il resto della banconota che questi deve ricevere.*/
#include <stdio.h>
int main(){

    float litridibenzina,costodellabenzinaallitro,importodapagare,banconotainserita,restodellabanconota;
    printf("inserisci litri di benzina da fare");
    scanf("%f",litridibenzina);
    costodellabenzinaallitro=1,70;
    importodapagare=costodellabenzinaallitro*litridibenzina;
    printf("l'importo da pagare è: %f",importodapagare);
    printf("inserisci banconota per pagare");
    scanf("%f",banconotainserita);
    restodellabanconota=banconotainserita-importodapagare;
    printf("il resto è di: %f",restodellabanconota);

}
