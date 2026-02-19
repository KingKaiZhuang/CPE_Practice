flag=True

while True:
	try:
		s=input()
	except:
		break
	
	for c in s:
		if c=='"' and flag:
			print("``",end="")
			flag=False
		elif c=='"' and not flag:
			print("''",end="")
			flag=True
		else:
			print(c,end="")
	print()
