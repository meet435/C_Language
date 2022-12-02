#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	
	printf("ENTER THE A :- ");
	scanf("%d",&a);
	printf("ENTER THE B :- ");
	scanf("%d",&b);
	printf("ENTER THE C :- ");
	scanf("%d",&c);
	printf("ENTER THE D :- ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A IS BIG");
			}
			else
			{
				printf("D IS BIG");
			}
		}
		else
		{
			printf("C IS BIG");
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B IS BIG");
			}
			else
			{
				printf("D IS BIG");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C IS BIG");
			}
			else
			{
				printf("D IS BIG");
			}
		}
	}
	
	
		
	
	getch();
}

