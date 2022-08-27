#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x){
    
    celula *elem;

    for(elem = le->prox; elem != NULL; elem = elem->prox){
        if(elem->dado == x){
            return(elem);
        }
    }
    return(elem);
    
}

celula *busca_rec (celula *le, int x){
    
    if(le->prox != NULL){
        if(le->dado == x){
            return (le);
        }
        else{
            return busca_rec(le->prox, x);
        }
    }

    if(le->dado == x){
        return (le);
    }
    
    return (le->prox);

}