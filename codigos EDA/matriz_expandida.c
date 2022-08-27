#include <stdlib.h>
#include <stdio.h>

typedef struct celula{
    int coluna;
    int valor;
    struct celula *prox;
} celula;

typedef struct matriz{
    int linhas;
    int colunas;
    celula **valores;
} matriz;

void incializar_matriz(int linhas,int colunas, matriz *m){

    m->linhas = linhas;
    m->colunas = colunas;
    m->valores = malloc (linhas * sizeof(celula *));

    for (int i = 0; i <linhas; i++){
        m->valores[i] = malloc (sizeof(celula));
        m->valores[i]->prox = NULL;

    }
}

void inserir (int linha, int coluna, int valor, matriz *m){

    celula *anterior = m->valores[linha];
    celula *atual = anterior->prox;
    celula *novo = malloc (sizeof(celula));

    novo->coluna = coluna;
    novo->valor = valor;
    novo->prox = atual;
    anterior->prox = novo;

}

int main(){

    matriz *mat;
    mat = malloc (sizeof(matriz));

    int m, n, *v; //matriz M x N
    int linha, coluna, x, aux; //x valor a ser atribuido

    scanf("%d %d", &m, &n);
    
    v = malloc (n * sizeof(int));

    incializar_matriz (m, n, mat);

    do {
        
        scanf("%d %d %d", &linha, &coluna, &x);
        
        if(linha == -1 && coluna == -1 && x == -1) break;

        inserir(linha, coluna, x, mat);

    }while(!(linha == -1 && coluna == -1 && x == -1));

    for (int i = 0; i < n; i++){

        scanf("%d", &v[i]);

    }

    for (int j = 0; j < m ; j++){

        aux = 0;

        celula *atual;

        atual = mat->valores[j] -> prox;

        while(atual != NULL){
            
            aux += v[atual->coluna] * atual->valor;

            atual = atual->prox;

        }

        printf("%d\n", aux);

    }

    return 0;
}
