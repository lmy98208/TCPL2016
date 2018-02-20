/*写一个函数，函数声明如下： 
int is_prime(int n); 
该函数接受任意（int 型）整数 n，判断 n 是否为素数。若是，返回 0；否则，返回-1。在主 函数中使用该函数，打印出第 100 至第 1000 个素数（第一个素数为 2）。*/

#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
    int m,i=1,n=2;
    int a[1001];
    for (n=2;i<=1000;n++)
    {
        m=is_prime(n);
        if (m==0){
            a[i]=n;
            i++;
        }
    }
    for (i=100;i<=1000;i++)
    printf("%d\n",a[i]);
    return 0;
}


int is_prime(int n)
{
    int p;
    int k;
    if((n&1)==0&&n>2) return -1;
    else if (n==2) return 0;
    else{
        for(p=3;p<=sqrt(n);p++)
            if(n%p==0) break;
        if (p>sqrt(n))
        return 0;
        else return -1;
    }
}