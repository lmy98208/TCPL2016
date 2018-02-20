/*读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。 
输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。 
输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。 
输入样例： 
1234567890987654321123456789 
输出样例： 
yi san wu*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int i=0,sum=0,temp;
    scanf("%s",a);
    temp=strlen(a);
//  printf("%d\n",temp);
    while(i<temp)
    {
        sum=sum+a[i]-48;
        i++;
    }


    int A[3]={sum%10,sum/10%10,sum/100};
    if(A[2]==0&&A[1]==0&&A[0]==0) printf("ling\n");
    else{
        for(i=2;A[i]==0;i--)
            A[i]=A[i];
      while (i>=0)
    {


        switch(A[i])
        {
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
                case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            default:printf("jiu");
        }
        if(i!=0) printf(" ");
        else printf("\n");
        i--;
    }}
//  printf("%d\n",sum);
    return 0;
}