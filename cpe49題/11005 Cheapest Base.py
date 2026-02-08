n=int(input())
caseNum=1
flag=0
for _ in range(n):
	if flag:
		print()
	costList=[]
		
	for i in range(4):
		price=list(map(int,input().split()))
		costList.extend(price)

	#print(costList)
	testNum=int(input())
	#print(testNum)
	
	print(f"Case {caseNum}:")
	caseNum+=1
	for _ in range(testNum):
		
		p=int(input())
		lowprice=999999
		lowIndex=-1
		recordResult=[]
		#print(p)
		
		for n in range(2,37):
			tmp=p
			total=0			
			
			while tmp!=0:
				endN=tmp%n
				total+=costList[endN]
				tmp//=n
			
			if total<lowprice:
				lowprice=total
				recordResult=[n]
			elif total==lowprice:
				recordResult.append(n)
		

		print(f"Cheapest base(s) for number {p}:",end="")
		
		for i in range(len(recordResult)):
			print("",recordResult[i],end="")
		print()
		flag=1
