#include <stdio.h>

int fibo(int n)
{
    if(n >= 2)
        return fibo(n - 1) + fibo(n - 2);
    else if(n == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int N;
    scanf("%d", &N);
    
    printf("%d", fibo(N));
    
    return 0;
}