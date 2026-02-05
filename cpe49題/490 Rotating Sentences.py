lines=[]

while True:
	try:
		s=input()
		lines.append(s)
	except:
		break
		
maxLength=0

for line in lines:
	if len(line)>maxLength:
		maxLength=len(line)
		
for i in range(maxLength):
	s=""
	for j in range(len(lines)-1,-1,-1):
		if len(lines[j])>i:
			s+=lines[j][i]
		else:
			s+=" "
	print(s)
