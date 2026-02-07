t = int(input())

# 每個音符對應：哪些手指要按 (1..10)
NOTE = {
    'c': [2,3,4,7,8,9,10],
    'd': [2,3,4,7,8,9],
    'e': [2,3,4,7,8],
    'f': [2,3,4,7],
    'g': [2,3,4],
    'a': [2,3],
    'b': [2],
    'C': [3],
    'D': [1,2,3,4,7,8,9],
    'E': [1,2,3,4,7,8],
    'F': [1,2,3,4,7],
    'G': [1,2,3,4],
    'A': [1,2,3],
    'B': [1,2],
}

for _ in range(t):
    song = input().strip()
    ans = [0]*10
    prev = [0]*10  # 上一個音：哪些手指按著(1) / 沒按(0)

    for ch in song:
        cur = [0]*10
        for f in NOTE[ch]:
            cur[f-1] = 1

        for i in range(10):
            if prev[i] == 0 and cur[i] == 1:
                ans[i] += 1

        prev = cur

    print(*ans)
