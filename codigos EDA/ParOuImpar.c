#include <stdio.h>

int main (){

    char jogador1[11], jogador2[11];
    int  N, jogada1, jogada2, contador=0;

    scanf("%d", &N);
    
    while(N != 0){
        
        scanf("%s", jogador1);
        scanf("%s", jogador2);
        
        contador++;

        printf("Teste %d\n", contador);

        for (int i=0; i < N; i++){
            scanf("%d %d", &jogada1, &jogada2);

            if( (jogada1 + jogada2)%2 == 0 ){
                printf("%s\n", jogador1);
            }
            else{
                printf("%s\n", jogador2);
            }
        }
        scanf("%d", &N);
    }
    
    return 0;
}