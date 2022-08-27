#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x){

    celula *elemento = le->prox;

    while(elemento != NULL){
        
        if(elemento->dado == x){

            return elemento;

        }
        
        elemento = elemento->prox;
    }
    return NULL;
}

celula *busca_rec (celula *le, int x){

    celula *elemento = le->prox;

    if(elemento == NULL || elemento->dado ==x){
        return elemento;

    }else{
        return busca_rec(elemento, x);
    }

}
