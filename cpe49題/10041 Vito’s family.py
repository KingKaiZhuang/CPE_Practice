n=int(input())

for i in range(n):
	s=list(map(int,input().split()))
	streets=s[1:]
	mid_n=s[0]//2
	
	streets.sort()
	
	ans=0
	for j in s[1:]:
		ans+=abs(streets[mid_n]-j)
		
	print(ans)
