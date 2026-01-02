#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=7; b++){
            if((a==1 && b>2 && b<6) ||
               (a==6 && b>2 && b<6) ||
               (b==2 && a>1 && a<6) ||
               (b==6 && a>1 && a<6) ||
               (a==7 && b==6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}