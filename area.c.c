#include<stdio.h>
#include<math.h>
main()
{
	int r,s,l,b,ba,h,PI;
	float Carea,Sarea,Rarea,Tarea;
	PI=3.14;
	printf("enter the radius:");
	scanf("%d",&r);
	printf("enter the side:");
	scanf("%d",&s);
	printf("enter the length and breadth:");
	scanf("%d %d",&l,&b);
	printf("enter the base and height:");
	scanf("%d %d",&ba,&h);
	Carea=PI*r*r;
	printf("the area of circle is %f\n",Carea);
	Sarea=s*s;
	printf("the area of square is %f\n",Sarea);
	Rarea=l*b;
	printf("the area of rectangle is %f\n",Rarea);
	Tarea=1/2.0*ba*h;
	printf("the area of triangle is %f\n",Tarea);
	
}
