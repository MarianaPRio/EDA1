#include <stdio.h>
int posicao;
int iglob = 0, jglob = 0;

int busca(int vm, int *vn, int m){
    if(vn[iglob] == vm){
        return iglob;
    }
    else if(m == 1){
        return -1;
    }
    else{
        busca(vm, *vn, m);
    }
}
void print(int *v, int b){
    b = sizeof(*v);
    if(b > 0){
        printf("%d", v[posicao]);
        posicao++;
        print(*v, b);
    }
}
int main(){

    int n, m, total, b = 0;
    int *vn, *vm, *v;
    int  i = 0, j = 0;

    vn = malloc (32000000 * sizeof (int));
    vm = malloc (32000000 * sizeof (int));
    v = malloc (32000000 * sizeof (int));

    scanf("%d, %d",&n, &m);

    while(i < n) {
        scanf("%d", &vn[i]);
        i++;
        printf("%d\n", i);
    }
    printf("AAAA");
    while(j < m) {
        scanf("%d", &vm[j]);
        j++;
        printf("%d\n", j);
    }
    printf("BBBB");
    total = m + n +1;
    while(total > 0){
        busca(vm[m], *vn, m);
        total--;
        m--;
    }
    print(*v, b);

    return 0;
}