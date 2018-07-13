a=[[0,0]]
for i in range(1,1000000):
	if i%3==1:
		a.append([a[-1][0]+1,a[-1][1]])
	else:
		a.append([a[-1][0],a[-1][1]+1])
	
i=int(input())
while i>0:
	x=int(input())
	print(" ".join(str(p) for p in a[x]))
	i-=1
		
 
 
	
	
 
