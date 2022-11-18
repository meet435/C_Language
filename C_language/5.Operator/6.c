#include<stdio.h>
#include<conio.h>
main()
{  
	int a,b,c,sum;
	clrscr();
	
	printf("ENTER THE VALUE OF A :");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF B :");
	scanf("%d",&b);
	printf("ENTER THE VALUE OF C :");
	scanf("%d",&c);
	
	sum=(a-b-c)*(a-b-c)*(a-b-c);
	
	printf("ANSWER : %d",sum);
	
	getch();
	
}
