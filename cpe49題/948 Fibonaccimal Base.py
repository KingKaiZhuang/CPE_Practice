n=int(input())
fib=[0,1]

for i in range(1,40):
	fib.append(fib[i-1]+fib[i])

for i in range(n):
	num=int(input())
	print(num,end=" ")
	ans=""
	isFirst=False
	
	for j in reversed(fib[2:]):
		if num>=j:
			ans+="1"
			num-=j
			isFirst=True
		elif isFirst:
			ans+="0"
			
	print(f"= {ans} (fib)")
