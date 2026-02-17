while True:
	n=input()
	if n=="0": break
	
	odd=0
	even=0
	for i in range(len(n)):
		tmp=int(n[i])
		if i%2==0:
			even+=tmp
		else:
			odd+=tmp
	
	ans=abs(even-odd)
	
	if ans%11==0:
		print(f"{n} is a multiple of 11.")
	else:
		print(f"{n} is not a multiple of 11.")
