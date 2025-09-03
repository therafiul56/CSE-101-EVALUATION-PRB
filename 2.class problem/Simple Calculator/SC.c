#include <stdio.h>

int main() {
    float a, b;
    char o;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the operator (+, -, *, /,%): ");
    scanf(" %c", &o);  

    printf("You entered: %.0f %c %.0f\n", a, o, b);
   switch(o){
       case '+':
       printf("%.0f %c %.0f = %.0f", a,o,b,a+b);
       break;
       case '-':
       printf("%.0f %c %.0f = %.0f",a,o,b,a-b);
       break;
       case '*':
       printf("%.0f %c %.0f = %.0f",a,o,b,a*b);
       break;
      case '/':
      if(b==0)
      {
          printf("the divition is unvalid");
      }else{
          printf("%.0f %c %.0f = %.3f",a,o,b,a/b);
      }
      break;
      case '%':
      printf("%.0f %c %.0f = %d",a,o,b,(int)a%(int)b);
      break;
   
}
    return 0;

}
