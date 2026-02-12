while True:
	try:
		n=int(input().strip())
	except EOFError:
		break
	
	sum=n
	n+=1
	empBottle=0
	
	while n>=3:
		cola=n//3
		empBottle=n%3
		
		sum+=cola
		n=n//3+empBottle
		
	print(sum)
