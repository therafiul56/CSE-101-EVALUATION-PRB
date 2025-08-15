#include <stdio.h>
/*_*/
int main(){
    int year;
    printf("Enter a valid year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("It's a leap year !!");
    }
    else if(year%400==0){
        printf("it's a leap year.");
    }
    else{printf("It's not a leap year !!");}


return 0;
}
