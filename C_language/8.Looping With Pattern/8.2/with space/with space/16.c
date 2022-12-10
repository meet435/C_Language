//A B C D E
//  B C D E
//    C D E
//      D E
//        E
//A
//AB
//ABC
//ABCD
#include<stdio.h>

main()
{
	
	char i,j,s;
	
	for(i='A';i<='E';i++)
	{
		for(s='A';s<i;s++)
		{
			printf(" ");	
		}
		for(j=i;j<='E';j++)
		{
			printf("%c",j);	
		}
			printf("\n");
	}
}
