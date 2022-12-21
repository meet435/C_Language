#include<stdio.h>

main()
{
	int i,j,sum=0;
	
	
	int array[5][5];
		

	for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{			
				printf("Enter array[%d][%d] : ",i,j);
				scanf("%d",&array[i][j]);
			}			 
			printf("\n");		
		}
		
	printf("Inner matrix :-\n");
	
	for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{			
				if(i==0 || j==0 || i==4 || j==4)
				{
					printf(" ");
				}
				else
				{
					printf("%d",array[i][j]);
					sum=sum + array[i][j];	
							
				}	
			}
				printf("\n");					
		}
		
		
		printf("Addition of inner elements :- %d",sum);
}
