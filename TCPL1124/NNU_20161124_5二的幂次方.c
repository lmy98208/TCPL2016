/*2 的幂次方判断。

int is_pow2(int n); 

接受一个整数，若该数为 2 的幂次方（1,2,4,8..） ，返回 0；否则，返回-1（提示： 使用位运算） 。*/

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