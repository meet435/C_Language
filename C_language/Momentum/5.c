#include<stdio.h>
#include<conio.h>
main()
{
	
    int unit;
    float a,b,c;

//    clrscr();
    
    printf("ENTER THE UNIT : ");
    scanf("%d", &unit);

    if(unit<=50)
    {
        a=unit*0.50;
    }
    else if(unit<=150)
    {
        a=25+((unit-50)*0.75);
    }
    else if(unit<=250)
    {
        a=100+((unit-150)*1.20);
    }
    else
    {
        a=220+((unit-250)*1.50);
    }
    
    c=a*0.20;
    
    b=a+c;
    
    printf("Your Electricity Bill = Rs. %.2f",b);

    getch();
}
