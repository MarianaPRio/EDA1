#include <stdio.h>

int conta7(long int n, long int contador){  

    int contar = 0;
    contar = n%10;

    if(n>0){

        n = n/10;

        if(contar == 7){

            conta7(n,++contador);
        }

        else
            if(contar!=7){

                conta7(n,contador);

            }
    }

    else
        if(n==0){
            printf("%ld\n", contador);

        }
        else
        conta7(n,contador);

}

int main(){

    long int n;
    long int contador = 0;

    scanf("%ld", &n);

    conta7(n, contador);

    return 0;
}