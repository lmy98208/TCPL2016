/*��ӡ�� 99 �˷������ƺ������ʽ��ʹ���������������롢���ۡ�*/

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