#include<stdio.h>
main()
{
	int n,i,count=0;
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
		printf("THE ELEMENTS[%d]:-%d\n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		count++;
	}
	printf("\n");
	printf("LENGTH OF ARRAY IS:-%d",count);
}