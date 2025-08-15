#include <stdio.h>

int main() {
    float Initial_value,Product_cost,Recived_money,Remaining_money;
    printf("The money you have:");
    scanf("%f",&Initial_value);
    printf("The cost of your product:");
    scanf("%f",&Product_cost);
    Remaining_money = Initial_value - Product_cost;
    printf("The remaining money after purchasing product is: %.2f/-\n",Remaining_money);
    printf("The ammount broher gave :");
    scanf("%f",&Recived_money);
    Remaining_money+=Recived_money;
    printf("The remaining money after reciving money: %.2f/-",Remaining_money);

    return 0;
}
