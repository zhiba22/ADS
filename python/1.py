'''lab1 A
from collections import deque

def build_deck(n: int):
    dq = deque()
    for i in range(n, 0, -1):
        dq.appendleft(i)       # кладём i в начало
        dq.rotate(i)           # вместо цикла переносим i раз
    return dq

def main():
    t = int(input().strip())
    results = []
    for _ in range(t):
        n = int(input().strip())
        deck = build_deck(n)
        results.append(" ".join(map(str, deck)))
    print("\n".join(results))

if __name__ == "__main__":
    main() 
    '''

''' lab1 B
def nearest_not_greater(arr):
    stack = []
    res = []
    for x in arr:
        # Убираем только те значения, которые строго больше текущего
        # — тогда на вершине останется ближайший <= x (если есть)
        while stack and stack[-1] > x:
            stack.pop()
        if stack:
            res.append(stack[-1])
        else:
            res.append(-1)
        stack.append(x)
    return res

def main():
    n = int(input().strip())
    arr = list(map(int, input().strip().split()))
    ans = nearest_not_greater(arr)
    print(" ".join(map(str, ans)))

if __name__ == "__main__":
    main()
'''