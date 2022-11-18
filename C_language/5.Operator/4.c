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
	
	sum=(a*a*a)-(3*(a*a)*b)+(3*a*(b*b))-(b*b*b);
	
	printf("ANSWER : %d",sum);
	
	getch();
	
}
