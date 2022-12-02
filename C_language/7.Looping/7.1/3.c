#include<stdio.h>
#include<conio.h>
main()
{
	int a,en;
//	clrscr();
	printf("Enter The Ending Number :-");
	scanf("%d",&en);
	a=1;
	while(a<=en)
	{
		printf("%d\n",a);
		a++;
	}
	getch();
}