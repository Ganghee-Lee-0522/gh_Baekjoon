#include <stdio.h>
#include <stdlib.h>
#define N 100000

int main()
{
    int a, b, i = 0;
    int sum[N] = {0};
    
    do{
        scanf("%d %d", &a, &b);
        sum[i] = a + b;
        i++;
        
    } while(a != 0 || b != 0);
    
    i = 0;
    while(sum[i])
    {
        printf("%d\n", sum[i]);
        i++;
    }
    
    return 0;
}