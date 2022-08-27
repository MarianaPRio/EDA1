#include <stdio.h>

int main() {

    int num, contEsp, numEsp, contador = 1;
    
    scanf("%d", &num);

    numEsp = num - 1;
    
    for (int i = 0; i < num; i++)
    {
        for(contEsp=0; contEsp < numEsp; contEsp++)
        {
            printf(" ");

        }

        numEsp--;
    
            for (int g = 0; g < contador; g++){ 
                printf("*");
            }

            contador=contador + 2;       
    
    printf("\n");

    }
    return 0;
}