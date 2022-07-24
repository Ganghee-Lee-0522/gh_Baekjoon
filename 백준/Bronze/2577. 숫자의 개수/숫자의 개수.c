#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, temp, num;
    int arr[10] = {0};
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    temp = a * b * c;
    
    while(temp)
    {
        arr[temp % 10]++;
        temp /= 10;
    }
    
    for(int i = 0; i < 10; i++)
        printf("%d\n", arr[i]);
    
    return 0;
}