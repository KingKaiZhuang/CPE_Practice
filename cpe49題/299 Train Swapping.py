n=int(input())

for _ in range(n):
	b=int(input())
		
	t=list(map(int,input().split()))
	
	count=0
	for i in range(len(t)):
		for j in range(0,len(t)-1-i):
			if t[j]>t[j+1]:
				t[j],t[j+1]=t[j+1],t[j]	
				count+=1
				
	print(f"Optimal train swapping takes {count} swaps.")
