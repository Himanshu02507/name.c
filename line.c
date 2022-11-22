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
            printf(" ");
            // for (int a5 = 1; a5 <= n; a5++)
            // {
            //     printf(" ");
            // }
            for (int a6 = 1; a6 <= n; a6++)
            {
                printf("*"); // last line of I
            }
             printf(" ");
            printf("*");
            
        }
        else if (a == 1)
        {
            printf(" ");
            // for (int a1 = 1; a1 <= n; a1++)
            // {
            //     printf(" ");
            // }
            for (int a2 = 1; a2 <= n; a2++)
            {
                printf("*"); // first line of I
            }
        

            printf(" ");
            printf("*");
        }
        else
        {

            for (int a3 = 1; a3 <= (n/2)+1; a3++)
            {
                printf(" "); // add space before middle line of I 
            }
            printf("*"); // middle line of i
            for (int m1 = 1; m1 <= (n / 2) + 1; m1++)
            {
                printf(" ");
            }
            
            printf("*");
           
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