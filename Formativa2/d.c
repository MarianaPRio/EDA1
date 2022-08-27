#include <stdio.h>
#include <string.h>

int numX = 0;

char addX(char strX[],int tamX,int tam, int tamAtual){
    // printf("Passou addX %s\n", strX);
    
    if(numX == 0){
        return printf("%s\n", strX);
    }
    
    strX[tamAtual] = 'x';
    // printf("%s\n", strX);
    numX--;
    tamAtual++;
    return addX(strX, tamX, tam, tamAtual);  
}

char moveX(char str[], int tam, char strX[], int tamX, int tamAtual){
    
    // printf("%s, %d, %s, %d, numX=%d\n", str, tam, strX, tamX, numX);

    if(tamX-1 == tam){
        return addX(strX, tamX, tam, tamAtual);
    }

    else if(str[tamX] == 'x'){
        numX++;
        tamX++;
        // printf("Passou 1\n");
        return moveX(str, tam, strX, tamX, tamAtual);
    }  
    else if(str[tamX] != 'x') {  
        strX[tamAtual] =  str[tamX];
        tamAtual++;
        tamX++;
        // printf("Passou 2  -- %s\n", strX);
        return moveX(str, tam, strX, tamX, tamAtual);
    }
    
    // printf("Passou FIM\n");
}

int main() {
    int tam, tamX;
    char str[101], fim[101];
    int tamAtual;

    char strX[101] = {};

    scanf("%[^\n]", str);
    
    tam = strlen(str);
    tamX = 0;
    tamAtual = 0;
    
    moveX(str, tam-1, strX, tamX, tamAtual);

    return 0;
}