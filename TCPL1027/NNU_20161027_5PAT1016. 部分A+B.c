/*������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6�� 
�ָ���A��DA��B��DB�����д�������PA + PB�� 
�����ʽ�� 
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010�� 
�����ʽ�� 
��һ�������PA + PB��ֵ�� 
��������1�� 
3862767 6 13530293 3 
�������1�� 
399 
��������2�� 
3862767 1 13530293 8 
�������2�� 
0*/

#include<stdio.h>

#include<string.h>



int main(void)

{
    int i,b,j,k,temp,count=0,sum=0;
    char A[12];char a[12];
    char D;

    b=0;
    for(i=1;i<=2;i++)
    {
        k=0; 
        scanf("%s",A);
        scanf(" %c",&D);


        temp=strlen(A);
        //printf("%d",temp);
        for(j=0;j<temp;j++)
        {
            if(D==A[j])
            {
                count++;
            }
        }
        //printf("%d\n",count);
        if(count!=0)
        {
            for(j=1;j<=count;j++)
            {
                k=k*10+D-'0';
            }
            sum = sum + k;
            count = 0;
        }
    }
    printf("%d\n",sum);
    return 0;
} 