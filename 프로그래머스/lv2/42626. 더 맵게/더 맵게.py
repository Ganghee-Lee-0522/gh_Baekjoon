import heapq # 최소힙을 사용할 수 있는 라이브러리

def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville) # 리스트를 최소힙으로 변환
    
    # 최소힙의 0번 인덱스에는 전체 힙의 최솟값이 있음
    # 이 최솟값을 k와 비교함
    while scoville[0] < K:
        # 스코빌 지수가 가장 낮은 두 개의 음식을 섞어 새로운 음식 제작
        new = heapq.heappop(scoville) + 2 * heapq.heappop(scoville)
        # 만든 음식을 최소힙의 원소로 삽입
        heapq.heappush(scoville, new)
        # answer++ 파이썬은 증감 연산자가 없음..
        answer += 1
        # 힙의 원소가 하나(방금 만든 음식) 남았는데 여전히 k보다 작다면
        # 에러를 반환
        if len(scoville) == 1 and scoville[0] < K:
            return -1
    return answer