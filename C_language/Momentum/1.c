#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	
	printf("ENTER THE VALUE :-");
	scanf("%c",&ch);
	
	if(ch>='0'&&ch<='9')
	{
		printf("%c IS NUMBER",ch);
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("%c IS APLPHABET",ch);
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("%c IS APLPHABET",ch);
	}
	else
	{
		printf("%c IS SPECIAL DIGIT",ch);
	}
	
	getch();
}
