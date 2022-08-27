#include <stdio.h>

void invstring(char* string){

    if(*string){

        invstring(string + 1);
        printf("%c", *string);

    }

}

int main(){
    char string[501];

    scanf("%s", string);

    invstring(string);

}