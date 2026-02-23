def sort_key(n):
	return(record[n],-n)

isFirst=False
while True:
	try:
		s=input()
	except EOFError:
		break
		
	if isFirst:
		print()	
		
	record={}
	num=[]
	for c in s:
		if ord(c) in record:
			record[ord(c)]+=1
		else:
			record[ord(c)]=1
			num.append(ord(c))
		
	num.sort(key=sort_key)
	
	for i in range(len(num)):
		print(f"{num[i]} {record[num[i]]}")
	isFirst=True
