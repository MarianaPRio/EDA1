#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desempilha (celula *p, int *y){
    if(p != NULL){  
        if(p->prox == NULL){
            return 0;
        
        }else{
            *y = p->prox->dado;
            
            celula *lixo = p->prox;

            p->prox = p->prox->prox ;

            free(lixo);
            
            return 1;
        }
    }
}