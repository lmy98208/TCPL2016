/*��ab mod c��mod Ϊȡ�ࡣдһ�����򣬶����������� a��b��c�����ab mod c�� ֵ����֤��ĳ��� a��b ��ֵ�ܴ�ʱ����Ȼ����ȷ�ġ�*/

int quick_pow_mod(int a, int b, int c) 
{ 
    a %= c; 
    int res = 1, tmp = a; 
    for ( ; b; b >>= 1) 
    {  
        if (b & 1) 
            res = res * tmp % c; 
        tmp = tmp * tmp % c; 
    } 
    return res; 
}