/*��ϰ 2-6 ��дһ������ setbits(x, p, n, y)���ú������ض� x ִ�����в����� �Ľ��ֵ���� x �дӵ� p λ��ʼ�� n ���������ƣ�λ����Ϊ y �����ұ� n λ��ֵ��x ������ ��λ���ֲ��䡣*/

#include<stdio.h>
int main()
{
  unsigned a,b,x,y;
  int p,n;
  x=12,y=8,p=2,n=3;
  a=x&~(~(~0<<n)<<(p+1-n));
  b=y&~(~0<<n)<<(p+1-n);
  x=a|b;
  printf("%d\n",x);
  return 0;
}