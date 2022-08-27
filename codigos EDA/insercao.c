#include <stdio.h>
#include <stdlib.h>

int main(){
 //declaração variáveis
    int n;
    
    scanf("%d", &n);
    
    int *v= malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

 // ordenar por inserção
    
    for (int i = 1; i < n; i++){
        
        int elemento = v[i];
        
        int j = i-1;

        while (j>=0 && v[j]>elemento){

            v[j+1]=v[j];

            j--;
        
        }
        
        v[j+1]=elemento;
    }

    for (int i = 0; i < n; i++){

        printf("%d ", v[i]);
    }
    
    



    return 0;
}