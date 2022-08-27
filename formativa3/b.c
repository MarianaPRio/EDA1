#include <stdio.h>

void ordena(int *v, int n){
    int i, j;
    for(i = 1; i < n; i++){
        int elem = v[i];
        for(j = i-1; j >= 0 && v[j] > elem; j--){
                v[j+1] = v[j];
                v[j] = elem;
        }
    }
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

int main(){

    int v[1000], i = 0;

    while(scanf("%d", &v[i]) != EOF){
        i++;
    }
    ordena(v, i);

    return 0;
}