#include <stdio.h>
#include<stdlib.h>

void countingSort(int vetor[], int n){

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

    int *v_ord = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        v_ord[v_cont[vetor[i]]-1] = vetor[i];
        v_cont[vetor[i]]--;
        
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", v_ord[i]);
    }
    
    printf("\n");
}

int main(){

    int n;
    
    scanf("%d", &n);
    
    int *v= malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    countingSort(v, n);

    return 0;
}