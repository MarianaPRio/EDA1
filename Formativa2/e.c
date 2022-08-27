#include <stdio.h>
#include <string.h>

int resultFim = 0;

int Conta7s(char n[], int tam){
    if(tam == 0 && n[tam] == '7') {
        return resultFim+1;
    }

    else if(tam == 0 && n[tam] != '7') {
        return resultFim;
    }

    else if(n[tam] == '7') {
        resultFim++;
        return Conta7s(n, tam-1);
    }
    
    else {
        return Conta7s(n, tam-1);
    }

}

int main() {
    int resultado, tam;
    char n[100];

    scanf("%s", n);

    tam = strlen(n);
    resultado = Conta7s(n, tam-1);
    
    printf("%d\n", resultado);

    return 0;
} 