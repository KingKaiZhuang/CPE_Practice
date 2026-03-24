n=int(input())

for i in range(n):
	sum,diff=map(int,input().split())
	
	if sum<diff or (sum+diff)%2 or (sum-diff)%2:
		print("impossible")
		continue
	
	x1=(sum+diff)//2
	x2=(sum-diff)//2
	
	print(x1,x2)
