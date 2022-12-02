#include<stdio.h>
main()
{
	int a,en;

	printf("Enter The Ending Number:-");
	scanf("%d",&en);
	
	for(a=1;a<=en;a++)
	{
		if(a%2!=0)
		{
			printf("%d\n",a);	
		}	
	}
}