#include<stdio.h>
int main()
{
    int a,n;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter n:");
    scanf("%d",&n);
    printf("mul table of %d\n",n);
    for( ;a<=10 ; a++)
    {
            printf("%d*%d=%d\n",n,a,a*n);
    }
}
