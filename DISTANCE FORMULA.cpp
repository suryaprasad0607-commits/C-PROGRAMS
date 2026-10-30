#include<stdio.h>
int main()
{
	float velocity,distance,time;
	printf("Enter the values of velocity and time:");
	scanf("%f%f",&velocity,&time);
	distance=velocity*time;
	printf("distance=%f",distance);
	
}
