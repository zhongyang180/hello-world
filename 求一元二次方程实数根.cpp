#include<stdio.h>
#include<math.h>
void CalculateRealRoot(double a1,double b1,double c1);

int main(void)
{double a,b,c;
  printf("这个程序用来求一元二次方程的根。\n即ax^2+bx+c=0\n请输入a");
  scanf("%lf",&a);
  printf("请输入b");
  scanf("%lf",&b);
  printf("请输入c");
  scanf("%lf",&c);
  CalculateRealRoot(a,b,c);
  return 0; 
   
}
void CalculateRealRoot(double a1,double b1,double c1)
{ double delta,x1,x2;
  delta=b1*b1-4*a1*c1;
  if (delta<0)
  {printf("没有实数根"); 
  }
  else
  {if(delta==0)
  {x1=-b1/(2*a1);
   x2=-b1/(2*a1);
   printf("x1=%lf,x2=%lf.\n",x1,x2);
  }
  else
  {x1=(-b1+sqrt(delta));
   x2=(-b1+sqrt(delta));
   printf("x1=%lf,x2=%lf.\n",x1,x2);
  }
  }
}
