while True:
	try:
		n=input().split()
	except EOFError:
		break
	
	numList=[]
	for i in range(1,len(n)):
		numList.append(int(n[i]))
	
	record={}
	for i in range(1,len(numList)):
		cal=abs(numList[i-1]-numList[i])
		record[cal]=True
	
	isJump=True
	for i in range(1,int(n[0])):
		if i not in record:
			isJump=False
			break
	
	if isJump:
		print("Jolly")
	else:
		print("Not jolly")
