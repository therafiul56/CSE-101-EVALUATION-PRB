#include<math.h>
/*_*/
int main(){
    float radius, diameter, circumference,  area;
    const float pi = 3.1416;
printf("enter the value of radius:");
scanf("%f",&radius);
diameter = radius*2;
circumference = 2*pi*radius;
area = pi*pow(radius,2);
printf("the diameter=%.2f, the circumference=%.2f, the area=%.2f ",diameter,circumference,area);
return 0;
}
