#include<stdio.h>

sum(int a[50],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	return sum;
}

main()
{
	int i,j,n;
	
	printf("Enter the size of array :- ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element of array[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	j = sum(a,n);
	
	printf("The sum of all elements :- %d",j);
}