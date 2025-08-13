#include<stdio.h>
int main(){
 int a,b;
 printf("Enter the value of A:");
 scanf("%d",&a);
 printf("enter the value of B:");
 scanf("%d",&b);
a=a-b;
b=a+b;
a=b-a;

 printf("A=%d\n",a);
 printf("B=%d",b);
 return 0;
}
