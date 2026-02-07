dirs=["N","E","S","W"]
pos={
	"N":(0,1),
	"E":(1,0),
	"S":(0,-1),
	"W":(-1,0)
}

max_x,max_y=map(int,input().split())
scent=[]

while True:
	try:
		x,y,d=input().split()
		x,y,d=int(x),int(y),str(d)
		s=input()
		lost=False
	except EOFError:
		break
	
	for c in s:
		if c=="R":		
			d=dirs[(dirs.index(d)+1)%4]
		elif c=="L":
			d=dirs[(dirs.index(d)-1)%4]			
		else:
			addX,addY=pos[d]
			endX=x+addX
			endY=y+addY
			
			if endX<0 or endX>max_x or endY<0 or endY>max_y:
				if [x,y,d] in scent:
					continue
				else:
					scent.append([x,y,d])
					lost=True
					break
			
			x=endX
			y=endY
	
	if lost:
		print(x,y,d,"LOST")
	else:
		print(x,y,d)
