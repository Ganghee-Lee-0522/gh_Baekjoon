#include <stdio.h>
 
int main()
{
    int T;
    scanf("%d", &T);
    
    int n[T];
    int m[11] = { 0 };
    m[1] = 1;
    m[2] = 2;
    m[3] = 4;
 
    for (int i = 4; i < 11; i++)
        m[i] = m[i - 1] + m[i - 2] + m[i - 3];
 
 
    for (int i = 0; i < T; i++)
        scanf("%d", &n[i]);

    for (int i = 0; i < T; i++)
        printf("%d\n", m[n[i]]);
 
    return 0;
}