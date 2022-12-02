#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,f; 
//	clrscr();
	
	
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	i=1;
	f=1;
	while(i<=n)
	{
		f=f*i;
		i++;
		
	}
	printf(" The Factorial of %d is = %d  ",n,f);
//	getch();
}
