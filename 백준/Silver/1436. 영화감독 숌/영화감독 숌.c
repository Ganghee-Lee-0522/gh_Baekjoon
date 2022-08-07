#include <stdio.h>
#include <math.h>
int main()
{
    int res = 665;
    int num;
    scanf("%d", &num);
    int a = 0;
    while (1)
    {
        if (a == num)
        {
            printf("%d", res);
            break;
        }
        res++;
        for (int i = 0; i <= 10; i++)
        {
            if (res / (int)pow(10, i) % 1000 == 666) // 가나다라마 이렇게 5글자가 있을때, i가 0일때는 다라마 % 1000이고, i가 1일때는 나다라 % 1000이다.
            {
                a++; 
                break;
            }
        }
    }
}
