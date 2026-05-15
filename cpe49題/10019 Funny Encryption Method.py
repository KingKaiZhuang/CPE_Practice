testCase=int(input())

for _ in range(testCase):
    n=int(input())

    b=bin(n).count("1")
    h=int(str(n),16)
    h=bin(h).count("1")
    print(f"{b} {h}")
