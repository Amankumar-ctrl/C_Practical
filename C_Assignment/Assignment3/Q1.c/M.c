#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=7; b++){
            if(b==1 || b==7 ||
               (a==2 && (b==2 || b==6)) ||
               (a==3 && (b==3 || b==5)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}