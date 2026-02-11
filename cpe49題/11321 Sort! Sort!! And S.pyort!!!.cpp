def sort_key(a):
	r=mod(a,m)
	
	if a%2!=0:
		odd_first=0
	else:
		odd_first=1

	if a%2!=0:
		last=-a
	else:
		last=a

	return (r,odd_first,last)

def mod(a,m):
	r=a%m
	if a<0 and r>0:
		r-=m
	return r

while True:
	n,m=map(int,input().split())
	print(n,m)
	if n==0 and m==0:
		break
		
	numList=[]
	
	for _ in range(n):
		num=int(input())
		numList.append(num)
	
	numList=sorted(numList,key=sort_key)
	
	for i in numList:
		print(i)
