#include <stdio.h>
#include<math.h>
/*3. Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in C.*/
int main(){
    float C,F;
    printf("Enter the value in celcius:");
    scanf("%f",&C);
    F=(9*C/5)+32;
    printf("The temperature in Fahrenheitis : %.2f °F",F);

return 0;
}
