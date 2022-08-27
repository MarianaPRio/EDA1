#include <stdio.h>

double CalculaPotencia(double a, double b){
    
    if(b == 0) return 1;
    
    return CalculaPotencia(a, b-1) * a;
}

int main(){
    double a, b, potencia;

    scanf("%lf %lf", &a, &b);
    if(b >= 0){
        potencia = CalculaPotencia(a, b);
    }
    else{
        int novob = -b;
        potencia = 1/CalculaPotencia(a, novob);
    }

    if(a == 0 && b >= 0) printf("indefinido");
    else{
        printf("%lf\n", potencia);
    }

    return 0;
}
