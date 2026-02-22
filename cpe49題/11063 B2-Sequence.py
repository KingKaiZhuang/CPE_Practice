caseNum=1

while True:
	try:
		n=input()
		if len(n)==0:
			continue
		seq=input().split()
	except EOFError:
		break
	
	print(f"Case #{caseNum}:",end=" ")
	caseNum+=1
	
	numList=[]
	for i in range(len(seq)):
		numList.append(int(seq[i]))
		
	isSequence=True
	if numList[0]<1:
		isSequence=False
		
	if isSequence:
		for i in range(1,len(numList)):
			if numList[i-1]>numList[i]:
				isSequence=False
				break
	
	record={}
	if isSequence:
		for i in range(len(numList)):
			for j in range(i,len(numList)):
				if numList[i]+numList[j] in record:
					isSequence=False
					break
				else:
					record[numList[i]+numList[j]]=1
			if isSequence==False:
				break
				
	if isSequence:
		print("It is a B2-Sequence.")
	else:
		print("It is not a B2-Sequence.")
		
	print()
