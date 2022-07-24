#include <stdio.h>
#include <stdlib.h>

int check(int a, int b, int c)
{
    if(a == b)
    {
        if(b == c)
            return 10000 + a * 1000;
        else
            return 1000 + a * 100;
    } else {
        if(a == c || b == c)
            return 1000 + c * 100;
        else {
            if(a > b)
            {
                if(c > a)
                    return c * 100;
                else
                    return a * 100;
            } else {
                if(c > b)
                    return c * 100;
                else
                    return b * 100;
            }
        }
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d", check(a, b, c));
    
    return 0;
}