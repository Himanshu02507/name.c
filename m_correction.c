#include <stdio.h>
#include <stdlib.h>

void pattern(int n)
{ 
    for (int a = 1; a <= n; a++)
    {
        printf("*"); //  1st line of h
        if (a == (n / 2) + 1)
        {
            for (int b = 1; b <= n / 2; b++)
            {
                printf("*"); // middle line of h
            }
        }
        else
        {
            for (int c = 1; c <= n / 2; c++)
            {
                printf(" ");
            }
        }
        printf("*"); // 3rd line of h
        if (a == n)
        {
            for (int a5 = 1; a5 <= n; a5++)
            {
                printf(" ");
            }
            for (int a6 = 1; a6 <= n; a6++)
            {
                printf("*"); // last line of I
            }
            for (int ils = 1; ils <= n; ils++)
            {
                printf(" "); // print's last star of m
            }
            
            printf("*");
        }
        else if (a == 1)
        {
            for (int a1 = 1; a1 <= n; a1++)
            {
                printf(" ");
            }
            for (int a2 = 1; a2 <= n; a2++)
            {
                printf("*"); // first line of I
            }
            for (int is = 1; is <= n; is++)
            {
                printf(" "); // print's first star of m
            }
            
            printf("*");
        }
        else
        {
            for (int a3 = 1; a3 <= n + (n / 2); a3++)
            {
                printf(" ");
            }
            printf("*"); // middle line of i
            for (int mi = 1; mi <= n + 1; mi++)
            {
                printf(" ");
            }
            
            printf("*"); // to print middle line of first line of m
            printf("");
        }
        printf("\n");
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