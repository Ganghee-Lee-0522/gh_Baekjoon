# 아이디어:
#   맨 앞 또는 맨 뒤 중 한 끝을 선택하고,
#   해당 지점부터 하나씩 양쪽 값을 체크해야 한다
#   이 때 비는 값 없이 최적의 값을 찾으려면
#   진행 방향과 같은 방향으로 값을 체크해야 한다
#   // 맨 앞->맨 뒤: 앞(왼쪽)->뒤(오른쪽)
#   // 맨 뒤->맨 앞: 뒤(오른쪽)->앞(왼쪽)

def solution(n, lost, reserve):
    sol_reserve = set(reserve) - set(lost) # 2개 가진 사람(1개인 사람 제외)
    sol_lost = set(lost) - set(reserve) # 0개 가진 사람(1개인 사람 제외)
    
    # 맨 앞(왼쪽)부터 오른쪽으로 한 칸씩 움직이며 값을 체크한다
    for sr in sol_reserve:
        left = sr - 1 # 왼쪽 값 체크
        right = sr + 1 # 오른쪽 값 체크
        if left in sol_lost: # 왼쪽 사람이 도난 당했으면
            sol_lost.remove(left) # 빌려줌
        elif right in sol_lost: # 오른쪽 사람이 도난 당했으면
            sol_lost.remove(right) # 빌려줌
    return n - len(sol_lost) # 전체 인원 중 못 빌린 사람 제외함