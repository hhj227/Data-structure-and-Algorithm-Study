# first solution
# failed at efficiency test

def solution(phone_book):
    answer = True
    
    for a in range(len(phone_book)):
        for b in range(len(phone_book)):
            if a==b or len(phone_book[a])>len(phone_book[b]):
                continue
            if phone_book[b][0:len(phone_book[a])]==phone_book[a]:
                answer = False
                break
    
    return answer
