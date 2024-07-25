#include<stdio.h>
int main()
{
    int num,i;
    int fac=1;

    printf("Enter the num :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fac*=i;
    }
    printf("mul of %d: %d\n",num,fac);
}


