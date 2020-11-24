#include<stdio.h>
/* printf farn - cels table
  for farh= 0, 20, ......,300 */
  main()
  {
  	int fahr,celsius;
  	int lower,upper,step;
  	lower=0; /*lower value of temperature table*/
  	upper=300; /*upper value of temperture table*/
  	step=20; /*step length*/
  	fahr=lower;
  	while(fahr<=upper)
  	{
  		celsius=5*(fahr-32)/9;
  		printf("%d\t%d\n",fahr,celsius);
  		fahr=fahr+step;
	  }
  	
  }

