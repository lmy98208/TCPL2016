/*写一个函数，函数声明如下：

 int fac_bit_count(int n); 

该函数接受任意（int 型）整数 n，返回 n!的位数。如，若 n 为 10，则 10! = 3628800，共 7 位，该函数返回 7（注：32 位的 int 型数据可表示的最大整数为 2^31 - 1 = 2147483647）。*/

#include<stdio.h>
int fac_bit_count(int n);


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fac_bit_count(n));
    return 0;
}


int fac_bit_count(int n)
{
    int i;
    unsigned long long m=1;
    for (n=n;n>0;n--)
        m=m*n;
    for (i=0;m!=0;i++)
        m=m/10;
    return i;
}