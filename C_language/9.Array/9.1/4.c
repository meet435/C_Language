#include<stdio.h>
main()
{
	int n,i;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("\n");
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		printf("enter elements of A array:-");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter elements of B array:-");
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("After addition [%d]:-%d\n",i,c[i]);
	}
}