#include<stdio.h>
int main()
{
    char i ='a',n;
    
    printf("Enter n:");
    scanf("%c",&n);
    do
    {
        printf("%c\t",i+=2);

    } while(i<=n);

} 
