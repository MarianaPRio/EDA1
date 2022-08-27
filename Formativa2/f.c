#include <stdio.h>
#include <string.h>

long int F[81] = {0, 1};

long int fibonacci(int n) {
    static int i = 2;
    if(i<=n) {
        F[n] = (fibonacci(n-1) + fibonacci(n-2));
        i++;
    }
    return F[n];
}
