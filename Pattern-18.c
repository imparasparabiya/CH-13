#include<stdio.h>

main()

{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{		
		if(i%2==0)
		{
			printf("0",i);
		}
		else
		{
			printf("1",i);
		}
		
		
		}
		printf("\n");
	}
}
