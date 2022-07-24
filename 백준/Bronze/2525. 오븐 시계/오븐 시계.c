#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr, min, t;
    scanf("%d %d", &hr, &min);
    scanf("%d", &t);
    
    min += hr * 60 + t;
    hr = (min / 60) % 24;
    min %= 60;
    
    printf("%d %d", hr, min);
    
    return 0;
}