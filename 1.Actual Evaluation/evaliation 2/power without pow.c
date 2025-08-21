#include <stdio.h>

int main() {
   int A,B,C,sum=1;
   scanf("%d",&A);
          scanf("%d",&B);

   for(int i=1; i<=B;i++){
       sum=sum*A;
   }
   printf("%d",sum);
    return 0;
}
