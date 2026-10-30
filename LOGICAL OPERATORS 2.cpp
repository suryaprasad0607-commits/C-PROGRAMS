#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("%d\n",(a>b) && (a<c));
	printf("%d\n",(b>a) && (b<c));
	printf("%d\n",(b>c) && (a>c));
	printf("%d\n",(a>c) || (b>c));
	printf("%d\n",(a<b) || (a>b));
	
	
	
}