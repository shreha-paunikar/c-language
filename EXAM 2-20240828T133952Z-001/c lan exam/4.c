#include<stdio.h>
int main()
{
    int a,b,cal,sub=0,add=0,mult=0,div=0,mod=0;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    printf("1) add \n");
    printf("2) sub \n");
    printf("3) mult \n");
    printf("4) div \n");
    printf("5) mod \n");
    scanf("%d",&cal);
    switch(cal)
    {
        case 1: printf("add\n");
                printf("sum of %d and %d=%d",a,b,a+b);
                break;
        case 2: printf("sub\n");
                printf("sub of %d and %d=%d",a,b,a-b);
                break;
        case 3: printf("mult\n");
                printf("mult of %d and %d=%d",a,b,a*b);
                break;
        case 4: printf("div\n");
                printf("div of %d and %d=%d",a,b,a/b);
                break;
        case 5: printf("mod\n");
                printf("mod of %d and %d=%d",a,b,a%b);
                break;
                                            
    }

    
}