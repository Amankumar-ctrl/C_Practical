
/* Assignment 1 – Question 3
Write a C program to demonstrate the difference between ++x (pre-increment)
and x++ (post-increment) in an arithmetic expression.
*/

#include <stdio.h>

int main() {
    int x = 5, y = 5;

    printf("Pre-increment result = %d\n", ++x);
    printf("Post-increment result = %d\n", y++);

    printf("Final x = %d\n", x);
    printf("Final y = %d\n", y);

    return 0;
}
