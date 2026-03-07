n=int(input())
caseNum=1
isFirst=True

for _ in range(n):
	if isFirst==False:
		print()
	isFirst=False
	
	print(f"Case {caseNum}:")
	caseNum+=1	
	
	pList=[]
	
	for _ in range(4):
		s=map(int,input().split())
		pList+=s
	
	t=int(input())
	
	
	for _ in range(t):
		number=int(input())		
		ans=[]
		minN=99999
		for i in range(2,37):
			sum=0	
			num=number		
			while num>0:
				tmp=num%i
				sum+=pList[tmp]
				num//=i
			if sum<minN:
				minN=sum
				ans=[i]
			elif sum==minN:
				ans.append(i)

		print(f"Cheapest base(s) for number {number}: ",end="")
		print(*ans)
