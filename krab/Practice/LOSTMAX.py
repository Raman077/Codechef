p=int(input())
while p>0:
    x=input()
    arr=x.split()
    arr=[int(y) for y in arr]
    c=len(arr)-1
    m=0
    flag=0
    for i in range(c+1):
        if arr[i]==c:
            arr[i]=0
            break
    arr.sort()
    print(arr[c])
    p-=1
	
 
