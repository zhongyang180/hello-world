#include<stdio.h>
int main(void)
{
	double a,b,c,d,m,n;
	printf("��������������Ԫһ�η��̵Ľ⡣\n a*x+b*y=m\n c*x+d*y=n\n");
	printf("������a=");
	scanf("%lf",&a); 
	printf("������b=");
	scanf("%lf",&b); 
	printf("������m=");
	scanf("%lf",&m); 
	printf("������c=");
	scanf("%lf",&c); 
	printf("������d=");
	scanf("%lf",&d); 
	printf("������n=");
	scanf("%lf",&n); //����һ��������6��  scanf("%lf %lf%lf%lf%lf%lf",&a,&b����); 
	if (a*d-b*c==0)
	{
	if(m/a==n/c)
	printf("�������������ȼ۵ķ��̡����������⡣");
	else 
	printf("�÷����޽⡣");
	}
	else
	{
	printf("x=%lf\n",(m*d-n*b)/(a*d-b*c));
	printf("y=%lf",(m*c-a*n)/(b*c-a*d));
    }
    return 0;
}
