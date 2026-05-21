def largest(x,y,rec,r,c,add):
    top,right,bottom,left=x-add,y+add,x+add,y-add

    if top<0 or right>=c or bottom>=r or left<0:
        return False
    
    for i in range(top,bottom+1):
        for j in range(left,right+1):
            if rec[i][j]!=rec[x][y]:
                return False
    return True
    

testCase=int(input())

for _ in range(testCase):
    r,c,t=map(int,input().split())
    print(r,c,t)
    rec=[]
    for _ in range(r):
        rec.append(input())
    
    for _ in range(t):
        x,y=map(int,input().split())
        add=0
        while largest(x,y,rec,r,c,add):
            add+=1
        print((add-1)*2+1)
