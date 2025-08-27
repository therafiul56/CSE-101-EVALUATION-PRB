#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&N);
    do
    {
        if (i%2!=0)
        {
            sum = sum + i;
        }
        i++;
    }
    while ( i<=n );

    printf("Total= %d",sum);

    return 0;
}