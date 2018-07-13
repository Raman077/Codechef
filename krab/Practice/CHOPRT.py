p=int(input())
while p>0:
    r,q=map(int,input().split())
    if r == q:
        print("=")
 
    elif(r > q):
        print(">")
 
    else:
        print("<")
 
 
    p-=1
    
 
