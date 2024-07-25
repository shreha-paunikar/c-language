#include<stdio.h>
int main()
{
    int i,j,s;
    for(i=1;i<=5;i++)
    {
        for(s=4;s>=1;s--)
        {
            printf("  ");
        }
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
         for(s=4;s>=1;s--)
        {
            printf("  ");
        }
        {
            printf("\n");
        }
    }

}