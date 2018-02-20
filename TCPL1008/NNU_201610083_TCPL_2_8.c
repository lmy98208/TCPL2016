/*练习 2-8 编写一个函数 rightrot(x, n)，该函数返回将 x 循环右移（即从最右端 移出的位将从最左端移入）n（二进制）位后所得到的值。*/

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