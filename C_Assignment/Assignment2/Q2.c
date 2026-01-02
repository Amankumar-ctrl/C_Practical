/* Assignment 2 – Question 2
Compare two numbers without using conditional statements.
Display results as 1 (True) or 0 (False).
*/

#include <stdio.h>

int main() {
    float a, b;

    scanf("%f %f", &a, &b);

    printf("Equal: %d\n", a == b);
    printf("First greater: %d\n", a > b);
    printf("Second greater: %d\n", b > a);

    return 0;
}