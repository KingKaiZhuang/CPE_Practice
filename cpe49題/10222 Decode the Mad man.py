keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"

while True:
    try:
        s=input().lower()
    except EOFError:
        break
    
    for c in s:
    	index=keyboard.find(c)
    	if index!=-1:
    		print(keyboard[index-2],end="")
    		continue
    	else:
    		print(" ",end="")
	    	
    print()
