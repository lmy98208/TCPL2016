/*����Ҫ��ʵ��һ������Ǹ������׳˵ļ򵥺����� 
�����ӿڶ��壺

int Factorial( const int N );

����N���û�����Ĳ�������ֵ������12�����N�ǷǸ���������ú������뷵��N�Ľ׳ˣ����򷵻�0�� 
���в��Գ���������

#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;

    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

����������

5
���������

5! = 120*/

#include <stdio.h>
int Factorial( const int N );
int main()
{
    int N, NF;                  
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");
    return 0;
}
int Factorial( const int N)
{
    if (N<0||N>12)
        return 0;
    else if (N==0)
        return 1;
    else if (N==1)
        return 1;
    else return N*Factorial(N-1);
}