while True:
	n1,n2=map(int,input().split())
	if n1==0 and n2==0:
		break
	carry=0
	add=0
	
	while n1>0 or n2>0:
		tmp=n1%10+n2%10+add
		if tmp>=10:
			add=1
			carry+=1
		else:
			add=0
		n1//=10
		n2//=10
	
	if carry==1:
		print(f"{carry} carry operation.")
	elif carry:
		print(f"{carry} carry operations.")
	else:
		print("No carry operation.")
