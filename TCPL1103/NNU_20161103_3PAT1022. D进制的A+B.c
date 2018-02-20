/*输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。 
输入格式： 
输入在一行中依次给出3个整数A、B和D。 
输出格式： 
输出A+B的D进制数。 
输入样例： 
123 456 8 
输出样例： 
1103*/

#include<stdio.h>
int main()
{
    int a,b,sum,n;
    int i=0,D[33];
    scanf("%d %d %d",&a,&b,&n);
        sum=a+b;
    if(sum==0) printf("0\n");
        else
    {
        while(sum>0)
        {
            D[i]=sum%n;
            sum=sum/n;
            i++;
        }
        i=i-1;
        while(i>=0)
        {
            printf("%d",D[i]);
            i--;
        }
    }
    return 0;
}