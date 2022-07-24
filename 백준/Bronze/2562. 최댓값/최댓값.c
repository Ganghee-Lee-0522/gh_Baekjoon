#include <stdio.h>
#include <stdlib.h>

void sort(int list[])
{
    int temp, max = 0;
    
    for(int i = 0; i < 9; i++)
    {
        if(list[max] < list[i])
            max = i;
    }
    
    printf("%d\n%d", list[max], max + 1);
}

int main()
{
    int num[9];
    
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
    }
    
    sort(num);
}