#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a,b:");
	scanf("%d%d\n",&a,&b);
	
	printf("%d\n", (a>b)&&(a<b));
	printf("%d\n", (a<b)||(a>b));
	
}