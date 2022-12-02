#include<stdio.h>
main()
{
	int a,en,sum=0;
	
	printf("Enter The Ending Number :-");
	scanf("%d",&en);
	a=1;
	do
	{
		printf("%d\n",a);
		sum=sum+a;
		a++;
		
	}
		while(a<=en);
	printf("Sum = %d",sum);

}