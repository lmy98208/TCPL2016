/*求ab mod c，mod 为取余。写一个程序，读入整型数据 a、b、c，输出ab mod c的 值。保证你的程序当 a、b 的值很大时，依然是正确的。*/

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