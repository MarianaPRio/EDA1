#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    char matricula[10];
    double mediaAtividades;
    double mediaProvas;
    struct celula *prox;
} celula;

void imprime (celula *le){
    
    celula *elemento = le->prox;
    
    for(celula *elemento; elemento != NULL; elemento=elemento->prox){
        printf("%d -> ", elemento->mediaAtividades);
        elemento = elemento->prox;
    }
    
    printf("NULL\n");

}

void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double media){ 

    celula *elem = le->prox;
    
   for(elem; elem != NULL; elem=elem->prox){

        
        if(elem->mediaAtividades <=media){
            l1->prox = elem;

            l1 = l1->prox;

        } else{
            l2->prox = elem;

            l2 = l2->prox;

        }
    }

    l1 -> prox = NULL;
	l2 -> prox = NULL;

}