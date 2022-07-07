#include <stdio.h>
#include <stdlib.h>

void pattern(int n)
{
    for (int o = 1; o <= n; o++)
    {
        printf("*");
        if (o == 1)
        {
            for (int q = 1; q <= n / 2; q++)
            {
                printf("*");
            }
        }
        else if (o == (n / 2) + 1)
        {
            for (int r = 1; r <= n / 2; r++)
            {
                printf("*");
            }
        }
        else
        {
            for (int p = 1; p <= (n / 2); p++)
            {
                printf(" ");
            }
        }

        printf("*\n");
    }
}

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    pattern(n);

    return 0;
}