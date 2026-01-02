/* Assignment 5 – Question 2
Write a C program to read a string and check whether
it is a palindrome or not.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len, flag = 1;

    scanf("%s", s);

    len = strlen(s);

    for(i = 0; i < len / 2; i++) {
        if(s[i] != s[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}