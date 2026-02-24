while True:
	s=input()
	if s=="0":
		break
	
	numList=[]
	for c in s:
		numList.append(int(c))
	
	if sum(numList)%9!=0:
		print(f"{s} is not a multiple of 9.")
		continue
		
	num=sum(numList)
	degree=1
	if num==9:
		degree=1
	else:
		while num>9:
			tmp=str(num)
			total=0
			for i in tmp:
				total+=int(i)
			num=total
			degree+=1
	print(f"{s} is a multiple of 9 and has 9-degree {degree}.")
