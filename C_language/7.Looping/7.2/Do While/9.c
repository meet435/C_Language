#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,f; 
		
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	i=1;
	f=1;
	
	do
	{
		f=f*i;
		i++;
		
	}
	while(i<=n);
	printf(" The Factorial of %d is = %d  ",n,f);
	
}
