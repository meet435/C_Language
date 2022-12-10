//    1
//   12
//  123
// 1234
//12345
// 2345
//  345
//   45
//    5

//1234
//234
//34
//4
//1
//12
//123
//1234
#include<stdio.h>

main()
{
	
	int i,j,s,k;
	
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
	for(i=2;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");	
		}
		for(k=i;k<=5;k++)
		{
			printf("%d",k);	
		}
			printf("\n");
	}
}
