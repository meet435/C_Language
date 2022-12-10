//    5
//   545
//  54345
// 543245
//543212345



//1234
//123
//12
//1
#include<stdio.h>
main()
{
	int i,j,s,k;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");	
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);	
		}
		for(k=i+1;k<=5;k++)
		{
			printf("%d",k);		
		}
		printf("\n");
	}
}
