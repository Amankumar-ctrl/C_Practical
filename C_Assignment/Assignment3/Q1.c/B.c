#include <stdio.h>

int main(){
    for(int a=1; a<=7; a++){
        for(int b=1; b<=5; b++){
            if(b==1 || 
               (a==1 && b<5) || 
               (a==4 && b<5) || 
               (a==7 && b<5) || 
               (b==5 && a!=1 && a!=4 && a!=7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}