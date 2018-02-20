/*练习 2-6 编写一个函数 setbits(x, p, n, y)，该函数返回对 x 执行下列操作后 的结果值：将 x 中从第 p 位开始的 n 个（二进制）位设置为 y 中最右边 n 位的值，x 的其余 各位保持不变。*/

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