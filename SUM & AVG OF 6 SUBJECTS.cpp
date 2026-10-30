#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,sum,average;
	printf("Enter the marks of your  6 subjects:");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    sum=a+b+c+d+e+f;
	average=sum/2;
	printf("sum=%f",sum);
	printf("average=%f",average);
	
}