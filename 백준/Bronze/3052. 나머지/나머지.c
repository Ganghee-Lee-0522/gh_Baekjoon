#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void count(int list[])
{
    int count = 0;
    bool flag = false;
    
    for(int i = 0; i < 10; i++)
    {
        list[i] %= 42;
        
        for(int j = 0; j < i; j++)
        {
            list[j] %= 42;
            
            if(list[i] == list[j])
            {
                flag = true;
                break;
            }
        }
        
        if(!flag)
            count++;
        else
            flag = false;
    }
    
    printf("%d", count);
}

int main()
{
    int arr[10];
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    count(arr);
    
    return 0;
}