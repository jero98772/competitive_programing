#https://codeforces.com/group/Ct1cN5bG36/contest/341452/problem/J
#passed
a,b=input().split()
print(a,b)
for i in range(int(input())):
	an,bn=input().split()	
	if an==a:a=bn
	elif an==b:b=bn
	elif bn==a:a=an
	elif bn==b:b=an
	print(a,b)