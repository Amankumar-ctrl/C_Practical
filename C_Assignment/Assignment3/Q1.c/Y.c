#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=7; b++){
            if((b==a && a<=4) || (b==8-a && a<=4) || (b==4 && a>4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}