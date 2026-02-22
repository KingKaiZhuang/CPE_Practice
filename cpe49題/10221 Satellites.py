import math

while True:
	try:
		s,a,c=input().split()
	except EOFError:
		break

	s=int(s)
	a=int(a)

	if c=="min":
		a/=60

	if a > 180:
		a=360-a
		
	r=6440+s
	arc=2*r*math.pi*(a/360)
	
	ang=a*(math.pi/180)
	chord=r*(math.sin(ang/2))*2
	print(f"{arc:.6f} {chord:.6f}")
