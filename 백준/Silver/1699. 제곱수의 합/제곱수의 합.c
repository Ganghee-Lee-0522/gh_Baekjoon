#include <stdio.h>
 
int main()
{
    int N;
    int m[100000] = {0};
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++)
        for(int j = 1; j * j <= i; j++)
            if(m[i] > m[i - j * j] + 1 || m[i] == 0)
                m[i] = m[i - j * j] + 1;
                
    printf("%d\n", m[N]);
    
    return 0;
}