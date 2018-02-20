/*练习 2-7 编写一个函数 invert(x, p, n)，该函数返回对 x 执行下列操作后的结 果值：将 x 中从第 p 位开始的 n 个（二进制）位求反（即，1 变成 0，0 变成 1），x 的其余各 位保持不变。*/

#include<stdio.h>
int main()
{
int p,n;
unsigned x;
p=2,n=3,x=60;
x=x^~(~0<<n)<<(p+1-n);
printf("%d\n",x);
return 0;
}