#include<stdio.h>
int main()
{
	int range=95;
	int capacity=200;
	printf("%d\n",range>60 && capacity<250);
	printf("%d\n",range>55 && capacity<190);
	printf("%d\n",range>60 || capacity<180);
	printf("%d\n",range<30 || capacity>150);
	printf("%d\n",range>90 || capacity>190);
	printf("%d\n",range>110|| capacity<110);
	
}