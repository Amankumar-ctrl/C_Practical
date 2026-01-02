#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 9; j++) {
            if ((j == 0 || j == 8) || (j == 1 && i == 3) || (j == 2 && i == 2)
             || (j == 3 && i == 1) || (j == 4 && i == 0) || (j == 5 && i == 1) 
             || (j == 6 && i == 2) || (j == 7 && i == 3)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}