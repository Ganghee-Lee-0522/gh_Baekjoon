#include <stdio.h>

void printReply1(int n)
{
    if(n < 1)
        return;
        
    printReply1(n - 1);

    for(int i = 1; i < n; i++)
        printf("____");
    printf("%s\n", "\"재귀함수가 뭔가요?\"");
    for(int i = 1; i < n; i++)
        printf("____");
    printf("%s\n", "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.");
    for(int i = 1; i < n; i++)
        printf("____");
    printf("%s\n", "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.");
    for(int i = 1; i < n; i++)
        printf("____");
    printf("%s\n", "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"");
    
    return;
}

void printReply2(int n, int max)
{
    if(n < 1)
        return;
    
    for(int i = max - n + 1; i < max; i++)
        printf("____");
        
    printf("%s\n", "라고 답변하였지.");
    
    printReply2(n - 1, max);
    
    return;
}

int main()
{
    int N;
    scanf("%d", &N);
    
    printf("%s\n", "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.");
    printReply1(N);
    for(int i = 0; i < N; i++)
        printf("____");
    printf("%s\n", "\"재귀함수가 뭔가요?\"");
    for(int i = 0; i < N; i++)
        printf("____");
    printf("%s\n", "\"재귀함수는 자기 자신을 호출하는 함수라네\"");
    for(int i = 0; i < N; i++)
        printf("____");
    printf("%s\n", "라고 답변하였지.");
    
    printReply2(N, N);
    
    return 0;
}