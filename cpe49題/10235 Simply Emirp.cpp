while True:
	try:
		n=int(input())
		
		isPrime=True
		isEmirp=True
		for i in range(2,int(n**0.5)+1):
			if n%i==0:
				isPrime=False
				break
				
		r=str(n)
		tmp=""
		for c in reversed(r):
			tmp+=c
		
		isCommon=False
		if tmp==str(n):
			isCommon=True
			isEmirp=False		
		
		if not isCommon:
			for i in range(2,int(int(tmp)**0.5)+1):
				if int(tmp)%i==0:
					isEmirp=False
					break
				
		if isEmirp and isPrime:
			print(f"{n} is emirp.")
		elif isPrime:
			print(f"{n} is prime.")
		else:
			print(f"{n} is not prime.")

	except EOFError:
		break
