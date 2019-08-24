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


# 다른 사람의 풀이
# zip: 동일한 개수로 이루어진 자료형을 묶어 주는 역할을 하는 함수
# p2.startswith(p1): p2가 p1으로 시작하느냐

def solution(phone_book):
    phone_book.sort()
    for p1,p2 in zip(phone_book,phone_book[1:]):
        if p2.startswith(p1):
            return False
    return True
