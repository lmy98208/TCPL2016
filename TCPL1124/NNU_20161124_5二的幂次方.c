/*2 ���ݴη��жϡ�

int is_pow2(int n); 

����һ��������������Ϊ 2 ���ݴη���1,2,4,8..�� ������ 0�����򣬷���-1����ʾ�� ʹ��λ���㣩 ��*/

#include<stdio.h>
int is_pow2(int n);


int main()
{
    int n;
    scanf("%d",&n);
    printf("Returned value is:%d.\n",is_pow2(n));
    return 0;
}
int is_pow2(int n)
{
        if (n&1==1||n<=0) return -1;
        else {
                while (n>1){
                        if(1&n==1) return -1;
                        else n=n<<1;
                }
        }return 0;
}