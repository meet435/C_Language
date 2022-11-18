#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,z,ans;
   clrscr();
   printf("The value of the x:");
   scanf("%d",&x);
   printf("The value of the y:");
   scanf("%d",&y);
   printf("The value of the z:");
   scanf("%d",&z);
   ans=(x+y+z)*(x+y+z);
   printf("The Answer is :%d",ans);
   getch();
}
