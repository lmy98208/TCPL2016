/*��ת�ַ�����

void reverse(char* str); 

����һ���ַ��������˴���ת���磺��Homework���ķ�תΪ��krowemoH���� ��*/

#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
    int i=0,temp=strlen(str);
    for(i=temp-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

int main()
{
    char a[100];
    char* p=a;
    gets(a);
    reverse(p);
    return 0;
}
