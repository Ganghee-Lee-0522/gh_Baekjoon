#include <stdio.h>
#include <stdlib.h>

void sort(int n, int list[])
{
    int temp, min, max = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(list[min] > list[i])
            min = i;
        if(list[max] < list[i])
            max = i;
    }
    
    printf("%d %d", list[min], list[max]);
}

int main()
{
    int N;
    scanf("%d", &N);
    
    int num[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    
    sort(N, num);
}