#include<stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter a integer");
	scanf("%d",&x);
	printf("enter floating point number");
	scanf("%f",&y);
	printf("enter a character");
	scanf("%c",&ch);
	printf("enter a word");
	scanf("%s",&s);
	printf("the integer is %d\n",x);
	printf("the floating point number is %f\n",y);
	printf("the character is %c\n",ch);
	printf("the string is %s",s);
}
