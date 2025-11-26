//max of 3 numbers
#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("enter 3 values");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("the max number is %d",max);
}
