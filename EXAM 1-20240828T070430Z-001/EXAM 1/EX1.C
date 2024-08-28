#include<stdio.h>
#include<conio.h>
main()
{
	char day;
	clrscr();

		printf("1) Monday\n");
		printf("2) Tuesday\n");
		printf("3) Wednesday\n");
		printf("4) Thursday\n");
		printf("5) Friday\n");
		printf("6) Saturday\n");
		printf("7) Sunday\n");
		scanf("%c",&day);
		switch(day)
	       {
			case '1':
				printf("Monday\n");
				break;
			case '2':
				printf("Tuesday\n");
				break;
			case '3':
				printf("Wednesday\n");
				break;
			case '4':
				printf("thursday\n");
				break;
			case '5':
				printf("Friday\n");
				break;
			case '6':
				printf("Saturday\n");
				break;
			case '7':
				printf("Sunday\n");
				break;
	       }
	       getch();


}