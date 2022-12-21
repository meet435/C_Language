#include<stdio.h>
ADDITION()
{
	int a,b;
	printf("Enter the A:");
	scanf("%d",&a);
	printf("Enter the B:");
	scanf("%d",&b);
		
	
	return a+b;
}
SUBSTRACTION()
{
	int a,b;
	printf("Enter the A:");
	scanf("%d",&a);
	printf("Enter the B:");
	scanf("%d",&b);
		
	
	return a-b;
}
MULTIPLICATION()
{
	int a,b;
	printf("Enter the A:");
	scanf("%d",&a);
	printf("Enter the B:");
	scanf("%d",&b);
		
	
	return a*b;
}
DIVISION()
{
	int a,b;
	printf("Enter the A:");
	scanf("%d",&a);
	printf("Enter the B:");
	scanf("%d",&b);
		
	
	return a/b;
}
main()
{
	
	int choice;
	do
	{
		printf("PRESS 1 FOR ADDITION\n");
		printf("PRESS 2 FOR SUBSTRACTION\n");
		printf("PRESS 3 FOR MULTIPLICATION\n");
		printf("PRESS 4 FOR DIVISION\n");
		printf("PRESS 0 FOR EXIT\n");
		
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("ADDITION = %d\n",ADDITION());
				break;
			case 2:
				printf("SUBSTRACTION = %d\n",SUBSTRACTION());
			break;
			case 3:
				printf("MULTIPLICATION = %d\n",MULTIPLICATION());
				break;
			case 4:
				printf("DIVISION = %d\n",DIVISION());
				break;	
			case 0:
				printf("EXIT\n");
			break;	       
			default:
				printf("INVALID");
			break;			
		}
	}
	while(choice!=0);
	

	
}