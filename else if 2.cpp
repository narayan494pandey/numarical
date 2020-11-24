# include<stdio.h>
int main()
{
	int yos,salary,qual,pg=1,g=0;
	char gn,m,f;
	printf("enter the year of service\n");
	scanf("%d", &yos);
	printf("enter the gender\n");
	scanf("%c", &gn);
	printf("enter the qualification\n");
	scanf("%d", &qual);
	if((gn=='m')&&(qual==1)&&(yos>=10))
	  salary=15000;
	else if((gn=='m')&&(qual==0)&&(yos>=10)||(gn=='m')&&(qual==1)&&(yos<10))
	   salary=10000;
    else if((gn=='m')&&(qual==0)&&(yos<10))
    salary=7000;
    else if((gn=='f')&&(qual==1)&&(yos>=10))
        salary=12000;
	else if((gn=='f')&&(qual==0)&&(yos>=10))	    	
	    salary=9000;
	else if((gn=='f')&&(qual==1)&&(yos<10))
	     salary=10000;
    else if((gn=='f')&&(qual==0)&&(yos<10))
         salary=6000;
	printf ("salary is\n %d",salary);
	return 0;
}
    

