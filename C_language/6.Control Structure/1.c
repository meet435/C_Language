#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a,b;
	
	printf("ENTER THE A :- ");
	scanf("%d",&a);
	printf("ENTER THE B :- ");
	scanf("%d",&b);
	
	if(a<b)
	{	
		printf("%d IS SMALL",a);	
	}	
	else
	{
		if(a<b)
		{
			printf("%d IS SMALL",b);	
		}
		else
		{
			printf("%d AND %d ARE EQUAL",a,b);
		}
	} 	
	getch();
}
