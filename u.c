#include <stdio.h>
#include <stdlib.h>

void pattern(int n){
   for(int u=1;u<=n;u++){
    printf("*");
    if(u==n){
        for(int v=1;v<=n/2;v++){
            printf("*");
        }
    } else{
        
    for(int w=1;w<=n/2;w++){
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