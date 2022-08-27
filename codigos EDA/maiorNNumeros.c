#include <stdio.h>

int main(){

    int num, maiorNum = NULL, n=0;

    
        while(scanf("%d", &num) != EOF){
            
            if(maiorNum == NULL){

                maiorNum = num;

            }else{

                if(num>=maiorNum){

                    maiorNum = num;

                    n++;
                }

            }
    }
    
printf("%d\n", maiorNum);

return 0;

}
