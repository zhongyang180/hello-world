#include<stdio.h>
int main(void)
{
	int a;
	printf("������_�£�"); 
	scanf("%d",&a);
	switch(a)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			printf("�������31�졣");
			break;
		case 2:
		    //printf("�������28�졣");
		    int b;
		    printf("��������һ�ꣿ");
		    scanf("%d",&b);
		    if ((b%4==0&&b%100!=0)||b%400==0)
		    printf("���������꣬������29�졣");
		    else
		    printf("���겻�����꣬������28�졣"); 
			break;
		case 4:case 6:case 9:case 11:
		    printf("�������30�졣");
			break;
		default:
		    printf("û������¡�");
			break;			
	} 
	return 0;
}
