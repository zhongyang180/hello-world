#include<stdio.h>
int main(void)
{
	double a,b,c,d,m,n;
	printf("这个程序用来求二元一次方程的解。\n a*x+b*y=m\n c*x+d*y=n\n");
	printf("请输入a=");
	scanf("%lf",&a); 
	printf("请输入b=");
	scanf("%lf",&b); 
	printf("请输入m=");
	scanf("%lf",&m); 
	printf("请输入c=");
	scanf("%lf",&c); 
	printf("请输入d=");
	scanf("%lf",&d); 
	printf("请输入n=");
	scanf("%lf",&n); //可以一次性输入6个  scanf("%lf %lf%lf%lf%lf%lf",&a,&b……); 
	if (a*d-b*c==0)
	{
	if(m/a==n/c)
	printf("你输入了两个等价的方程。将有无穷多解。");
	else 
	printf("该方程无解。");
	}
	else
	{
	printf("x=%lf\n",(m*d-n*b)/(a*d-b*c));
	printf("y=%lf",(m*c-a*n)/(b*c-a*d));
    }
    return 0;
}
