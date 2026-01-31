def location(x,y):
	return (x+y)*(x+y+1)/2+x

n=int(input())
caseNum=1
for _ in range(n):
	x1,y1,x2,y2=input().split()
	loc1=location(int(x1),int(y1))
	loc2=location(int(x2),int(y2))
	print(f"Case {caseNum}: {int(loc2-loc1)}")
	caseNum+=1
