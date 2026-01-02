/* Assignment 2 – Question 4
Bank Interest Update System using assignment operators.
*/

#include <stdio.h>

int main() {
    float balance, interest, charge, bonus;

    scanf("%f", &balance);
    scanf("%f", &interest);
    scanf("%f", &charge);
    scanf("%f", &bonus);

    balance += interest;
    printf("After interest: %.2f\n", balance);

    balance -= charge;
    printf("After charge: %.2f\n", balance);

    balance *= bonus;
    printf("After bonus: %.2f\n", balance);

    balance /= 2;
    printf("After division: %.2f\n", balance);

    return 0;
}