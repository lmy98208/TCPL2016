/*ʵ�ֽ̲� P81 �� 4.13����˼�����ж�һ������ n �Ƿ�Ϊ����ʱ���Ƿ�һ����Ҫ�� �� n ���ܱ� 2~n-1 ֮����κ�һ����������������һ���Ż��ķ�����*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf ("Please input n(n>3)\n");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0) break;
        if(i<n) printf("It's not a prime number\n");
    else printf("It's a prime number\n");
            return 0;
    }

//false