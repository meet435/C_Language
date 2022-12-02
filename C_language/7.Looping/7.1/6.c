#include<stdio.h>
#include<conio.h>
main()
{
	int a,st;
//	clrscr();
	printf("Enter The Number :-");
	scanf("%d",&st);
	a=1;
	while(st>=a)
	{
		if(st%2==0)
		{
			printf("%d\n",st);
		}
		st--;
	}

}