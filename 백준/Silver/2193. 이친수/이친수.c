#include <stdio.h>
 
int main()
{
    int n;
    long long m[90];
    scanf("%d", &n);
    
    m[0] = 0;
    m[1] = 1;
    m[2] = 1;
    
    for(int i = 3; i <= n; i++)
        m[i] = m[i - 1] + m[i - 2];
        
    printf("%lld\n", m[n]);
 
    return 0;
}