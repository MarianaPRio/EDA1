#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime (celula *le){
    
    celula *elemento = le->prox;
    
    while(elemento != NULL){
        printf("%d -> ", elemento->dado);
        elemento = elemento->prox;
    }
    
    printf("NULL\n");

}

void imprime_rec (celula *le){
    
    celula *elemento = le->prox;
    
    if (elemento != NULL){
        printf("%d -> ", elemento->dado);
        imprime_rec(elemento);
    } else {printf("NULL\n");}
}
