#include <stdio.h>

void Ordena(int num[], int n){
    int i, j;
    for(i = 1; i < n; i++){
        int elem = num[i];
        for(j = i-1; j >= 0 && num[j] > elem; j--){
                num[j+1] = num[j];
                num[j] = elem;
        }
    }
    for(i = 0; i < n; i++){
        printf("%d ", num[i]);
    }
}

int main(){

    int num[1000], i = 0;

    while(scanf("%d", &num[i]) != EOF){
        i++;
    }
    Ordena(num, i);

    return 0;
}