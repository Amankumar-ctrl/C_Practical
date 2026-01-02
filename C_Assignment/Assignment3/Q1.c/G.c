#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=6; b++){
            if((a==1 && b>1 && b<6) ||
               (a==7 && b>1 && b<6) ||
               (b==1 && a>1 && a<7) ||
               (b==6 && a>=4 && a<7) ||
               (a==4 && b>=4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}