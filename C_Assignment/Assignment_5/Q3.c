/* Assignment 5 – Question 3
Write a C program to count the number of words in a given string.
*/

#include <stdio.h>

int main() {
    char s[200];
    int i, count = 1;

    scanf("%[^\n]", s);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ')
            count++;
    }

    printf("Number of words = %d\n", count);

    return 0;
}