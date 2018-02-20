/*编写一个程序，读入一个十进制的整型变量，分别输出其二进制、八进制、十六进 制形式。*/

#include<stdio.h>
int main()
{
int a[32];
int b,c,i=1;
scanf("%d",&c);
b=c;


while(c!=0)
{    
a[i]=c%2;
c=(c/2);
i=i+1;
    }

    int n=i-1;


for(i=n;i>=1;i=i-1)
printf("%d",a[i]);

        printf("\n");
        printf("%o\n%x\n",b,b);
return 0;
}