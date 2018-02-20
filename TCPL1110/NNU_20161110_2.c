/*写一个函数，函数声明如下：

 void triangle_judge(int a, int b, int c); 

该函数接受三个整数值，判断其是否可以构成三角形。若可以，请输出三角形类型， 包括：普通三角形、等腰三角形、等边三角形。并进行多组测试，以验证你的函数。*/

#include<stdio.h>
void triangle_judge(int a, int b, int c);


int main()
{
    int a,b,c;
    char triangle;
    scanf("%d %d %d",&a,&b,&c);
    triangle_judge(a,b,c);
    return 0;
}


void triangle_judge(int a,int b,int c)
{
    if(a+b<c||a+c<b||c+b<a)
        printf("No!\n");
    else if (a==b||b==c||a==c)
    {
        if (a==b&&b==c)
            printf("Equilateral triangla.\n");
        else printf("Isosceies triangle.\n");
    }
    else printf("Normal triangle.\n");
}