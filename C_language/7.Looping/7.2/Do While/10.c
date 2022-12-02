#include<stdio.h>
main()
{
    int n,i;
 
    printf("Enter The Number :  ");
    scanf("%d",&n);
    
    i=1;
    do
	{
                
        printf("%d * %d  =  %d \n",n,i,n*i);
        ++i;
    }
     
    while(i<=10);
    
}

