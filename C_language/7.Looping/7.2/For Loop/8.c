#include<stdio.h>
main()
{
	int a,en,sum=0;
	
	printf("Enter The Ending Number:-");
	scanf("%d",&en);
	
	for(a=1;a<=en;a++)
	{
		printf("%d\n",a);
		sum=sum+a;
	}
	printf("SUM IS = %d",sum);
	
}