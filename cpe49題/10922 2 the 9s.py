while True:
	s=input()
	if s=="0":
		break
	original_s=s
	
	sum=0
	for i in s:
		sum+=int(i)
	
	if sum%9!=0:
		print(f"{original_s} is not a multiple of 9.")
		continue

	s=str(sum)
	degree=1
	while True:
		if s=="9":
			break		
		else:
			tmp=0
			for i in s:
				tmp+=int(i)
			s=str(tmp)
			degree+=1
	print(f"{original_s} is a multiple of 9 and has 9-degree {degree}.")
