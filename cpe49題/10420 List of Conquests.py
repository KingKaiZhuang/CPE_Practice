n=int(input())

country={}
for _ in range(n):
	s=input().split()

	if s[0] in country:
		country[s[0]]+=1
	else:
		country[s[0]]=1

countryOrder=sorted(country)

for c in countryOrder:
	print(c,country[c])
