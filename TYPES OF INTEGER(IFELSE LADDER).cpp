#include<stdio.h>
int main()
{
	int number;read:
		printf("Enter a number:");
		scanf("%d",&number);
		if (number>0)
		{
			printf("number is +ve\n");
		}
		else if(number<0)
		{
			printf("number is -ve\n");
	
		}
		else
		{
			goto end;
		
		}
		goto read;end:
			printf("you entered zero!");
		return 0;
}