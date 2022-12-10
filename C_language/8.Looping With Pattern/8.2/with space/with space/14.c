//        A
//      A B
//    A B C
//  A B C D
//A B C D E
//ABCD
//BCD
//CD
//D
#include<stdio.h>

main()
{
	
	char i,j,s;
	
	for(i='A';i<='E';i++)
	{
		for(s=i;s<='D';s++)
		{
			printf(" ");	
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);	
		}
			printf("\n");
	}
}
