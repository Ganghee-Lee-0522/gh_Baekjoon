def solution(s):
    stack = []
    for data in s:
        if(data == '('):
            stack.append(data)
        else:
            if(len(stack) > 0):
                stack.pop()
            else:
                return False
    if(len(stack) == 0):
        return True
    else:
        return False