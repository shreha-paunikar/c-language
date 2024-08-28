#include<stdio.h>
int main()
{
    float per;
    printf("enter a per:");
    scanf("%f",&per);
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
     else if(per>=70)
    {
        printf("Grade C");
    }
     else if(per>=60)
    {
        printf("Grade D");
    }
     else if(per>=50)
    {
        printf("Grade E");
    }
    else
    {
        printf("FAIL");
    }

}