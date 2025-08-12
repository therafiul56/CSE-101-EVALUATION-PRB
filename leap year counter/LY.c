#include <stdio.h>
/*leap year counting*/
int main(){
    int year;
    printf("Enter a valid year:");
    scanf("%d",&year);
    if(year%100==0 || year%400==0 || year%4==0){
        printf("It's a leap year !!");
    }
    else{
        printf("it's not a leap year.");
    }


return 0;
}
