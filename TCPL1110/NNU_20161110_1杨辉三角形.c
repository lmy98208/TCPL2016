/*写一个程序，打印出杨辉三角形。控制好输出格式，使得你的输出做到对齐、美观。*/

#include<stdio.h>
#define M 10
int main()
{
    int a[M][M],i,j;
    for (i=0;i<M;i++)
    {
        for(j=0;j<2*M-2*i+1;j++) printf(" ");
        for(j=0;j<=i;j++)
            printf("%-4d",(a[i][j]=(i==j||j==0)?1:a[i-1][j]+a[i-1][j-1]));
        printf("\n");
        }
    return 0;
}