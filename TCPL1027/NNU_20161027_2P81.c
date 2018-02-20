/*实现教材 P81 例 4.13，并思考：判断一个整数 n 是否为素数时，是否一定需要判 断 n 不能被 2~n-1 之间的任何一个整数整除？给出一个优化的方法。*/

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