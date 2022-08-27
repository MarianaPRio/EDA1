#include <stdio.h>
#include<stdlib.h>

//algoritmo de ordenação
void countingSort(int vetor[], int n, int *vetor_ordenado){

    int max = -1;

    for (int i = 0; i < n; i++){
        if(max<vetor[i]){
            max = vetor[i];
        }
    }

    int v_cont[max+1];
    
    for (int i = 0; i <= max; i++){
        v_cont[i]=0;
    }

    for (int i = 0; i < n; i++){
        v_cont[vetor[i]]++;
    }

    for (int i = 1; i <= max; i++){
        v_cont[i] += v_cont[i-1];
    }

    for (int i = 0; i < n; i++){
        vetor_ordenado[v_cont[vetor[i]]-1] = vetor[i];
        v_cont[vetor[i]]--;
        
    }
}

int buscaBinaria(int *v_ordenado, int n, int x){
    int esq = -1;
    int dir = n;

    while (esq < dir-1){
        
        int meio = (esq+dir)/2;
        
        if(v[meio]<x){
            esq = meio;
        }
        else{
            dir = meio;
        }
    
    }
     if(v[dir]!=x)
        return -1;

     return dir;
}


int main(){

    //declarar e preencher variáveis
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    int *v_n= malloc(n * sizeof(int)); //vetor com N números inteiros
    int *v_m= malloc(m * sizeof(int)); //vetor com M números inteiros
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v_n[i]);
    }

    int *v_ord = malloc(n * sizeof(int));
    
    countingSort(v_n, n, v_ord);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", v_ord[i]);
    }

    printf("\n");
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &v_m[i]);
    }

    int *posicao_ordenada= malloc(n * sizeof(int));
    int *posicao_original= malloc(n * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        posicao_ordenada[i] = buscaBinaria(v_n, n, v_m[i]);
    }

    

    return 0;
}