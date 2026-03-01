caseNum=1

while True:
	try:
		n=int(input())
		
		for _ in range(n):
			numList=[]
			s=input().strip()
			
			for _ in range(int(s[-1])):
				tmp=list(map(int,input().strip().split()))
				numList+=tmp
			
			isSym=True
			for i in range(len(numList)):
				left=numList[i]
				right=numList[len(numList)-1-i]
				
				if left!=right or left<0 or right<0:
					isSym=False				
					break
					
			if isSym:					
				print(f"Test #{caseNum}: Symmetric.")
			else:
				print(f"Test #{caseNum}: Non-symmetric.")
			caseNum+=1
			
	except EOFError:
		break
