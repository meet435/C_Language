//1234554321
//1234  4321
//123    321
//12      21
//1        1
//12      21
//123    321
//1234  4321
//1234554321
 
//   44
//  4334
// 432234
//43211234

#include<stdio.h>

main()
{
	
	int i,j,s1,s2,k;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);	
		}
		for(s1=4;s1>=i;s1--)
		{
			printf(" ");	
		}
		for(s2=i;s2<=4;s2++)
		{
			printf(" ");	
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);	
		}		
			printf("\n");
	}
		for(i=2;i<=5;i++)
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
