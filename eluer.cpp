#include<stdio.h>
float fun(float x,float y)
{
    float f;
    f=y-x/y+x;
    return f;
}
int main()
{
    float a,b,x,y,h,t,k;
    printf("\nEnter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&a,&b,&h,&t);
    x=a;
    y=b;
    printf("\n  x\t  y\n");
    while(x<t)
    {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
    return 0;
}
