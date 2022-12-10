//A
//B C
//D E F
//G H I J
//K L M N O
#include<stdio.h>

main()
{
	char i,j,k;
	
	k='A';
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++,k++)
		{
			printf("%c",k);
		}
		printf("\n");
	}
}
