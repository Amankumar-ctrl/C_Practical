/* Assignment 1 – Question 1
Write a C program to declare variables of type int, float, char, and double.
Initialize them with values and print their values and sizes using sizeof operator.
*/

#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 12.345;

    printf("int value = %d, size = %zu\n", a, sizeof(a));
    printf("float value = %.2f, size = %zu\n", b, sizeof(b));
    printf("char value = %c, size = %zu\n", c, sizeof(c));
    printf("double value = %.3lf, size = %zu\n", d, sizeof(d));

    return 0;
}