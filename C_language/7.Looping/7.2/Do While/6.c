#include<stdio.h>
main()
{
	int a,st;

	printf("Enter The Number :-");
	scanf("%d",&st);
	a=1;
	do
	{
		if(st%2==0)
		{
			printf("%d\n",st);
		}
		st--;
	}
	while(st>=a);

}