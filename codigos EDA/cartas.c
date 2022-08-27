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

void insere(celula *elem, int x){
    celula *novo = malloc(sizeof(celula));
    
    if(novo==NULL) return;
    
    novo->dado = x;
    
    novo->prox=elem->prox;
    
    elem->prox=novo;
    
    return;
}

int remove_depois (celula *p){
    
    celula *lixo = p->prox;
    
    if(lixo == NULL){
        return 0;
    }

    p->prox = lixo->prox;

    int y = lixo->dado;

    free(lixo);

    return y;
}


int main(){
    int n, lixo, mover_base;

    scanf("%d", &n);


    celula *le = malloc(sizeof(celula));
    le->prox = NULL;
    celula *aux_null = le;
    celula *elem = le;

    for(int i=1; i <= n ;i++){
        insere(elem, i);

        elem = elem->prox;

    }

    celula *aux = le->prox;

    printf("cartas descartadas: ");

    int contador = 0;
    
    while(le->prox->prox != NULL){
        
        lixo = remove_depois(le);

        if(contador == 0){
            printf("%d", lixo);
        }else{
            printf(", %d", lixo);
        }
        

        while(aux_null->prox != NULL){
            aux_null = aux_null->prox;
        }

        if(le->prox->prox != NULL)
        mover_base = remove_depois(le);

        insere(aux_null,mover_base);

        contador = contador + 1;

    }

    printf("\ncarta restante: %d\n", le->prox->dado);
}