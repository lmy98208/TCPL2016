/*��ϰ 2-8 ��дһ������ rightrot(x, n)���ú������ؽ� x ѭ�����ƣ��������Ҷ� �Ƴ���λ������������룩n�������ƣ�λ�����õ���ֵ��*/

#include<stdio.h>
int main()
{
unsigned short x,a,b;
short int n;
x=60,n=4;
a=x>>n;
b=x<<(16-n);
x=a|b;
printf("%d\n",x);
return 0;
}