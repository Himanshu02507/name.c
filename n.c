#include <stdio.h>
#include <stdlib.h>

void pattern(int n){
    for (int k = 1;k <= n; k++)
    {
        printf("*");
         for(int l=1;l<=k-1;l++){
            printf(" ");
            }
            printf("*");
            for(int m=k;m<=n-1;m++){
                printf(" ");
            }
            printf("*\n");
        
    }
}

int main(){
int n;
printf("Enter the number: \n");
scanf("%d", &n);

pattern(n);

return 0;
}