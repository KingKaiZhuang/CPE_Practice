while True:
	n=int(input())
	if n==0:
		break
		
	s=bin(n)[2:]
	count=0
	
	for c in s:
		if c=='1':
			count+=1
	print(f"The parity of {s} is {count} (mod 2).")
