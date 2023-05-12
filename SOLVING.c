#include<stdio.h>
#include<string.h>
int main()
{
	int credit_rating;
	int loan;
	char level;
	printf("enter the customers creditability rating=");
	scanf("%d",&credit_rating);
	printf("enter the amount of loan needed=");
	scanf("%d",&loan);
	if(loan>100000)
	{
	printf("approach the bank for more information \n");
	}
	else
	
	if((credit_rating>10000)&&(loan>9999))
	{
	if((credit_rating<30001)&&(credit_rating>9999))
	{
	    level='A';
    }
	if((credit_rating>30001)&&(credit_rating<50000))
    {
	    level='B';
	}
    if((credit_rating>50001)&&(credit_rating<100001))
	{
	    level='C';
	}
    }
    else
    printf("you are not valid");

	switch(level)
	{
	case 'A':printf("the loan granted is 20000");
	break;
	case 'B':printf("the loan granted is 42000");
	break;
	case 'C':printf("the loan granted is 62000");
	break;
	default:printf("loan granted is 100000");
    }
return 0;
}






