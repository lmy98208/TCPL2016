/*дһ�������������������£�

 int fac_bit_count(int n); 

�ú����������⣨int �ͣ����� n������ n!��λ�����磬�� n Ϊ 10���� 10! = 3628800���� 7 λ���ú������� 7��ע��32 λ�� int �����ݿɱ�ʾ���������Ϊ 2^31 - 1 = 2147483647����*/

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