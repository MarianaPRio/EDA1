#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula{
    char palavra[110];
    struct celula *prox;
} celula;

celula *str(){
  celula *le;

  le = malloc (sizeof(celula));
  le -> prox = NULL; 
  
  return le;
}

void desfaz(celula *le){
    celula *apaga = le -> prox;
    le -> prox = apaga -> prox;
    free(apaga);
}

void faz(celula *le){
    celula *lista = malloc(sizeof(celula));
    
    scanf(" %[^\n]", lista -> palavra);
    
    lista -> prox = le -> prox;
    le -> prox = lista;
}

int main(){
    celula *le;
    le = str();
    char listaNovo[110];

    scanf("%s", listaNovo);
    int i = 0;

    do{
        if(listaNovo == EOF){
            break;
        }
        if(listaNovo[0] == 105){
            faz(le);
        }
        else if(listaNovo[0] == 100){
            if(le -> prox == NULL){
                printf("NULL\n");
            }
            else{
                celula *elem = le->prox;
                printf("%s\n", elem -> palavra);
                desfaz(le);
            }
        }
        
    }while(scanf("%s", listaNovo) != EOF);
    
    return 0;
}