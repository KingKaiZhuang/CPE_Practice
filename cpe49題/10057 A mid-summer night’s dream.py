while True:
	try:
		n=int(input())
	except EOFError:
		break
	
	numList=[]
	for i in range(n):
		numList.append(int(input()))
		
	numList.sort()
	
	if len(numList)%2!=0:
		mid_1=numList[len(numList)//2]
		mid_2=numList[len(numList)//2]
	else:
		mid_1=numList[len(numList)//2-1]
		mid_2=numList[len(numList)//2]
	
	count=0
	for i in numList:
		if mid_1<=i<=mid_2:
			count+=1
			
	last=mid_2-mid_1+1
	print(f"{mid_1} {count} {last}")
