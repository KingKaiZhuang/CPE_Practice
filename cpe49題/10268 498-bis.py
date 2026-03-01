while True:
	try:
		n=int(input())
	except EOFError:
		break
	
	numList=list(map(int,input().split()))
	
	r=len(numList)-1
	
	ans=0
	x=1
	
	for i in range(r-1,-1,-1):
		ans+=(r-i)*numList[i]*x
		x*=n
	print(ans)
