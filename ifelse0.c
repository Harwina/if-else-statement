#include<stdio.h>
main()
{
	int a;
	printf("enter the value of a=");
	scanf("%d",&a);
	
	if (a<0)
	{
		printf("this number is negative");
	}
	else if(a>0)
	{
		printf("this number is positive");
	}
	else 
	{
		printf("this number is neutral");
	}
}