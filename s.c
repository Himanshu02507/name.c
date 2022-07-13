#include <stdio.h>
#include <stdlib.h>

void pattern(int n){
   for(int o=1;o<=n-1;o++){
       printf("*"); // 1st line
   }
   for(int p=1;p<=n;p++){
       if(p==n){
           for(int q=1;q<=n-1;q++){
               printf("*"); // 3rd line 
           }
       }
       printf("*\n"); // 2nd line
   }
   for(int r=1;r<=(n/2);r++){
       for(int s=1;s<=n-1;s++){
           printf(" ");
       }
       printf("*"); // 4th line
       printf("\n");
   }
   for(int t=1;t<=n;t++){
       printf("*"); // 5th line 
   }
}

int main(){
int n;
printf("Enter the number: \n");
scanf("%d", &n);

pattern(n);

return 0;
}