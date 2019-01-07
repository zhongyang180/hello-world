#include <stdio.h>
int h(int p);
int pfh(int q);
int cj(int z);
int ss(int r);
int main()
{
	int a1,a2,a3,b1;
	for(int i=100;i<10000;i++)
	{
		a1=sum(i);
		a2=pfh(i);
		a3=cj(i);
		b1=ss(i)+ss(a1)+ss(a2)+ss(a3);
		if(b1==0)
		printf("%d是超级素数\n",i);
		else
		continue;
	}

}
int sum(int p)//计算各个位上的数的和 
{
	int a=p%10;
	int b=p/10%10;
	int c=p/100%10;
	int d=p/1000;
	int s=a+b+c+d;
	return s;
}
int pfh(int q)//求平方和 
{
	int a=q%10;
	int b=q/10%10;
	int c=q/100%10;
	int d=q/1000;
	int t=a*a+b*b+c*c+d*d;
	return t;
}
int cj(int z)//把各个位上的数相乘 
{
	int w;
	int a=z%10;
	int b=z/10%10;
	int c=z/100%10;
	int d=z/1000;
	if(d!=0)w=a*b*c*d;
	else w=a*b*c;
	return w;	
}
int ss(int r)//判断是否是素数 
{
	int a[9999],m,x=1,y=0;
	if(r==0)
	return x;
	for(int i=0;i<r-1;i++)
	{
		a[i]=i+2;
		m=r%a[i];
		if(a[i]==r)
		{
			return y;
			break;
		}
		if(m==0)
		{
			return x;
			break;
		}
		
	}
}
