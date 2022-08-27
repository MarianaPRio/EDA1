#include <stdio.h>

int main(){

    int quantNum, resultado = 0, num[100];
    int contador=0;
        
    scanf ("%d", &quantNum);

    while(quantNum !=0){

        resultado=0;

        for (int i = 0; i < quantNum; i++)
        {
            scanf("%d", &num[i]);
        }

        for (int j = 0; j < quantNum; j++)
        {
            resultado = resultado + num[j];
        }

        contador++;

        printf("Teste %d\n", contador);

        printf("%d\n\n", resultado);
    
        scanf ("%d", &quantNum);
    }
    
    return 0;

}