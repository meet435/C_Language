#include<stdio.h>

main()
{
	int i,j,n,sum=0,avg;
	
	printf("Enter the Rows and Columns :- ");
	scanf("%d",&n);
	
	int array[n][n];
		
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			printf("Enter array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
			}
		}
	
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{			
			printf("%d",array[i][j]);
			}			
			printf("\n");		
		}	
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{			
				sum = sum + array[i][j];
			}					
		}		
		printf("Addition of all elements :- %d",sum);
}