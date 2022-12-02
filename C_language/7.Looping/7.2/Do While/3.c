#include<stdio.h>
main()
{
	int a,en;

	printf("Enter The Ending Number :-");
	scanf("%d",&en);
	a=1;
	do
	{
		printf("%d\n",a);
		a++;
	}
	while(a<=en);
}