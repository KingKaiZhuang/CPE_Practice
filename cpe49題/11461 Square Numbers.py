while True:
	try:
		a,b=map(int,input().split())
		if a==0 and b==0:
			break
	except EOFError:
		break
		
	record=[]
	
	x=int((a-1)**0.5)
	y=int(b**0.5)
	
	print(y-x)
