/*编写一个程序，使用位运算，交换两个整数的数值。*/

#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d %d\n",a,b);
return 0;
}