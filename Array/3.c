#include<stdio.h>
int main()
{
    int sum =0,r,c;
    float avg=0;

    printf("enter r: ");
    scanf("%d",&r);
    printf("enter c: ");
    scanf("%d",&c);

    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<3 ; i++)
    { 
        for(int j=0;j<3;j++)
        {
            printf("value of a[%d]: %d\n",i,a[i][j]);
            sum=sum+a[i][j];
            avg = sum/9;
        }
    }
    printf("sum of a:%d\n",sum);
    printf("avg of a:%.2f\n",avg);
}
