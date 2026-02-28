def sort_key(a):
	return(-record[a],ord(a))

n=int(input())
sList=[]

for i in range(n):
	sList.append(input().strip().upper())

record={}
alList=[]
for j in sList:
	for k in range(len(j)):
		if j[k]=="":
			continue
		if not j[k].isalpha():
			continue			
		if j[k] not in record:
			record[j[k]]=1
			alList.append(j[k])
		else:
			record[j[k]]+=1
			
alList.sort(key=sort_key)

for i in alList:
	print(f"{i} {record[i]}")
