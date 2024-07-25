#include<stdio.h>
main()
{
    int i,yr;
    printf("Enter year1:");
    scanf("%d",&i);
    printf("Enter year2:");
    scanf("%d",&yr);
    while(i<=yr)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}