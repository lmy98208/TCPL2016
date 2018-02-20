/*打印出 99 乘法表。控制好输出格式，使得你的输出做到对齐、美观。*/

#include<stdio.h>
int main()
{
int x,y,z;
for(x=1;x<10;x++)
{
    for(y=1;y<=x;y++)
        {z=x*y;
    printf("%dx%d=%d ",x,y,z);}
printf("\n");
}
return 0;
}