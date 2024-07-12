a=int(input())
for i in range(a):
	a,b=input().split()
	a=int(a)
	b=int(b)
	allt=a+b//4
	mint=min(a,b)
	print(min(allt,mint))