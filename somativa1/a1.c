#include <stdio.h>
int posicao;

int ordena(int *v, int *vm,int n, int m){
    int i, j;
    for(i = 1; i < n; i++){
        int elem = v[i];
        for(j = i-1; j >= 0 && v[j] > elem; j--){
                v[j+1] = v[j];
                v[j] = elem;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; i++){
            if(v[i] == vm[j]){
                return 1;
            }
        }
    }
    return -1;
}


int main(){
    int *vn, *vm, *v, n, m;
    int i = 0, j = 0, retu;
    int total = 0, b = 0;
    
    vn = malloc (32000000 * sizeof (int));
    vm = malloc (32000000 * sizeof (int));
    
    v = malloc (32000000 * sizeof (int));
    
    scanf("%d %d", &n, &m);
    
    while(i < n) {
        scanf("%d", &vn[i]);
        v[i] = vn[i];
        i++;
    }
    while(j < m) {
        scanf("%d", &vm[j]);
        j++;
    }
    retu = ordena(v, vm, n, m);
    if(retu == 1){
        buscaO(v, vm);
    }
    else{
        printf("-1\n");
    }
    return 0;
}