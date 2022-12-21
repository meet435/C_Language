#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter the size of A array:-");
	scanf("%d",&n);
	printf("\n");
	int a[n],b[n],c[n*2];
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
		c[i]=a[i];
	}
	j=i;
	for(i=0;i<n;i++)
	{
		c[j]=b[i];
		j++;
	}
	for(j=0;j<n*2;j++)
	{
		printf("After merging [%d]:%d\n",j,c[j]);
	}
}