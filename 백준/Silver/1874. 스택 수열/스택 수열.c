#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100000

char get[SIZE * 2]; // 수열의 원소 하나당 2개의 결과 값이 생기기 때문
int stack[SIZE];
int top = -1; // 초기 top 위치는 -1로 잡아 둚

int main()
{
	int n;
    scanf("%d", &n);
    
    // 만들고 싶은 수열 입력
    int* want = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    	scanf("%d", want + i);
        
    int num = 0;
    int index = 0, resultIdx = 0;
    
    while(1)
    {
    	// top < 목표 숫자
        // push(+)
        if(top == -1 || stack[top] < want[index])
        {
        	num++;
        	stack[++top] = num;
            get[resultIdx++] = '+';
        }
        
        // top == 목표 숫자
        // pop(-)
        else if(stack[top] == want[index])
        {
        	get[resultIdx++] = '-';
        	top--;
            index++;
        }
        
        // top > 목표 숫자
        // no
        // 원하는 수열을 만들 수 없음
        else
        {
        	printf("NO\n");
            return 0;
        }
        
        if(resultIdx == n * 2)
        	break;
    }
    
    for(int i = 0; i < resultIdx; i++)
    	printf("%c\n", get[i]);
        
    return 0;
}