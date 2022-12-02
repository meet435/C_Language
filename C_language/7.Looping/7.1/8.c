#include<stdio.h>
#include<conio.h>

main()
{
	
		int a,n,sum=0;
//		clrscr();

		printf("Enter your Ending number : ");
		scanf("%d",&n);
		
		
		a=1;
		while(a<=n)
		{
			printf("%d\n",a);
			sum=sum+a;
			a++;
		}
			printf("Sum =%d",sum);
//		getch();
}