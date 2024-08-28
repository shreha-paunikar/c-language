#include<stdio.h>
#include<conio.h>
main()
{
	float F,c;
	clrscr();
	printf("Enter is temp in degree celsius:");
	scanf("%f",&c);
	F=(c*9/5)+32;
	printf("%.2f",F);


	getch();
}