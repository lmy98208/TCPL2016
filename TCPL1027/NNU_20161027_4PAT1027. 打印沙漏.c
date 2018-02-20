/*本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
*****
 ***
  *
 ***
*****

所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。 
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。 
输入格式： 
输入在一行给出1个正整数N（<=1000）和一个符号，中间以空格分隔。 
输出格式： 
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。 
输入样例：

19 *

输出样例：

*****
 ***
  *
 ***
*****
2
*/

#include<stdio.h>
#include<math.h>
int main()
{
int i,n,x;
char c;
//printf("Please input n,fuhao\n");
scanf("%d %c",&n,&c);
(int)(x=sqrt(2*n+2));
x=x-1;
if(x%2==0) x=x-1;
else x=x;                   //printf("%d\n",x) hangshu


int p=1,j,k;
for (i=1;i<=(x-1)/2;i++)
 {
  for (j=1;j<i;j++)
  printf(" ");
  for (k=1;k<=x-p+1;k++)
  printf("%c",c);
    printf("\n");
    p=p+2;
 }                           //shangbufen


int q=1;
for (i=(x-1)/2;i>=0;i--)
 {
  for (j=1;j<=i;j++)
  printf(" ");
  for (k=1;k<=q;k++)
  printf("%c",c);
    q=q+2;

   printf("\n");
 }
int m;                             //xiabufen

m=(x+1)*(x+1)/2-1;
m=n-m;
printf("%d\n",m);
return 0;
}