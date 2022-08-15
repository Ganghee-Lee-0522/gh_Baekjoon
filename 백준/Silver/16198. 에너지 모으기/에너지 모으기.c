/*
#### 해결 방법

모든 뽑기의 순서를 백트래킹으로 조사하고, 최댓값을 갱신한다.
*/

#include <stdio.h>
#include <stdlib.h>

int N, W[11];
int k = 0;
int max_eng = -1;
int check[11] = {0};
int cur_eng = 0;

int get_multi(int idx) {
    int left = idx - 1, right = idx + 1;
    
    while(check[left] == 1)
        left--;
        
    while(check[right] == 1)
        right++;
        
    return (W[left] * W[right]);
}

void update() { // 각 case를 끝까지 탐색한 후 최댓값을 갱신하는 함수
    if(cur_eng > max_eng) // 이번에 찾은 경우의 에너지합이 최댓값보다 크면 갱신
        max_eng = cur_eng;
        
    return;
}

void dfs(int fix, int rem) { // fix: 몇 번째 제거까지 고정시킨 경우인지, rem: 몇 번 제거했는지
    int mul;
    
    if(rem == N - 2) { // 맨 앞, 맨 뒤만 남기고 다 제거했으면
        update(); // 최댓값을 갱신하고 종료
        
        return;
    }
    else { // 아직 덜 제거했으면
        for(int i = 2; i < N; i++) {
            if(i == fix || check[i] == 1) // 현재 조사중인 번호와 같거나 방문했던 번호이면 제거하지 않음
                continue;
            else {
                check[i] = 1; // i번째 방문(제거) 표시
                mul = get_multi(i);
                cur_eng += mul; // 해당 순서에 i번째 에너지볼을 제거했을 때 누적 에너지
                dfs(i, rem + 1); // i번째 에너지볼을 제거한 case의 백트래킹
                check[i] = 0; // i번째 방문(제거) 표시 해제
                cur_eng -= mul; // 해당 순서에 i번째 에너지볼을 제거하지 않았을 때 누적 에너지
            }
        }
    }
}

int main()
{
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
        scanf("%d", &W[i]);
        
    dfs(0, 0);
    
    printf("%d", max_eng);
    
    return 0;
}