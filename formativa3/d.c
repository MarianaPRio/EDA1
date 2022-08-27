#include <stdio.h>
#include <stdlib.h>

void Carteiro(int *vn, int *vm, int n, int m) {
    
    int i, j,p1 = 0;
    int *vFinal;
    vFinal = malloc (32000000 * sizeof (int));
    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(vn[j] == vm[i]) {
                vFinal[i] = j;
            }
        }
    }
    
    p1 = vFinal[0];
    
    for(i = 0; i < m-1; i++) {
        if(vFinal[i] >= vFinal[i+1]) {
            p1 = p1 + vFinal[i] - vFinal[i+1];
        }
        else {
            p1 = p1 + vFinal[i+1] - vFinal[i];
        }
    }
    
    printf("%d\n", p1);
}

int main(){
    int *vn, *vm, n, m;
    int contn = 0, contm = 0;
    
    vn = malloc (32000000 * sizeof (int));
    vm = malloc (32000000 * sizeof (int));
    
    scanf("%d %d", &n, &m);
    
    while(contn < n) {
        scanf("%d", &vn[contn]);
        contn++;
    }
    
    while(contm < m) {
        scanf("%d", &vm[contm]);
        contm++;
    }
    
    Carteiro(vn, vm, n, m);
    
    return 0;
}