n=int(input())

if n>4:
	lp=list(range(n,0,-2))
	#print(lp)
	li=list(range(n-1,0,-2))
	ans=li+lp
	print(*ans)
elif n==4:
	print("2 4 1 3")
elif n==1:
	print("1")
else:
	print("NO SOLUTION")