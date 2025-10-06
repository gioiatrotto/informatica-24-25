/* Scrivi un programma in C che gestisca un insieme di numeri interi
usano un array dinamico.
il programma deve permettere, tramite menü:
1. Aggiungere un numero (espandendo l'array con realloc)
2. Visualizzare tutti inumeri
3. Cercare un numero specifico
4. Ordinare i numeri in ordine crescente
5. Eliminare un numero scelto
6. Uscire
*/
#include <stdio.h>
#include <stdlib.h>
  int* creaVett(int _n){
        int *_vettore=(int*)malloc(_n *sizeof(int));
        if(_vettore==NULL){
            printf("Errore di allocazione \n");
        return NULL;
    }
    return _vettore;
    }
    int* inserisciValori(int *_vettore, int _n){
        for(int i=0; i<_n; i++){
            printf("inserisci l'elemento: ");
            scanf("%d", &_vettore[i]);
        }
        return _vettore;
    }

    void stampaVett(int *_vettore, int _n){
        printf("hai inseito i seguenti elementi: ");
        for(int i=0; i<_n; i++){
            printf("%d\t", _vettore[i]);
        }
    }
    int* aumentaDim(int _n, int *_vettore){
        int nuovaDim=0;
        int *_aumenta=NULL;
        do{
            printf("inserisci una nuova dimensione: ");
            scanf("%d", &nuovaDim);
            _aumenta=(int*)realloc(_vettore, nuovaDim *sizeof(int));
            for(int i=_n; i<nuovaDim; i++){
                printf("inserisci nuovi valori: ");
                scanf("%d", &_aumenta[i]);
            }

        }while(nuovaDim!=_n);
        return _aumenta;
    }

int main(){
      int *vettore=NULL; //puntatore al vettore
    int n;
    int scelta=0;
 
    do{
        printf("inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }while(n<0);

    vettore= creaVett(n);
    vettore = inserisciValori(vettore,n);
    printf("vuoi aumentare la dimensione? se vuoi aumentarla insierisci 1 altrimenti 0");
    scanf("%d", &scelta);
    if(scelta==1){
         vettore= aumentaDim(n,vettore);
    }
    stampaVett(vettore,n);
   
}