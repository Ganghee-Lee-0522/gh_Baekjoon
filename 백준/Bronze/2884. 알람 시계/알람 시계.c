#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr, min;
    scanf("%d %d", &hr, &min);
    
    hr = (hr * 60 + min - 45 + 1440) % 1440;
    min = hr % 60;
    hr = (hr - min) / 60;
    
    printf("%d %d", hr, min);


    return 0;
}
