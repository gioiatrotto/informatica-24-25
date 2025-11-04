/*provare la libreria string.h per le seguenti operazioni:
1. calcolo lunghezza stringa 
2. controllare se due stringhe sono uguali
3. copiare una stringa 
4. cercare un carattere e comunicare la frequenza
5. concatenare due stringhe
6. ricerca di una stringa nell'altra*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* stringa;

void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}


int main(){
    stringa s1;
    stringa s2;
    stringa s3;
    int n1,n2,scelta,c,decisione;
    int cnt1=0, cnt2=0;

    printf("quanto vuoi che sia lunga la prima stringa:");
    scanf("%d", &n1);
    s1 = (stringa)malloc(n1 * sizeof(char));
    if(s1==NULL)
        return 1;

    printf("quanto vuoi che sia lunga la seconda stringa:");
    scanf("%d", &n2);
    clear_buffer();
    s2 = (stringa)malloc(n2 * sizeof(char));
    if(s2==NULL)
        return 1;

    printf("\ninserisci la prima stringa: ");
    fgets(s1, n1, stdin);
    printf("\ninserisci la seconda stringa: ");
    fgets(s2, n2, stdin);


    while(scelta!=7){
        printf("\n1. calcolo lunghezza stringa");
        printf("\n2. controllare se due stringhe sono uguali ");
        printf("\n3. copiare una stringa");
        printf("\n4. cercare un carattere e comunicare la frequenza");
        printf("\n5. concatenare due stringhe");
        printf("\n6. ricerca di una stringa nell'altra");
        printf("\n7. uscire dal programma\n");

        scanf("%d", &scelta);
    
        switch(scelta){
            case 1:
                int len, len2;
                len=strlen(s1);
                len2=strlen(s2);
                printf("la stringa 1 é lunga: %d", len);
                printf("\nla stringa 2 é lunga: %d", len2);
            break;

            case 2:
                strcmp(s1,s2);
                if(strcmp==0)
                    printf("\n stringhe sono uguali !!");
                else 
                    printf("\nle stringhe non sono uguali");
                
            break;
            
            case 3:
            printf("\nquale stringa vuoi copiare? ");
            printf("\ndigita 1 se vuoi copiare la prima");
            printf("\ndigita 2 se vuoi copiare la seconda");
            scanf("%d", &decisione);
                if(decisione==1)
                    strcpy(s3, s1);
                else if(decisione==2)
                    strcpy(s3, s2);

            printf("\n%s", s3);
            decisione=0;

            break;

            case 4:
                printf("\nche carattere vuoi cercare? ");
                scanf("%d", &c);
                printf("\nin quale stringa? ");
                printf("\ndigita 1 se vuoi cercare il carattere nella prima");
                printf("\ndigita 2 se vuoi cercare il carattere nella seconda");
                scanf("%d", &decisione);

                if(decisione==1){
                    stringa tmp = s1;
                    while(tmp!=NULL){
                        tmp=strchr(s1,c);
                        cnt1++;
                    }
                    printf("\nil carattere compare %d volte", cnt1);
                }
                   
                if(decisione==2){
                    stringa tmp1 = s2;
                    while(tmp1!=NULL){
                        tmp1=strchr(s2,c);
                        cnt2++;
                    }
                    printf("\nil carattere compare %d volte", cnt2);
                }
                    

            break;
        }
       

        
    }
 
}