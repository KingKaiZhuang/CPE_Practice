while True:
	try:
		x1,y1,x2,y2,x3,y3,x4,y4=map(float,input().split())
		
		x=x1+x2+x3+x4
		y=y1+y2+y3+y4
		
		if (x1==x3 and y1==y3) or (x1==x4 and y1==y4):
			x=x-x1*3
			y=y-y1*3
		else:
			x=x-x2*3
			y=y-y2*3
		
		print(f"{x:.3f} {y:.3f}")
	except EOFError:
		break
