/*stringhe con malloc*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char *buffer; //puntatore alla stringa buffer
  int len;

  printf("inserisci la lunghezza della stringa: ");
  scanf("%d", &len);

  //alloco lo spazio in memoria della stringa
  buffer = (char *)malloc((len + 1) *sizeof(char));
  if(buffer == NULL) return 1;

  printf("inserisci una stringa: ");
  if(fgets(buffer, (len+1), stdin)!=NULL)
        printf("hai inserito: %s", buffer);

  free(buffer);
}
