/*��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C�� 
�����ʽ�� 
�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ��� 
�����ʽ�� 
��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ���� 
���������� 
4 
1 2 3 
2 3 4 
2147483647 0 2147483646 
0 -2147483648 -2147483647 
��������� 
Case #1: false 
Case #2: true 
Case #3: true 
Case #4: false*/

#include<stdio.h>
int main()
{
    long long int a[10],b[10],c[10];
    int i=0,n;
    scanf("%d",&n);
        while(i<n)
        {
            scanf("%lld %lld %lld",&a[i],&b[i],&c[i]);
            i++;
        }
        i=0;
//      printf("%d %d %d\n",a[i],b[i],c[i]);
        while(i<n)
        {
            if(a[i]+b[i]>c[i])
                printf("Case #%d: true\n",i+1);
            else printf("Case #%d: false\n",i+1);
            i++;
        }
    return 0;
}