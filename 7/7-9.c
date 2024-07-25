#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter the num :");
    scanf("%d",&num);
    int sum=0;
    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("sum of 1 to %d: %d\n",num,sum);
}