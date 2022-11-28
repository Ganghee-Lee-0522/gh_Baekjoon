def solution(n):
    
    if(n == 1):
        return 4
    
    answer = 1
    while(answer <= n/2):
        if(answer**2 == n):
            return (answer + 1)**2
        else:
            answer += 1
            
    answer = -1
    return answer