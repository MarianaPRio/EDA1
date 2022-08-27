#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio (celula *le, int x){
     
    celula *elemento = le;
    celula *novo = malloc(sizeof(celula));

    novo->dado = x;
    novo->prox = elemento->prox;
    elemento->prox = novo;

}

void insere_antes (celula *le, int x, int y){
    
    celula *elemento = le;
    celula *novo = malloc(sizeof(celula));
    celula *aux = le->prox;

    novo->dado = x;

    while (aux != NULL && aux->dado != y){

        elemento =aux;
        aux = aux->prox;

    }

    novo->prox = aux;
    elemento->prox = novo;

}


