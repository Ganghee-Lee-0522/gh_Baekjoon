def solution(s):
    '''
    num_p = 0
    num_y = 0
    
    for ch in list(s):
        if(ch == 'p' or ch == 'P'):
            num_p += 1
        elif(ch == 'y' or ch == 'Y'):
            num_y += 1
            
    if(num_p == num_y):
        return True
    else:
        return False
    '''
    return s.lower().count('p') == s.lower().count('y')