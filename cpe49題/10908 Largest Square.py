def isLargest(x,y,grid,add):
	global h,w
	
	top=x-add
	bottom=x+add
	left=y-add
	right=y+add
	
	if top<0 or bottom>=h or left<0 or right>=w:
		return False
	
	for i in range(top,bottom+1):
		for j in range(left,right+1):
			#print(f"i = {i}, j = {j}")
			if grid[i][j]!=grid[x][y]:
				return False
	return True

n=int(input())

for _ in range(n):
	h,w,c=map(int,input().split())
	print(h,w,c)
	
	grid=[]
	
	for _ in range(h):
		s=input().strip()
		grid.append(s)
	#print(grid)
	
	
	
	for _ in range(c):
		x,y=map(int,input().split())
		#print(x,y)
		add=0
		while isLargest(x,y,grid,add):
			add=add+1
			
		print((add-1)*2+1)
			
