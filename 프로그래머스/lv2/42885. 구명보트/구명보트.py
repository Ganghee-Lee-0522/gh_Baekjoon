def solution(people, limit):
    answer = 0
    left = 0 # 왼쪽 지점을 가리키는 변수
    right = len(people) - 1 # 오른쪽 지점을 가리키는 변수
    people.sort() # 오름차순으로 정렬
    
    while left < right: # 왼쪽 지점과 오른쪽 지점이 교차하기 전까지
        if people[left] + people[right] <= limit: # 양끝 지점 값의 합이 limit 이하일 때
            answer += 1 # 둘을 한 보트에 태운다
            left += 1
        right -= 1 # 더 가벼운 사람으로 오른쪽 끝을 이동시킨다
        
    return len(people) - answer