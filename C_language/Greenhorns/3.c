#include<stdio.h>
#include<conio.h>
main()
{
 	int a,b,c;
 	
	clrscr();
	
	printf("ENTER THE A :-");
	scanf("%d",&a);
	printf("ENTER THE B :-");
	scanf("%d",&b);
	
 	c=a;
	a=b;
	b=c;
	
	printf("A=%d\n",a);
 	printf("B=%d",b);
 	
 	getch();
}

