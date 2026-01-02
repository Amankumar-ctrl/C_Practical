#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=7; b++){
            if(b==a || b==8-a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}