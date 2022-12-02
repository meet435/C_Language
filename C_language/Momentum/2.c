#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	clrscr();

	printf("ENTER THE A :- ");
	scanf("%d",&a);
		
	(a%2==0)
		?printf("%d is EVEN",a)
		:printf("%d is ODD",a);
		
	getch();	
}
