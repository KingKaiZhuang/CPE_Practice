T=int(input())

for _ in range(T):
	n,p,i=input().split()		
	
	n=int(n)
	p=float(p)
	i=int(i)
	
	if p==0:
		print(f"{0:.4f}")
		continue
	
	q=1-p
	ans=p*(q**(i-1))/(1-q**n)
	
	print(f"{ans:.4f}")
	
