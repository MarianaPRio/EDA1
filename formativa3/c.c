#include <stdio.h>
#include <stdlib.h>

void buscaB(int *vn, int *vm, int n, int m) {
    
    int i, j;
    int elem;
    int *vFinal;
    vFinal = malloc (32000000 * sizeof (int));
    
    for(i = 0; i < m; i++) {
        int cont = -1, div = n;
        while(cont < div-1) {
            elem = (cont + div)/2;
            if(vn[elem] < vm[i]) {
                cont = elem;
            }
            else {
                div = elem;
            }
        }
        vFinal[i] = div;
    }
    
    for(i = 0; i < m; i++) {
        printf("%d\n", vFinal[i]);
    }
}

int main()
{
    int *vn, *vm, n, m;
    int i = 0, j = 0;
    
    vn = malloc (32000000 * sizeof (int));
    vm = malloc (32000000 * sizeof (int));
    
    scanf("%d %d", &n, &m);
    
    while(i < n) {
        scanf("%d", &vn[i]);
        i++;
    }
    
    while(j < m) {
        scanf("%d", &vm[j]);
        j++;
    }
    
    buscaB(vn, vm, n, m);
    
    return 0;
}