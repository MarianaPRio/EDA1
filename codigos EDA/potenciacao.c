#include <stdio.h>

float pot(float a,float b){
    if(a==0){
        return 0;
    }
    
    if(b>0){
        if(b==0) 
            return 1;
        else
            return (a * pot(a,b-1));
    }
    
    else{
        if(b==0) 
            return 1;
        else
            return (1/a * pot(a,b+1));
    }
}
int main() {

    float a,b;

    scanf("%f %f", &a, &b);

    float resultado = pot(a, b);

    printf("%f", resultado);

    return 0;
}
