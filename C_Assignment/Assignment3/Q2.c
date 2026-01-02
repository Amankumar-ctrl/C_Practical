#include <stdio.h>
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // A
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n / 2 + 1)
            {
                if ((i == 1 && j == 1) || (i == 1 && j == n))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        // M
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || (i == j && i <= n / 2 + 1) || (i + j == n + 1 && i <= n / 2 + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        // A
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n / 2 + 1)
            {
                if ((i == 1 && j == 1) || (i == 1 && j == n))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        // N
        for (int p = 1; p <= n; p++)
        {
            if (p == 1 || p == n || p == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}