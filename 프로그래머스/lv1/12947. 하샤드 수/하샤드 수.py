def solution(x):
    tmp = x
    num = 0
    while(tmp != 0):
        num += (tmp % 10)
        tmp = (int)(tmp / 10)
        
    if(x % num == 0):
        return True
    else:
        return False