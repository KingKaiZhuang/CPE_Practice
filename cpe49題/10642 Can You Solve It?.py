def far(x,y):
	floor=x+y
	return floor*(floor+1)//2+x

n=int(input())
caseNum=1

for _ in range(n):
	x1,y1,x2,y2=map(int,input().split())
	
	s=far(x1,y1)
	e=far(x2,y2)
	
	print(f"Case {caseNum}: {e-s}")
	caseNum+=1
