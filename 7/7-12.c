#include<stdio.h>
int main()
{
    int i,num;

    printf("Enter the num :");
    scanf("%d",&num);
    printf("fac to %d:",num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d",i);
        }
    }
    
}