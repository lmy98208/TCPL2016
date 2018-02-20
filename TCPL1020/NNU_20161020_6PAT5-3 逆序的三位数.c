/*程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。 
输入格式： 
每个测试是一个3位的正整数。 
输出格式： 
输出按位逆序的数。 
输入样例： 
123 
输出样例： 
321*/

#include<stdio.h>
int main()
{
char a,b,c;
scanf("%c%c%c",&a,&b,&c);
if(c!=48)
printf("%c%c%c\n",c,b,a);
else if((c==48&&b==48))
printf("%c\n",a);
else if((c==48&&b!=48))
printf("%c%c\n",b,a);
return 0;
}