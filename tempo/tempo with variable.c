#include<stdio.h>
int main(){
 int a,b,c;
 printf("Enter the value of A:");
 scanf("%d",&a);
 printf("enter the value of B:");
 scanf("%d",&b);
 c=a;
 a=b;
 a=c;
 printf("A=%d\n",b);
 printf("B=%d",a);
 return 0;
 
}
