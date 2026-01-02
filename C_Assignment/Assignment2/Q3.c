/* Assignment 2 – Question 3
Login Authentication System using logical operators.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char u[20], p[20];

    scanf("%s %s", u, p);

    printf("%s\n", (strcmp(u, "admin") == 0 && strcmp(p, "1234") == 0)
           ? "Login Successful" : "Invalid Login");

    return 0;
}