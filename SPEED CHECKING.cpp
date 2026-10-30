#include<stdio.h>
int main()
{
	int car,bike;
	printf("Enter the speeds of car and bike:");
	scanf("%d%d",&car,&bike);
	if(car>bike)
	{
		printf("Car is more faster then bike");
		
	}
	else if(bike>car)
	{
		printf("Bike is more faster then car");
		
	}
	else if(bike==car)
	{
		printf("Both the vehicles are the same speed");
		
	}
	else 
	{
		printf("Invalid information")
	}
}