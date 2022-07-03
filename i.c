#include <stdio.h>
#include <stdlib.h>

void pattern(int n);

int main(){
    int n;
    printf("Enter a number for your pattern: \n");
    scanf("%d", &n);
    
    pattern(n);
return 0;
}

void pattern(int n){
    for(int d=1;d<=n;d++){
        printf("*");
    }
    printf("\n");
    for(int e=1; e<=n;e++){
        for(int f=1;f<=(n/2);f++){
            printf(" ");
        }
        printf("*\n");
    
    }
    for(int f=1;f<=n;f++){
        printf("*");
    }
}