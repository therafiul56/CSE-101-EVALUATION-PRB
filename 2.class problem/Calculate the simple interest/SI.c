#include <stdio.h>
/*_*/
int main(){
    float P,T,R ,Simple_interest;
    printf("Enter the ammount of principle: ");
    scanf("%f",&P);
    printf("Enter the ammount of intrast rate (in %%): ");
    scanf("%f",&R);
    printf("Enter the ammount of Time(in year): ");
    scanf("%f",&T);
    Simple_interest = P*(R/100)*T;
    printf("simple interest is: %.3f/-",Simple_interest);
   

return 0;
}
