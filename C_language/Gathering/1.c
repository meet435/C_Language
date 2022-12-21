#include<stdio.h>
fa(int n)
{
	if(n>=1)
	{
		return n*fa(n-1);
	}
	else
	{
		return 1;
	}
}
main()
{
	int a;
	printf("Enter The Number :- ");
	scanf("%d",&a);
	
	printf("Factorial of %d is :- %d",a,fa(a));
	
}