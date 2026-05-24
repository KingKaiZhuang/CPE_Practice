caseNum=1

while True:
    try:
        n=int(input())
        nList=list(map(int,input().split()))
        isB2=True
        rec=set()
        # 1 ≤ b1 < b2 < b3
        if nList[0]<0:
            isB2=False

        for i in range(1,n):
            if nList[i-1]>nList[i]:
                isB2=False
                break
        # bi + bj , where i ≤ j, are different.
        if isB2:
            for i in range(n):
                for j in range(i,n):
                    g=nList[i]+nList[j]
                    if g not in rec:
                        rec.add(g)
                    else:
                        isB2=False
                        break
                if isB2==False:
                    break
        
        if isB2:
            print(f"Case #{caseNum}: It is a B2-Sequence.")
        else:
            print(f"Case #{caseNum}: It is not a B2-Sequence.")
        caseNum+=1
    except EOFError:
        break
