def gcd(a,b):
	if (b==0):
		return a
	else:
		return gcd(b,a%b)
 
 
test = int(raw_input())
for i in range(test):
	a,b = map(int,raw_input().split())
	print gcd(a,b) 
