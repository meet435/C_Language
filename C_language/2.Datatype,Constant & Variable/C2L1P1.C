#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a=9,b=2,c=a+b,d=a-b,e=a*b,f=a/b,g=a%b;

	printf(" - - - - - - -");
	printf("\n|            |");
	printf("\n|            |");
	printf("\n|  SUM =>%d   |",c);
	printf("\n|            |");
	printf("\n|            |");
	printf("\n - - - - - - -");

	printf("\n");

	printf("\n - - - - - - -");
	printf("\n|            |");
	printf("\n|            |");
	printf("\n|   SUB=>%d   |",d);
	printf("\n|            |");
	printf("\n|            |");
	printf("\n - - - - - - -");

	printf("\n");

	printf("\n - - - - - - -");
	printf("\n|            |");
	printf("\n|            |");
	printf("\n| MULTI =>%d |",e);
	printf("\n|            |");
	printf("\n|            |");
	printf("\n - - - - - - -");

	printf("\n");

	printf("\n - - - - - - -");
	printf("\n|            |");
	printf("\n|            |");
	printf("\n|   DIV =>%d  |",f);
	printf("\n|            |");
	printf("\n|            |");
	printf("\n - - - - - - -");

	printf("\n");

	printf("\n - - - - - - -");
	printf("\n|            |");
	printf("\n|            |");
	printf("\n|   MOD =>%d  |",g);
	printf("\n|            |");
	printf("\n|            |");
	printf("\n - - - - - - -");
	getch();
}