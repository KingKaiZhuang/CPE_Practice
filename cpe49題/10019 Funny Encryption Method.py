def countOne(num):
	numArr=[]	
	while num!=0:
		numArr.append(num%2)
		num//=2
		numArr.reverse()
	
	b=0
	for i in range(len(numArr)):
		if numArr[i]==1:
			b+=1
	return b

n=int(input())

for _ in range(n):
	num=int(input())
	tmp=num
	
	b1=countOne(num)
	
	""" two """
	sum=0
	count=0

	while tmp!=0:
		sum+=(tmp%10)*(16**count)
		tmp//=10
		count+=1
		
	b2=countOne(sum)
	
	print(f"{b1} {b2}")
