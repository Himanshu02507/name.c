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
        printf("*");
        if(a==n){
            for(int a5=1;a5<=n;a5++){
                printf(" ");
            }
            for(int a6=1;a6<=n-1;a6++){
                printf("*"); // last line of I
            }
        } 
        else if(a==1){
            for(int a1=1;a1<=n;a1++){
                printf(" ");
            }
            for(int a2=1;a2<=n-1;a2++){
                // if()
                printf("*"); // firest line of I
            } 
            
            
        } else {
            
        for(int a3=1;a3<=n+(n/2);a3++){
            printf(" ");
        }
        
        printf("*");
        for(int m1=1;m1<=n;m1++){
            printf(" ");
        }   
        
        }
        
        printf("*"); // middle line of I
        printf("\n");
    }
    
}

int main(){
int n;
printf("Enter the number: \n");
scanf("%d", &n);

pattern(n);

return 0;
}

/*
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
        printf("*");
        if(a==n){
            for(int a5=1;a5<=n;a5++){
                printf(" ");
            }
            for(int a6=1;a6<=n-1;a6++){
                printf("*"); // last line of I
            }
        } 
        else if(a==1){
            for(int a1=1;a1<=n;a1++){
                printf(" ");
            }
            for(int a2=1;a2<=n-1;a2++){
                // if()
                printf("*"); // firest line of I
            } 
            
            
        } else {
            
        for(int a3=1;a3<=n+(n/2);a3++){
            printf(" ");
        }
        
        printf("*");
        for(int m1=1;m1<=n;m1++){
            printf(" ");
        }   
        
        }
        
        printf("*"); // middle line of I
        printf("\n");
    }
    
}

int main(){
int n;
printf("Enter the number: \n");
scanf("%d", &n);

pattern(n);

return 0;
}
*/