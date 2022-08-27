#include <stdio.h>

int f91(long int n){
    if(n >= 101){
        return n-10;
    }
    return f91(f91(n+11));
}

int main(){
    long int n, m;
    scanf("%ld", &n);
    while(n != 0){ 
        m = f91(n);
        printf("f91(%ld) = %ld\n", n, m);
        scanf("%ld", &n);
    }
    return 0;
}
