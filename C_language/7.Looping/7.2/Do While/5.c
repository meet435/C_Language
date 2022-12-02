#include<stdio.h>
main()
{
	int a,en;

	printf("Enter The Ending Number :-");
	scanf("%d",&en);
	a=1;
	do
	{
		if(a%2!=0)
		{
			printf("%d\n",a);
		
		}
		a++;
		
	}
	while(a<=en);
}