#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Brano {
    char titolo[100];
    char artista[100];
    int durata;
    int id;
    struct Brano *next;
} Brano;

typedef struct ListaBrani {
    Brano* testa;
    int lunghezza;
} ListaBrani;

int next_id = 0;

/* ===== FUNZIONI BASE ===== */

void stampa_brano(Brano *b) {
    if (b != NULL) {
        printf("[%d] %s - %s (%d sec)\n", b->id, b->titolo, b->artista, b->durata);
    }
}

void leggi_brano(Brano *b) {
    printf("Inserisci titolo: ");
    fgets(b->titolo, 100, stdin);

    printf("Inserisci artista: ");
    fgets(b->artista, 100, stdin);

    printf("Inserisci durata (sec): ");
    scanf("%d", &b->durata);
    getchar();

    b->id = ++next_id;
}

ListaBrani* crea_lista_brani() {
    ListaBrani* l = malloc(sizeof(ListaBrani));
    l->testa = NULL;
    l->lunghezza = 0;
    return l;
}

void stampa_lista_brani(ListaBrani *l) {
    Brano* corr = l->testa;

    if (corr == NULL) {
        printf("Lista vuota.\n");
        return;
    }

    while (corr != NULL) {
        stampa_brano(corr);
        corr = corr->next;
    }
}

void aggiungi_brano(ListaBrani *l) {
    Brano* nuovo = malloc(sizeof(Brano));
    leggi_brano(nuovo);
    nuovo->next = l->testa;
    l->testa = nuovo;
    l->lunghezza++;
}

void cerca_per_artista(ListaBrani *l, char *artista) {
    Brano* corr = l->testa;
    int trovate = 0;

    while (corr != NULL) {
        if (strcmp(corr->artista, artista) == 0) {
            stampa_brano(corr);
            trovate++;
        }
        corr = corr->next;
    }

    if (!trovate) {
        printf("Nessuna canzone trovata per l'artista: %s\n", artista);
    }
}

void libera_lista_brani(ListaBrani* l) {
    Brano* corr = l->testa;

    while (corr != NULL) {
        Brano* temp = corr;
        corr = corr->next;
        free(temp);
    }

    free(l);
}

/* ===== PLAYLIST (LISTA CIRCOLARE) ===== */

void aggiungi_a_playlist(ListaBrani* catalogo, ListaBrani* playlist) {
    int id;
    printf("Inserisci l'id della canzone: ");
    scanf("%d", &id);
    getchar();

    Brano* corr = catalogo->testa;

    while (corr != NULL) {
        if (corr->id == id) {
            Brano* nuovo = malloc(sizeof(Brano));
            strcpy(nuovo->titolo, corr->titolo);
            strcpy(nuovo->artista, corr->artista);
            nuovo->durata = corr->durata;
            nuovo->id = corr->id;

            if (playlist->testa == NULL) {
                playlist->testa = nuovo;
                nuovo->next = nuovo;
            } else {
                Brano* last = playlist->testa;
                while (last->next != playlist->testa)
                    last = last->next;

                last->next = nuovo;
                nuovo->next = playlist->testa;
            }

            playlist->lunghezza++;
            printf("Canzone aggiunta alla playlist.\n");
            return;
        }
        corr = corr->next;
    }

    printf("Canzone non trovata.\n");
}

void stampa_playlist(ListaBrani* playlist) {
    if (playlist->testa == NULL) {
        printf("Playlist vuota.\n");
        return;
    }

    Brano* corr = playlist->testa;
    do {
        stampa_brano(corr);
        corr = corr->next;
    } while (corr != playlist->testa);

    printf("Lunghezza playlist: %d\n", playlist->lunghezza);
}

void rimuovi_da_playlist(ListaBrani* playlist) {
    if (playlist->testa == NULL) return;

    Brano* temp = playlist->testa;

    if (temp->next == temp) {
        playlist->testa = NULL;
    } else {
        Brano* last = playlist->testa;
        while (last->next != playlist->testa)
            last = last->next;

        playlist->testa = temp->next;
        last->next = playlist->testa;
    }

    free(temp);
    playlist->lunghezza--;
}

/* ===== MAIN ===== */

int main() {
    ListaBrani* catalogo = crea_lista_brani();
    ListaBrani* playlist = crea_lista_brani();

    int scelta;
    char artista[50];

    do {
        printf("\nSPOTIFY\n");
        printf("1. Inserisci nuova canzone\n");
        printf("2. Stampa catalogo\n");
        printf("3. Cerca per artista\n");
        printf("4. Aggiungi alla playlist\n");
        printf("5. Stampa playlist\n");
        printf("6. Rimuovi dalla playlist\n");
        printf("0. Esci\n");
        printf("Scelta: ");

        scanf("%d", &scelta);
        getchar();

        switch (scelta) {
            case 1:
                aggiungi_brano(catalogo);
                break;
            case 2:
                stampa_lista_brani(catalogo);
                break;
            case 3:
                printf("Inserisci artista: ");
                fgets(artista, 50, stdin);
                cerca_per_artista(catalogo, artista);
                break;
            case 4:
                aggiungi_a_playlist(catalogo, playlist);
                break;
            case 5:
                stampa_playlist(playlist);
                break;
            case 6:
                rimuovi_da_playlist(playlist);
                break;
            case 0:
                printf("Uscita\n");
                break;
            default:
                printf("Scelta non valida\n");
        }
    } while (scelta != 0);

    libera_lista_brani(catalogo);
    libera_lista_brani(playlist);

    return 0;
}
