#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=7; b++){
            if(b==1 || 
               b==7 || 
               b==a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}