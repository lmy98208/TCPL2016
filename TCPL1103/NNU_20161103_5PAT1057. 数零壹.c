/*给定一串长度不超过105的字符串，本题要求你将其中所有英文字母的序号（字母a-z对应序号1-26，不分大小写）相加，得到整数N，然后再分析一下N的二进制表示中有多少0、多少1。例如给定字符串“PAT (Basic)”，其字母序号之和为：16+1+20+2+1+19+9+3=71，而71的二进制是1000111，即有3个0、4个1。 
输入格式： 
输入在一行中给出长度不超过105、以回车结束的字符串。 
输出格式： 
在一行中先后输出0的个数和1的个数，其间以空格分隔。 
输入样例： 
PAT (Basic) 
输出样例： 
3 4*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001],n[2600001];
    int sum=0,i=0,j=0,temp;
    scanf("%[^\n]",a);
    temp=strlen(a);
    while(i<temp)
    {
        if((int)a[i]<'a')
            a[i]=a[i]+32;
        i++;
    }
    i=0;
    while(i<temp)
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-96;
        else a[i]=0;
                sum=sum+a[i];
                i++;
    }
    for(j=0;sum>0;j++)
    {
        n[j]=sum%2;
        sum=sum/2;
    }
    int count1=0,count0=0;
    for (j=j-1;j>=0;j--)
    {
        if(n[j]==1) count1++;
        else if(n[j]==0)count0++;
    }
    printf("%d %d\n",count0,count1);
    return 0;
}