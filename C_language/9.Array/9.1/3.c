#include<stdio.h>
main()
{
	int n,i,sum=0,avg;
	printf("ENTER THE SIZE OF ARRAY:-");
	scanf("%d",&n);
	printf("\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("ENTER ELEMENTS OF ARRAY:-");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("\n");
	avg=sum/n;
	
	printf("THE AEVRAGE IS:-%d",avg);
}