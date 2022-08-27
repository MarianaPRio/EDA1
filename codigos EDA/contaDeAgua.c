#include <stdio.h>

int main (){

    int consumoAgua, valorConta=7;

    scanf("%d", &consumoAgua);

    if(consumoAgua>=0 && consumoAgua<=1000){
        
        if(consumoAgua <= 10){
            valorConta = 7;
        }
        else{
            
            if(consumoAgua > 10 && consumoAgua <=30){
                valorConta = valorConta + (consumoAgua - 10);
        }
            else{
                valorConta = 27;
                
                if (consumoAgua > 30 && consumoAgua <=100){
                    valorConta = valorConta + 2*(consumoAgua - 30);
                }
                else{
                    valorConta = 167;
                    if (consumoAgua > 100){
                        valorConta = valorConta + 5*(consumoAgua - 100);
                    }
                }

            }
        }

        printf("%d\n", valorConta);
    }
    return 0;
}