#include <stdio.h>

int main() {
    for(int a=1; a<=5; a++){
        for(int b=1; b<a; b++){
            printf(" ");
        }
        printf("*");

        for(int c=1; c<=2*(5-a)-1; c++){
            printf(" ");
        }

        if(a != 5){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}