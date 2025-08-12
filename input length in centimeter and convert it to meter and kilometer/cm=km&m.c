#include <stdio.h>
/*4. Write a C program to input length in centimeter and convert it to meter and kilometer. How to convert length from centimeter to meter and kilometer in C programming. Length conversion program in C from centimeter to meter and centimeter to kilometer.*/
int main(){
    float cm,km,m;
    printf("enter a centimeter value: ");
    scanf("%f",&cm);
    km=cm/100000;
    m=cm/100;
    printf("%f cm= %f kilometer & %f meter  ",cm,km,m);

return 0;
}
