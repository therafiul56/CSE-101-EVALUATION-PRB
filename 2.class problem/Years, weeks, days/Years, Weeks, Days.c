#include <stdio.h>
/*_*/

int main() {
   int total_days,years,weeks,days;
   printf("enter the value of total days:");
   scanf("%d",&total_days);
   years=(total_days/365);
   weeks=(total_days%365)/7;
   days=(total_days%365)%7;
   printf("%d days = %d years,%d weeks,%d days",total_days,years,weeks,days);
    return 0;
}
