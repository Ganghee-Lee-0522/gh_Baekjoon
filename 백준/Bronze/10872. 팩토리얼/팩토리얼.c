#include <stdio.h>

int main()
{
    int N, cnt = 1;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        cnt *= (i + 1);
    }
    
    printf("%d", cnt);
    
    return 0;
}