# 다른 사람의 풀이 https://itholic.github.io/kata-camouflage/
# Counter({'headgear': 2, 'eyewear': 1})

from collections import Counter

def solution(clothes):
    clothes_list = Counter([category for _, category in clothes])
    answer = 1

    for key in clothes_list:
        answer *= clothes_list[key] + 1

    return answer - 1
