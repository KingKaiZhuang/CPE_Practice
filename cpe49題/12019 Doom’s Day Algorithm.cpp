week=["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]
dayNum=[31,28,31,30,31,30,31,31,30,31,30,31]

n=int(input())

for _ in range(n):
	cur=4
	m,d=map(int,input().split())
	
	if m==1: 
		cur+=d
	else:
		for i in range(m-1):
			cur+=dayNum[i]
		cur+=d
	
	print(week[cur%7])
