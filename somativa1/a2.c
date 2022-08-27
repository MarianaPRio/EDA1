#include <stdio.h>
#include <stdlib.h>

int busca(int *vn, int vm, int n) {
    for(int i = 0; i < n; i++) {
        if(vn[i] == vm) {
            return i;
        }
    }
}
// SARAWDADWADAW
void buscaO(int *vn, int *vm, int *v, int n, int m) {
    int i = 0, j = 0, cont, meio,a, b;
    int *vFinal;

    vFinal = malloc (32000000 * sizeof (int));
    
    for(i = 0; i < m; i++) {
        a = -1;
        b = n;
        do{
            meio = (a + b)/2;
            if(v[meio] < vm[i]) {
                a = meio;
            }
            else {
                b = meio;
                cont = v[meio];
            }
        }while(a < b-1);
        if(cont == vm[i]) {
            b = busca(vn, vm[i], n);
        }
        else {
            b = -1;
        }
        vFinal[i] = b;
    }
 
        for(i = 0; i < m; i++) {
            printf("%d\n", vFinal[i]);
        }
}

int * ordena (int *v, int n) {
    int i, j;
    for(i = 1; i < n; i++){
        int elem = v[i];
        for(j = i-1; j >= 0 && v[j] > elem; j--){
                v[j+1] = v[j];
                v[j] = elem;
        }
    }
    return v;
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
    
    ordena(v, n);
    buscaO(vn, vm, v, n, m);
    
    return 0;
}