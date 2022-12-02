#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	
	printf("PRESS M FOR MONDAY\n");
	printf("PRESS T FOR TUESDAY\n");
	printf("PRESS W FOR WEDNESDAY\n");
	printf("PRESS TH FOR THRUSDAY\n");
	printf("PRESS F FOR FRIDAY\n");
	printf("PRESS S FOR SATURDAY\n");
	printf("PRESS SUN FOR SUNDAY\n");
	
	printf("\n");
	
	printf("ENTER THE NUMBER :- ");
	scanf("%c",&a);
	
	printf("\n");
	
	switch(a)
	{
		case 'M': 
		case 'm':
			printf("MONDAY");
			break;
		case 'T':
		case 't':
			printf("TUESDAY");
			break;
		case 'W':
		case 'w':
			printf("WEDNESDAY");
			break;
		case 'TH':
		case 'th':	
			printf("THRUSDAY");
			break;
		case 'F':
		case 'f':	
			printf("FRIDAY");
			break;
		case 'S':
		case 's':	
			printf("SATURDAY");
			break;
		case 'SUN':
		case 'sun':	
			printf("SUNDAY");
			break;	
		default:
			printf("INVLID NUMBER");					
	}
	
	getch();
}

