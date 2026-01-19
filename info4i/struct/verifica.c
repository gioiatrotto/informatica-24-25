/* Registare le informazioni di alcuni libri con
titolo, autore, anno e prezzo.
Determinare il libro più costoso e il più vecchio
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LIBRO{
    char titolo [40];
    char autore [20];
    int anno;
    float prezzo;
}LIBRO;

typedef char* Stringa;
void Compatta (Stringa buffer, int lunghezza) {
    if(lunghezza>0 && buffer[lunghezza-1]=='\n'){
        buffer[lunghezza-1] = '\0';
        lunghezza--;
    }
}

int main(){
    LIBRO *libri;
    int i,lun;
    char libro[50];
    int n=3, datato, i_datato;
    //allochiamo i primi 3 elementi
    libri = (LIBRO*)malloc(n * sizeof (LIBRO));

    if(libri==NULL){
        printf("errore di allocazione");
        return 1;
    }

    //inseriamo i dati 
    strcpy(libri[0].titolo, "L'amore mio non muore");
    strcpy(libri[0].autore, "Roberto Saviano");
    libri[0].anno= 2025;
    libri[0].prezzo = 19.50;

    strcpy(libri[1].titolo, "Maledetti di Dio");
    strcpy(libri[1].autore, "Sven Assel");
    libri[1].anno= 1953;
    libri[1].prezzo = 13;

    strcpy(libri[2].titolo, "il diritto di contare");
    strcpy(libri[2].autore, "Margot Lee Shetterly");
    libri[2].anno= 2017;
    libri[2].prezzo = 18.50;
    //visualizzazione der dati
    printf("===Lista Libri===\n");
    for( i = 0; i<n; i++){
    printf("Libro %d:\n", i + 1 );
    printf("Titolo: %s:\n",libri[i].titolo);
    printf("Autore: %s:\n",libri[i].autore);
    printf("Anno: %s:\n",libri[i].anno);
    printf("Prezzo: %s:\n",libri[i].prezzo);
    }
    n+=1;

    libri=( LIBRO*) realloc(libri, n*sizeof(struct LIBRO));
    if (libri==NULL) {
        printf("errore di allocazione");
        return 1;
}
    strcpy(libri [3].titolo, "Orgoglio e pregiudizio");
    strcpy(libri [3].autore, "Jane Austen");
    libri[3].anno = 1813;
    libri[3].prezzo = 9;
    //visualizzazione dei dati
    printf("===Lista Libri===\n");
    for(i=0; i<n; i++){
    printf("Libro %d:\n", i+1);
    printf(" Titolo: %s\n", libri [i].titolo);
    printf(" Autore: %s\n", libri [i].autore);
    printf(" Anno: %d\n", libri[i].anno);
    printf(" Prezzo: %.2f:\n\n", libri[i].prezzo);
    }

    //calcoliamo il libro piu datato 
    datato = libri[0].anno;
    i_datato=0;
    for(i=1; i<n; i++){
        if(libri[i].anno < datato){
            datato = libri[i].anno;
            i_datato=i;
        }
    }
    printf("Il libro piu datato è : %s\n", libri[i_datato].titolo);
    //eliminiamo un libro
    printf("inserisci il titolo del libro da eliminare: ");
    fgets(libro, 50, stdin);
    lun = strlen(libro);
    compatta(libro,lun);
    
}