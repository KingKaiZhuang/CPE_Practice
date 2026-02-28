import math

n=int(input())
caseNum=1

for i in range(n):
	n1=int(input(),2)
	n2=int(input(),2)
	
	ans=math.gcd(n1,n2)	
	isLove=False
	if ans>1:
		isLove=True
	
	if isLove:
		print(f"Pair #{caseNum}: All you need is love!")
	else:
		print(f"Pair #{caseNum}: Love is not all you need!")
		
	caseNum+=1
