#include <stdio.h>
/*_*/
int main(){
    float cm,km,m;
    printf("enter a centimeter value: ");
    scanf("%f",&cm);
    km=cm/100000;
    m=cm/100;
    printf("%f cm= %f kilometer & %f meter  ",cm,km,m);

return 0;
}
