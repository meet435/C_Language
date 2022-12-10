//   *
//  * *
// *   *
//*     *
//   1
//  2 2
// 3   3
//4     4

//321
//32
//3

#include<stdio.h>

main()
{
	
	int i,j,s,k;
	
	for(i=1;i<=4;i++)
	{
		for(s=3;s>=i;s--)
		{
			printf(" ");	
		}
		for(j=i;j>=1;j--)
		{
			if(i==j)
			{
				printf("*");	
			}
			else
			{
				printf(" ");
			}	
		}	
		for(k=1;k<=i;k++)
		{
			if(i==k)
			{
				printf("*");	
			}
			else
			{
				printf(" ");
			}		
		}
			printf("\n");
	}
}
