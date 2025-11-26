#include<stdio.h>
main()
{
	int i,j;
	printf(" enter a number:");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("%d",j);
}
