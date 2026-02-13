while True:
	try:
		cola=int(input())
	except EOFError:
		break

	n=cola+1
	bottle=0
	while n>=3:
		bottle=n%3
		n//=3
		cola+=n
		n+=bottle
	print(cola)
