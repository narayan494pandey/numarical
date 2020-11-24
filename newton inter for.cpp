# include<stdio.h>
int main()
{
	float y[20][20],x[20];
	int i,j,n;
	float u,p=1,h,ipt,sum=0;
	printf("enter the no of nodes\n");
	scanf("%d",&n);
	printf("enter the values of x y\n");
	for(i=0;i<n;i++)
	{
	
	scanf("%f%f",&x[i],&y[i][0]);
   }
   for(j=1;j<n;j++)
   {
   	for(i=0;i<n-j;i++)
   	{
   		y[i][j]=y[i+1][j-i]-y[i][j-i];
	   }
   }
  
   for(i=0;i<n;i++)
  {
  	
  	printf("%f\t",x[i]);
      for(j=0;j<n;j++)
	  {
	  	printf("%f\t",y[i][j]);
		  }	
		  printf("\n");
  }
   printf("enter the interpolatig point");
   scanf("%f",&ipt);
  h=x[1]-x[0];
  u=(ipt-x[0])/h;
  for(i=0;i<n;i++)
  {
  	p=p*(u-i+1)/i;
  	sum=sum+p*y[0][i];
  }
  sum=sum+y[0][0];
  printf("%f",sum);
  return 0;
  
}
