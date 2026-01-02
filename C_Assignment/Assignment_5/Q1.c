
/* Assignment 5 – Question 1
Write a C program to read n elements into an array and calculate
the sum and average of the elements.
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
