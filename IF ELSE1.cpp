# include<stdio.h>
int main()
{
	int item,price,totalexp;
	printf("enter the number of item");
	scanf("%d", &item);
	printf("enter the price");
	scanf("%d", &price);
	if(item>1000)
	{
		totalexp=(price*item)-(price*item/10);
	}
	else
	{
		totalexp=(price*item);
		
	}
	printf("totalexp is %d",totalexp);
	
	return 0;
}
