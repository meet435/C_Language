#include<stdio.h>

main()
{
	int i,j,n,sum=0,column;
	
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
		
		printf("Enter the column you want to sum :- ");
		scanf("%d",&column);
		
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{			
				if(j==column)
				{
					sum = sum + array[i][j];
				}
			}					
		}		
		printf("Addition of Column wise elements :- %d",sum);
}