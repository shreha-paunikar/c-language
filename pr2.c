#include<stdio.h>
int main()
{
    int n, count=0;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    do
    {
        printf("%d\n",n/=10); 
       count++;

    } while (n !=0);
    printf("total num : %d",count);
    
} 