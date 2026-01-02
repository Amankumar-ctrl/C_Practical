// A
#include <stdio.h>

    int main(){
    
    for(int a=1; a<=5; a++){
        for(int b=4; b>=a; b--){
            printf(" ");
        }
        for(int c=1; c<=(a*2-1); c++){
            if(c==1 || c==(a*2-1) || a==3)
            printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}