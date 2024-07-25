#include<stdio.h>
int main()
{
     int n, rev=0,ld, fd;
     printf("Enter n :");
     scanf("%d",&n);
     fd=n;
     while(n != 0)
     {
        ld = n%10;
        rev = rev*10+ld;
        n = n/10;
     }
     printf("Reverse: %d\n",rev);
     if(fd==rev)
     {
         printf("its is  pallindrome");
     }
     else 
     {
         printf("its is not pallindome");
     }

}