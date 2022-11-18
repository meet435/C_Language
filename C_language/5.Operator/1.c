#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum;
	clrscr();
	
	printf("ENTER THE VALUE OF A :");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF B :");
	scanf("%d",&b);
	
	sum=((a*a)+(2*a*b)+(b*b))*(a+b);
	
	printf("ANSWER : %d",sum);
	
	getch();
	
}
