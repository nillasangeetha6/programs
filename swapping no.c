#include <stdio.h>
int main()
{
	int a,b, temp;
	printf("enter 2 numbers:");
	scanf("%d %d",&a,&b);
	//swap
	temp=a;
	a=b;
	b=temp;
	printf("after swapping: a=%d,b=%d",a,b);
	return 0;
	
}
