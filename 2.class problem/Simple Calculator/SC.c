
#include <stdio.h>

int main() {
    float a, b;
    char o;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &o);  

    printf("You entered: %.1f %c %.1f\n", a, o, b);
   switch(o){
       case '+':
       printf("%.1f %c %.1f = %.1f", a,o,b,a+b);
       break;
       case '-':
       printf("%.1f %c %.1f = %.1f",a,o,b,a-b);
       break;
       case '*':
       printf("%.1f %c %.1f = %.1f",a,o,b,a*b);
       break;
      case '/':
      if(b==0)
      {
          printf("the divition is unvalid");
      }else{
          printf("%.1f %c %.1f = %.1f",a,o,b,(float)a/b);
      }
   
}
    return 0;

}
