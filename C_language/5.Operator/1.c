#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,ans;
   clrscr();
   printf("The value of the x:");
   scanf("%d",&x);
   printf("The value of the y:");
   scanf("%d",&y);
   ans=(x+y)*(x+y);
   printf("The Answer is :%d",ans);
   getch();
}
