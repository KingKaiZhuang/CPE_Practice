while True:
	try:
		n=int(input())
	except EOFError:
		break
		
	for _ in range(n):
		d=int(input())
		p=int(input())

		parGap=[]
		for _ in range(p):
			parGap.append(int(input()))
		
		record={}
		for i in parGap:
			tmp=i
			while i<=d:
				if i%7!=6 and i%7!=0:
					record[i]=1
				i+=tmp
		print(len(record))
