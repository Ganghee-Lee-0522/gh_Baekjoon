#include <stdio.h>
#define MAX 1000000

// -- get(n)
// /3을 한 숫자, /2를 한 숫자, -1을 한 숫자 중 최솟값에 +1을 하여 이번 숫자로 가져옴
int get(int n, int M[])
{
    int a = MAX, b = MAX, c = M[n - 1];
    
    if(n % 3 == 0)
        a = M[n / 3];
    if(n % 2 == 0)
        b = M[n / 2];
    
    if(a > b)
    {
        if(b > c)
            return (c + 1);
        else
            return (b + 1);
    }
    else
    {
        if(a > c)
            return (c + 1);
        else
            return (a + 1);
    }
}


// -- set(X)
int set(int X, int M[])
{
    // for 4 to X 배열에 저장해나가기
    for(int i = 4; i <= X; i++)
    {
        M[i] = get(i, M);
    }
    
    return M[X];
}


// --  main
int main()
{
    // 변수 선언
    int X;
    scanf("%d", &X);
    
    // 일차원 배열 선언: 확정 최솟값을 저장할 배열 및 배열 초기화
    // 초기 조건 배열에 저장(0, 1 비우기)
    // 초기 조건은? X = 2 : 1, X = 3 : 1
    int M[MAX] = {0,};
  
    M[2] = 1;
    M[3] = 1;
    
    // 함수 호출: 이번 숫자의 확정값을 구해보자
    printf("%d", set(X, M));
    
    return 0;

}