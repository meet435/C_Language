//1        1
//12      21
//123    321
//1234  4321
//1234554321

//12344321
//234  432
//34    43
//4      4

#include<stdio.h>

main()
{
	
	int i,j,s1,s2,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);	
		}
		for(s1=i;s1<=4;s1++)
		{
			printf(" ");	
		}
		for(s2=4;s2>=i;s2--)
		{
			printf(" ");	
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);	
		}
			
			printf("\n");
	}
}
