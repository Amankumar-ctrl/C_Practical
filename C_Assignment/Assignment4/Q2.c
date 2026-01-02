#include <stdio.h>

int maxOfTwo(int *x, int *y) {
    if (*x > *y)
        return *x;
    else
        return *y;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = maxOfTwo(&a, &b);

    printf("Maximum = %d\n", max);

    return 0;
}
