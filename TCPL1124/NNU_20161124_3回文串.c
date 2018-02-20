/*回文串的判断。

int is_str_pal(const char* str); 

接受一个字符串，若该串回文，返回 0；否则，返回-1。*/

#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
int main()
{
    char a[100];
    char* str;
    str=a;
    gets(a);
    printf("Returned value is:%d\n",is_str_pal(str));
    return 0;
}
int is_str_pal(const char* str)
{
    int temp=strlen(str),i=0;
    int k=temp-1;
    char ab[temp];
    while(i<temp)
    {


        ab[i]=str[k-i];
        i++;
    }
    if(str[i]==ab[i]) return 0;
        else return -1;
}