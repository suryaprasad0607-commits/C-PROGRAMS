#include <stdio.h>
int main()
{
	int opt1,opt2;
	char opr;
	printf("Enter Arithmetic operator:");
	scanf("%c",&opr);
	printf("Enter two operands:");
	scanf("%d%d",&opt1,&opt2);
	switch (opr)
	{
		case '+':
			printf("%d+%d=%d",opt1,opt2,opt1+opt2);
			break;
	    case '-':
	    	printf("%d-%d=%d",opt1,opt2,opt1-opt2);
	    	break;
	    case '*':
	    	printf("%d*%d=%d",opt1,opt2,opt1*opt2);
	    	break;
	    case '/':
	    	printf("%d/%d=%d",opt1,opt2,opt1/opt2);
	    	break;
	    case '%':
	    	printf("%d%%d=%d",opt1,opt2,opt1%opt2);
	    	break;
	    default:
	    	printf("You have entered an invalid arithmatic operation..");
	    
	    	
	}
	 return 0;
}