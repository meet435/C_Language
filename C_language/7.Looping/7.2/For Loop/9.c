#include<stdio.h>
main()
{
	int n,i,f; 
		
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	f=1;
	for(i=1;i<=n;i++)
	{		
		f=f*i;
	}
	printf("THE FACTORIAl OF %d IS = %d  ",n,f);
	
}
