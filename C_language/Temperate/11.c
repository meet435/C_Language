//    1
//   12
//  123
// 1234
//12345
//
//1234
//234
//34
//4

#include<stdio.h>

main()
{
	
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
			printf(" ");	
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);	
		}
			printf("\n");
	}
}
