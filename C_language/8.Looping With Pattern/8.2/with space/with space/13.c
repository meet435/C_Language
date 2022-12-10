//        A
//      B A
//    C B A
//  D C B A
//E D C B A
//DCBA
//DCB
//DC
//D
#include<stdio.h>

main()
{
	
	char i,j,s;
	
	for(i='A';i<='E';i++)
	{
		for(s='D';s>=i;s--)
		{
			printf(" ");	
		}
		for(j=i;j>='A';j--)
		{
			printf("%c",j);	
		}
			printf("\n");
	}
}
