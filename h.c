#include <stdio.h>
#include <stdlib.h>

void pattern(int n){
    for (int a = 1; a <= n; a++)
    {
        printf("*");
        if(a == (n/2)+1){
            for(int b=1;b<=n/2;b++){
                printf("*");
            }
        } else{
            for(int c=1;c<=n/2;c++){
            printf(" ");
        }
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