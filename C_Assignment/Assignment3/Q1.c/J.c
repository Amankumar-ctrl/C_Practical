#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=5; b++){
            if(a==1 ||
               b==5 ||
               (a==7 && b>1 && b<5) ||
               (b==1 && a>=5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}