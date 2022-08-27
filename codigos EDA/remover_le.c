#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int remove_depois (celula *p){
    
    celula *lixo = p->prox;
    
    if(lixo == NULL){
        return 0;
    }

    p->prox = lixo->prox;

    free(lixo);

    return 1;
}

void remove_elemento (celula *le, int x){
    
    for(celula *elemento = le; elemento->prox != NULL; elemento = elemento->prox){
        
        if(elemento->prox->dado == x){
            remove_depois (elemento);
            return;
        }
   
    }
}

void remove_todos_elementos (celula *le, int x){
    for (celula *elemento = le; elemento->prox != NULL;){
        
        if(elemento->prox->dado == x){
            remove_depois(elemento);
        } else {
            elemento=elemento->prox;
        }
   
    }
}