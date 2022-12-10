//A B C D E
//  A B C D
//    A B C
//      A B
//        A
//D
//DC
//DCB
//DCBA
#include<stdio.h>

main()
{
	
	char i,j,s;
	
	for(i='E';i>='A';i--)
	{
		for(s='D';s>=i;s--)
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
