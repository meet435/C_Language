//        5
//      4 4
//    3 3 3
//  2 2 2 2
//1 1 1 1 1
//    5
//   45
//  345
// 2345
//12345
//4321
//321
//21
//1
#include<stdio.h>

main()
{
	
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s>1;s--)
		{
			printf(" ");	
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",i);	
		}
			printf("\n");
	}
}
