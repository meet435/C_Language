#include<stdio.h> 
#include<conio.h> 
main() 
{
    int a,b,c;
    clrscr();
    printf("Enter the value of A:-");
    scanf("%d",&a);
    printf("Enter the value of B:-");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf(" value of a : %d ",a);
    printf("\n value of b : %d ",b);
    getch();
}

