#include<stdio.h>
int main()
{
	int speed;
	read:
	printf("Enter your speed:");
	scanf("%d",&speed);
	if(speed>120)
	{
		printf("your speed is dangerous");
		
	}
	else if(speed<120)
	{
		printf("Your speed is safe");
		
	}
	
	else
	{
		goto end;
	}
	goto read;
	end:
		printf("your entered the invalid information");
	return 0;
}