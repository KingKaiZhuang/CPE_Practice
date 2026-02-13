while True:
	try:
		x,y=map(int,input().split())
	except EOFError:
		break

	if x==1 or y==1:
		print("Boring!")
		continue

	listNum=[x]
	isBoring=False

	while x>1:
		if x%y!=0:
			isBoring=True
			break
		else:
			x//=y
			listNum.append(x)

	if isBoring:
		print("Boring!")
	else:
		print(*listNum)
