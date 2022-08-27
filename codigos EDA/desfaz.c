#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
    char *dado;
    struct celula *prox;
} celula;

celula *criar_pilha(){
    celula *p = malloc(sizeof(celula));
    p->prox = NULL;

}

int empilha (celula *p, char x[]){

    celula *elemento = p;
    celula *novo = malloc(sizeof(celula));

    novo->dado = x;
    novo->prox = elemento->prox;
    elemento->prox = novo;

   
}
char desempilha (celula *p){
    if(p != NULL){  
        if(p->prox == NULL){
            return 0;
        
        }else{

            printf("%s\n", p->dado);
            
            celula *lixo = p->prox;

            char *removido;

            p->prox = p->prox->prox ;

            removido = lixo->dado;

            free(lixo);
            
            return *removido;
        }
    }
}

void imprime (celula *le){
    
    celula *elemento = le->prox;
    
    while(elemento != NULL){
        printf("%d -> ", elemento->dado);
        elemento = elemento->prox;
    }
    
    printf("NULL\n");

}

int main(){

    char entrada[200];

    char *str_inserir = "inserir";

    char *str_desfazer = "desfazer";

    char *str_imprimir = "imprimir";

    celula *le = criar_pilha();

    while (scanf("%[^\n]", entrada) != EOF){
        
        
        if (strncmp(entrada, str_inserir, 7) == 0){
            printf("insere\n");

            char *controle;

            controle = strtok(entrada," ");
            controle = strtok(NULL,"[^\n]");

            empilha(le, controle);

             printf("%s\n", le->prox->dado);

        }

        if (strncmp(entrada, str_desfazer, 8) == 0){
            printf("desfaz\n");

            char removido[200];

            desempilha(le);
        }

        setbuf(stdin,NULL);
    }

    return 0;
}