
while True:

	top=1
	north=2
	west=3
	button=6
	south=5
	east=4
	
	try:
		n = int(input())
		if(n==0):
			break
		for _ in range(n):
			pos=input()
			if(pos=="north"):
				top,north,south,button = south,top,button,north
			if(pos=="east"):
				top,button,west,east = west,east,button,top
			if(pos=="south"):
				top,button,north,south=north,south,button,top
			if(pos=="west"):
				top,button,west,east = east,west,top,button
		print(top)

	except EOFError:
		break
			
	
