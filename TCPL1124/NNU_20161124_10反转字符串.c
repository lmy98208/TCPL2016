/*反转字符串。

void reverse(char* str); 

接受一个字符串，将此串反转（如：”Homework”的反转为”krowemoH”） 。*/

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
