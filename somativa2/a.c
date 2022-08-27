#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    char matricula[10];
    double mediaAtividades;
    double mediaProvas;
    struct celula *prox;
} celula;

void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double media){
    int i = 0;
    le = le->prox;
    do{
        if(le -> mediaAtividades <= media){
            l1 -> prox = le;
            l1 = l1 -> prox;
        }
        else{
            l2 -> prox = le;
            l2 = l2 -> prox;
        }
        le = le->prox;

        if(le == NULL){
            i = 1;
        }
        
    }while(i != 1);
    
        l1 ->prox = NULL;
        l2 ->prox = NULL;
}