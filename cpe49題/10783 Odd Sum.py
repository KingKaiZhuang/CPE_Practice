t=int(input())
caseNum=1
for i in range(t):
	left=int(input())
	right=int(input())
	sum=0
	
	for j in range(left,right+1):
		if j%2!=0:
			sum+=j
	print(f"Case {caseNum}: {sum}")
	caseNum+=1
