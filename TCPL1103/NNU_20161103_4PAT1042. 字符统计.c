/*���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ�� 
�����ʽ�� 
������һ���и���һ�����Ȳ�����1000���ַ������ַ�����ASCII���������ɼ��ַ����ո���ɣ����ٰ���1��Ӣ����ĸ���Իس��������س��������ڣ��� 
�����ʽ�� 
��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ�������в��У����������ĸ����С���Ǹ���ĸ��ͳ��ʱ�����ִ�Сд�����Сд��ĸ�� 
���������� 
This is a simple TEST. There ARE numbers and other symbols 1&2&3������.. 
��������� 
e 7*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100050],ch;
    int temp,i=0;
    scanf("%[^\n]",a);
    temp=strlen(a);
    while(i<temp)
    {
        if(a[i]<'a') a[i]=a[i]+32;
        i++;
    }
    int b[260]={0};
    for (i=0;i<temp;i++)
    {
        ch=a[i];
        b[ch]++;
    }
    int max=b[0],n=0;
    for(int i='a';i<='z';i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            n=i;
        }
    }
    printf("%c %d\n",n,max);
    return 0;
}