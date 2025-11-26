#include<stdio.h>
main()
{
	int n1,n2;
	printf("enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("the LCM of %d and %d is %d",n1,n2,LCM(n1,n2));
}
int LCM(int n1,int n2)
{
	if(n2!=0)
	{
		return LCM(n2,n1%n2);
	}
	else 
	{
		return n1;
	}
}
