/*����Ҫ���д���򣬼���4�������ĺ���ƽ��ֵ����Ŀ��֤����������������ͷ�Χ�ڡ� 
�����ʽ: 
������һ���и���4������������Կո�ָ��� 
�����ʽ: 
��һ���а��ո�ʽ��Sum = ��; Average = ƽ��ֵ��˳���������ƽ��ֵ������ƽ��ֵ��ȷ��С�����һλ�� 
��������: 
1 2 3 4 
�������: 
Sum = 10; Average = 2.5*/

#include<stdio.h>
int main()
{
int a,b,c,d,sum;
float average;
printf("Please input 4 number\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
sum=a+b+c+d;
average=sum*1.0/4;
printf("Sum = %d\n",sum);
printf("Average = %.1f\n",average);
return 0;
}