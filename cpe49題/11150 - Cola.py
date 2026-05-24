while True:
    try:
        n=int(input())
        cola=n
        emp=n
        
        while emp>=3:
            newCola=emp//3
            remains=emp%3
            cola+=newCola
            emp=newCola+remains
        
        if emp==2:
            cola+=1
        print(cola)
    except EOFError:
        break
