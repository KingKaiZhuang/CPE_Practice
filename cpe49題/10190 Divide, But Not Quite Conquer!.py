while True:
	try:
		n1,n2=map(int,input().split())
		if n2==1 or n2>n1:
			print("Boring!")
			continue
	except EOFError:
			break
	
	numList=[n1]
	isBoring=False
	tmp=n1
	
	while tmp>1:
		if tmp%n2!=0:
			isBoring=True
			break
		tmp//=n2
		numList.append(tmp)
		
		
	if isBoring:
		print("Boring!")
	else:
		print(*numList)
