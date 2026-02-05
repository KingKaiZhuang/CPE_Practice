n=int(input())
flag=0
input()

for _ in range(n):
	if flag==1:
		print()
	record=[]
	calculator={}	
			
	while True:
		try:
			s=input()
		except EOFError:
			break
	
		if s=="":
			break

		record.append(s)
	
	for i in range(len(record)):
		if record[i] in calculator:
			calculator[record[i]]+=1
		else:
			calculator[record[i]]=1
	
	recordSort=sorted(calculator)
	
	for r in recordSort:
		print(f"{r} {calculator[r]*100/len(record):.4f}")
	
	flag=1
