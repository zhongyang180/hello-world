#include<stdio.h>
int main(void)
{
	int a;
	printf("现在是_月？"); 
	scanf("%d",&a);
	switch(a)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			printf("这个月有31天。");
			break;
		case 2:
		    //printf("这个月有28天。");
		    int b;
		    printf("今年是哪一年？");
		    scanf("%d",&b);
		    if ((b%4==0&&b%100!=0)||b%400==0)
		    printf("今年是闰年，二月有29天。");
		    else
		    printf("今年不是闰年，二月有28天。"); 
			break;
		case 4:case 6:case 9:case 11:
		    printf("这个月有30天。");
			break;
		default:
		    printf("没有这个月。");
			break;			
	} 
	return 0;
}
