#include<stdio.h>

meet(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("%d is divisible by 3 or 5 both",n);
	}	
	else
	{
		printf("%d is not divisible by 3 or 5 both",n);
	}
}
main()
{
	int a;
	printf("Enter The Number :- ");
	scanf("%d",&a);
	meet(a);
}