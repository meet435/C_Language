//A
//BB
//CCC
//DDDD
//EEEEE
#include<stdio.h>

main()
{
	
	char i,j;
	
	for(i='A';i<='E';i++)
	{

		for(j=i;j>='A';j--)
		{
			printf("%c",i);	
		}
			printf("\n");
	}
}
