#include<stdio.h>
#include<conio.h>
main()
{
    int A;
  clrscr();
    printf("ENTER THE NUMBER :- ");
    scanf("%d",&A);
    
    if(A<0)
    {
    	printf("GIVEN NUMBER IS NEGETIVE");
	}
    else if(A==0)
    {
    	printf("GIVEN NUMBER IS NEUTRAL");
    }
    else
    {
    	printf("GIVEN NUMBER IS POSITIVE");
    }
    getch();
}

