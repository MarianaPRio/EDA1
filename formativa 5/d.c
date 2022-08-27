#include <stdio.h> 
#include <stdlib.h> 

typedef struct celula { 
  int dado; 
  struct celula *prox; 
} celula; 
 
int empilha (celula *p, int x){ 
    
    celula *new = malloc(sizeof(celula)); 
    
    if(p == NULL){  
        return 0; 
    } 
    
    new->dado = x; 
    new->prox = p->prox; 
    p->prox = new; 
    
    return 1; 
}