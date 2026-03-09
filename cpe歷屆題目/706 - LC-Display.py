led = {
    '0': "1110111",
    '1': "0010010",
    '2': "1011101",
    '3': "1011011",
    '4': "0111010",
    '5': "1101011",
    '6': "1101111",
    '7': "1010010",
    '8': "1111111",
    '9': "1111011"
}

while True:
	try:
		line=input().split()
		
		s=int(line[0])
		n=line[1]
		
		if s==0 and n=="0":
			break
		
		for row in range(2*s+3):
			row_output=[]
			
			for digit in n:
				pattern=led[digit]
				
				if row==0:
					if pattern[0]=='1':
						piece=" "+"-"*s+" "
					else:
						piece=" "+" "*s+" "
						
				elif 1<=row<=s:
					left="|" if pattern[1]=='1' else " "
					right="|" if pattern[2]=='1' else " "
					piece=left+" "*s+right
										
				elif row==s+1:
					if pattern[3]=='1':
						piece=" "+"-"*s+" "
					else:
						piece=" "+" "*s+" "
						
				elif s+2<=row<=2*s+1:
					left="|" if pattern[4]=='1' else " "
					right="|" if pattern[5]=='1' else " "
					piece=left+" "*s+right
					
				elif row==2*s+2:
					if pattern[6]=='1':
						piece=" "+"-"*s+" "
					else:
						piece=" "+" "*s+" "
				
				row_output.append(piece)
			
			print(*row_output)
		print()
	except EOFError:
		break
