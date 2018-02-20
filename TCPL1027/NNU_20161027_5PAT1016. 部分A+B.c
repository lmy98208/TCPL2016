/*正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。 
现给定A、DA、B、DB，请编写程序计算PA + PB。 
输入格式： 
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。 
输出格式： 
在一行中输出PA + PB的值。 
输入样例1： 
3862767 6 13530293 3 
输出样例1： 
399 
输入样例2： 
3862767 1 13530293 8 
输出样例2： 
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