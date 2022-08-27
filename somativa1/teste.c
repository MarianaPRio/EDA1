#include <stdio.h>
#include <stdlib.h>

int busca_linear(int *vn, int vm, int n) {
    
    int i;

    for(i = 0; i < n; i++) {
        if(vn[i] == vm) {
            return i;
        }
    }
}

void busca_binaria(int *vn, int *vno, int *vm, int n, int m) {
    
    int i, j, aux;
    int meio;
    int *vr;
    vr = malloc (31250000 * sizeof (int));
    
    for(i = 0; i < m; i++) {
        int e = -1, d = n;
        while(e < d-1) {
            meio = (e + d)/2;
            if(vn[meio] < vm[i]) {
                e = meio;
            }
            else {
                d = meio;
                aux = vn[meio];
            }
        }
        if(aux == vm[i]) {
            d = busca_linear(vno, vm[i], n);
        }
        else {
            d = -1;
        }
        vr[i] = d;
    }
    
    for(i = 0; i < m; i++) {
        printf("%d\n", vr[i]);
    }
}

int * ordena (int *vn, int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        int elemento =  vn[i];
        for(j = i - 1; j >= 0 && vn[j] > elemento; j--){
            vn[j+1] = vn[j];
        }
        vn[j+1] = elemento;
    }

    return vn;
}

int main()
{
    int *vn, *vm, *vno, n, m, contn = 0, contm = 0, i;
    
    vn = malloc (31250000 * sizeof (int));
    vm = malloc (31250000 * sizeof (int));
    vno = malloc (31250000 * sizeof (int));
    
    scanf("%d %d", &n, &m);
    
    while(contn < n) {
        scanf("%d", &vn[contn]);
        vno[contn] = vn[contn];
        contn++;
    }
    
    while(contm < m) {
        scanf("%d", &vm[contm]);
        contm++;
    }
    
    ordena(vn, n);

    busca_binaria(vn, vno, vm, n, m);
    
    return 0;
}