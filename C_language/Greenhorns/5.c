#include<stdio.h>
#include<conio.h>
main()
{
 	int b,h,d,t,g;
 	
 	clrscr();

 	printf("ENTER THE BASE SALARY:");
 	scanf("%d",&b);
 	
	h=(b*10)/100;
	d=(b*5)/100;
	t=(b*8)/100;
	
	g=b+h+d+t;
	printf("YOUR ANSWER :- %d",g);
	
 	getch();
}

