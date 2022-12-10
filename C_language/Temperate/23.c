//1
//10
//101
//1010
//10101

//1
//12
//123
//1234
//12345

#include<stdio.h>

main()
{
	
	int i,j;
	
	for(i=1;i<=5;i++)
	{

		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}	
		}
			printf("\n");
	}
}
