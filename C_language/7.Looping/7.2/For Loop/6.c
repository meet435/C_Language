#include<stdio.h>
main()
{
	int a,st;

	printf("Enter The Number :-");
	scanf("%d",&st);
	
	for(a=st;a>=1;a--)
	{
		if(a%2==0)
		{
			printf("%d\n",a);	
		}	
	}
	

}