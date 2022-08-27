#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x) {

    celula *gancho = le->prox;

    while(gancho != NULL) {
        if(gancho->dado == x) {
            return (gancho);
        }
        else {
            gancho = gancho->prox;
        }
    }
    return (gancho);
}

celula *busca_rec (celula *le, int x) {
    
    if(le->prox != NULL) {
        if(le->dado == x) {
            return (le);
        }
        else {
            return busca_rec(le->prox, x);
        }
    }
    if(le->dado == x) {
        return (le);
    }
    return (le->prox);
}