//        1
//      0 0
//    1 1 1
//  0 0 0 0
//1 1 1 1 1
//    1
//   12
//  123
// 1234
//12345

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
			if(i%2==0)
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
