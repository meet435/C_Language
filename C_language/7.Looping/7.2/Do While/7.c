#include<stdio.h>
main()
{
	int a;
	a=2000;
	do
	{
		if(a%4==0)
		{
			printf("%d\n",a);
		}
		a++;
	}
	while(a<=3000);

}