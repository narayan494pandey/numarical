# include<stdio.h>
# include<math.h>
float f(float x)
{
	return ((x*x)+x-7);
}

int main()
{
	float a,b,flag,x;
	int i;
	for(i=0;i<50;i++)
	{
		if(f(i)*f(i+1)<0)
		break;
	}
	a=i;
	b=i+1;
	do
	{
		flag = a;
		x=b-(f(b)/(f(b)-f(a))*(b-a));
		a=x;
	}
	while(fabs(flag-x)>0.00001);
	printf("%f",x);
	return 0;
}
