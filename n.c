#include <stdio.h>
#include <stdlib.h>

void pattern(int n){
    for (int g = 1;g <= n; g++)
    {
        printf("*");
         for(int h=1;h<=g-1;h++){
            printf(" ");
            }
            printf("*");
            for(int j=g;j<=n-1;j++){
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