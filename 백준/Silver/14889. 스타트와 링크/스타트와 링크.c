/*
#### 해결 방법

1) N명의 인원을 두 팀으로 나누는 경우를 모두 구하고
2) 각 경우에서 능력치 차이가 얼마인지 구해서
3) 기존에 구한 능력치 차이의 최솟값보다 작다면 갱신
4) 갱신이 끝난 능력치 차이의 최솟값을 반환
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define INF 10000 // 무한대 값 지정

int N, min_diff; // 선수 수, 최소 차이
int S[20][20]; // 능력치
int start[10], link[10]; // 두 팀의 선수 명단
int pick[20]; // 선수 i의 pick 여부를 저장할 배열

void update() { // 각 팀의 능력치를 모두 계산한 후에 차이의 최솟값을 갱신하는 함수
    int start_size = 0, link_size = 0; // 선수 배정 시 사용할 인덱스
    for(int i = 0; i < N; i++) {
        if(pick[i] == 0) {
            start[start_size++] = i; // 안뽑힌 선수들을 start팀에 배정함
        }
        else { // 뽑힌 선수들을 link팀에 배정함
            link[link_size++] = i;
        }
    }
    
    int start_sum = 0, link_sum = 0;
    for(int i = 0; i < N / 2; i++) {
        for(int j = i + 1; j < N / 2; j++) {
            // start팀의 능력치 갱신
            start_sum += (S[start[i]][start[j]] + S[start[j]][start[i]]);
            //link팀의 능력치 갱신
            link_sum += (S[link[i]][link[j]] + S[link[j]][link[i]]);
        }
    }
    
    // 기존 능력치 차이의 최솟값보다 새로 구한 능력치 차이의 값이 더 작다면 갱신
    if(min_diff > abs(start_sum - link_sum))
        min_diff = abs(start_sum - link_sum);
}

void dfs(int fix, int pick_count) { // fix는 몇 명의 pick 여부를 고정했는지, pick_count는 팀 당 총 몇 명을 뽑았는지 표시
    if(pick_count == N / 2) { // 선수 수만큼 뽑기 완료
        update(); // 점수를 계산하는 함수(다 뽑았으면 계산하자)
        return;
    }
    
    for(int i = fix; i < N; i++) {
        pick[i] = 1; // i번째 선수를 뽑고 표시
        
        // i번째 선수까지는 pick 여부를 고정하고, i+1번째 선수부터 경우의 수를 따져봄
        dfs(i + 1, pick_count + 1);
        pick[i] = 0; // i번째 선수를 안뽑은 것으로 표시하고 i+1로 넘어감
    }
}

int main() {
    scanf("%d", &N); // 선수가 총 몇 명인지 입력 받음
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &S[i][j]); // S_ij의 값 입력 받음
        }
    }
    
    min_diff = INF; // 최소 차이를 무한대로 초기화
    dfs(0, 0);
    printf("%d\n", min_diff); // 최소 차이를 출력
    
    return 0;
}