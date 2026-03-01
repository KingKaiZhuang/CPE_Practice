def bangla(num):
	if num>=10000000:	
		bangla(num//10000000)
		print(f" kuti",end="")
		num%=10000000
	if num>=100000:
		bangla(num//100000)
		print(f" lakh",end="")	
		num%=100000
	if num>=1000:
		bangla(num//1000)
		print(f" hajar",end="")	
		num%=1000
	if num>=100:
		bangla(num//100)
		print(f" shata",end="")
		num%=100
	if num>0:
		print(f" {num}", end="")

caseNum=1
while True:
	try:
		n=int(input())
	except EOFError:
		break
	
	if n==0:
		print(f"{caseNum:4}. 0",end="")
	else:
		print(f"{caseNum:4}.",end="")
		bangla(n)
	print()
	caseNum+=1
