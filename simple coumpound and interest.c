//simple interest
#include<stdio.h>
#include<math.h>
 int main()
{
	float p,t,r,si,ci;
	printf("enter a principle,time,rate:");
	scanf("%f%f%f",&p,&t,&r);
	si=p*t*r/100;
	ci=p*pow(1+r/100,t)-p;
	printf("simple interest=%f\n",si);
	printf("compound interest=%f\n",ci);
	
	
	
	
}
