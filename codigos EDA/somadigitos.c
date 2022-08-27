#include <stdio.h>

int somadigitos(long int n, int soma){
        

    if(n != 0){

        soma = soma + n%10;
        n = n/10;

        
        somadigitos(n, soma);

    }
    else{
        printf("%d", soma);
    }

}


int main(){

    long int n;
    int soma = 0;
    
    scanf("%ld", &n);

    somadigitos(n,soma);


    return 0;
}