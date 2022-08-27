#include <stdio.h>

int main(){

    int a,b,c,d;
    int maiorNumero = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    maiorNumero = a;

    if (b>maiorNumero){

        maiorNumero = b;
    }

    if (c>maiorNumero){

        maiorNumero = c;
    }

    if (d>maiorNumero){

        maiorNumero = d;
    }

printf("%d", maiorNumero);

return 0;

}