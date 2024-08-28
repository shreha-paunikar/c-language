#include<stdio.h>
int main()
{
    int a[2][3];
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("enter :");
            scanf("%d",&a[r][c]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("enter the value of a[%d][%d]:%d\n",i,j,a[i][j]);
        }
    }
}