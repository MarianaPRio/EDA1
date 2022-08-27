#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
    char dado;
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

int empilha (celula *p, char x){

    celula *elemento = p;
    celula *novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;

    novo->dado = x;
    novo->prox = elemento->prox;
    elemento->prox = novo;

    return 1;
}

int desempilha (celula *p, char *y){
    if(p != NULL){  
        if(p->prox == NULL){
            *y = 'a';
            return 0;
        
        }else{
            
            celula *lixo = p->prox;

            p->prox = p->prox->prox ;

            free(lixo);
            
            return 1;
        }
    }
}

int main(){
    
    char expressao[501];
    celula *le = malloc(sizeof(celula));
    le->prox = NULL;

    int contador = 0;


    scanf("%s", expressao);

    for(int i = 0; i<= strlen(expressao) ;i ++){
        
        if(expressao[i] == '('  || expressao[i] == '[' || expressao[i] == '{'){ 
            empilha(le, expressao[i]);
            contador ++;

        }
        else if (expressao[i] == ')'){
            char *y = malloc(sizeof(char));
            
            desempilha(le, y);
            
            contador --;
            
            if(*y != '('){
                printf("nao\n");
                i = strlen(expressao);
                return 0;
            }
        }

        else if (expressao[i] == ']'){
            char *y = malloc(sizeof(char));
            
            desempilha(le, y);
            
            contador --;
            
            if(*y != '['){
                printf("nao\n");
                i = strlen(expressao);
                return 0;
            }
        }

        else if (expressao[i] == '}'){
            char *y = malloc(sizeof(char));
            
            desempilha(le, y);
            
            contador --;
            
            if(*y != '{'){
                printf("nao\n");
                i = strlen(expressao);
                return 0;
            }
        }
    
    }

    if(contador == 0){
        printf("sim\n");

    }
    else{
        printf("nao\n");
    }
}