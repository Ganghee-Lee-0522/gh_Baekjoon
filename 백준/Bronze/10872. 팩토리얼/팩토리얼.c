// 1. 반복문 사용해서 풀기

#include <stdio.h>

int main()
{
    int N, cnt = 1;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        cnt *= (i + 1);
    }
    
    printf("%d", cnt);
    
    return 0;
}


// 2. 재귀함수 사용해서 풀기

#include <stdio.h>

int factorial(int n)
{
    if(n > 1) // 이때 자주 시행되는 조건을 위에 놓을 것! n == 1을 if 조건으로 두었더니 시간 초과 오류가 발생했다.
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    int N;
    scanf("%d", &N);
    
    printf("%d", factorial(N));
    
    return 0;
}
