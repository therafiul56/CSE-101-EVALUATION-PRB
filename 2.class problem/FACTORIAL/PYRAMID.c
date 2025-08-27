#include<stdio.h>
 int factorial(int x);

 int main(){
   int A,fact;
   scanf("%d",&A);
   for(int n=0 ; n<=A ;n++){
        for(int i = n ; i<=A ; i++){
            printf(" ");
        }
        for(int k=0; k<=n ; k++){


   fact=(factorial(n))/(factorial(k)*factorial(n-k));

   printf("%d ",fact);
        }
        printf("\n");
   }


 return 0;
 }
 int factorial(int x){
     int result = 1;
   for(int i=1; i<=x ; i++){
     result = result * i;
   }
   return result;



 }
