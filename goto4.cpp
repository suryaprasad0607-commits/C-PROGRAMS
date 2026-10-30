#include<stdio.h>
int main()
{
	int number;
	read:
		printf("Enter the number:");
		scanf("%d",&number);
		if(number>0)
		{
			printf("The given number is positive..");
		}
		else if(number<0)
		{
			printf("The given number is negative..");
			
		}
		else
		{
			goto end;
		}
		goto read;
		end:
			printf("The entered value is 0");
			
	return 0;
}