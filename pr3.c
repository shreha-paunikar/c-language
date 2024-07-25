#include<stdio.h>
int main()
{
    int n,sum, ld,fd;
    
    printf("Enter n:");
    scanf("%d",&n);
    ld=n%10;
   while(n>=10)
   {
      n=n/10;
   }
   fd=n;
   sum=fd+ld;
   printf("sum of fd or ld =%d",sum);
    
} 