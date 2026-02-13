while True:
	try:
		n1,n2=map(int,input().split())
	except EOFError:
		break

	print(f"{n1} {n2}",end=" ")
	x=min(n1,n2)
	y=max(n1,n2)		
		
	record=[]	
	for n in range(x,y+1):
		
		num=n
		count=1
			
		while True:
			if num==1:
				break

			if num%2==0:
				isOdd=False
			else:
				isOdd=True
				
			if isOdd:
				num=3*num+1
			else:
				num=num//2
				
			count+=1

		record.append(count)

	maxNum=0
	for i in record:
		if i>maxNum:
			maxNum=i
	print(maxNum)
