n=int(input())
input()

flag=False
for _ in range(n):
	
	plantArr=[]
	plantDic={}
	
	if flag==True:
		print()

	while True:
		try:
			plant=input()
			if plant=="":
				break
			plantArr.append(plant)
		except EOFError:
			break

	for plant in plantArr:
		if plant in plantDic:
			plantDic[plant]+=1
		else:
			plantDic[plant]=1
	
	plantArr_sort=sorted(plantDic)
	
	for p in plantArr_sort:
		print(f"{p} {plantDic[p]*100/len(plantArr):.4f}")
		
	flag=True
