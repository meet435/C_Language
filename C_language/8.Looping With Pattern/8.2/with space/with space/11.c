//* * * * *
//  * * * *
//    * * *
//      * *
//        *
// 12345
//  2345
//   345
//    45
//     5
//1
//12
//123
//1234
#include<stdio.h>

main()
{
	
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=i;s++)
		{
			printf(" ");	
		}
		for(j=i;j<=5;j++)
		{
			printf("*");	
		}
			printf("\n");
	}
}
