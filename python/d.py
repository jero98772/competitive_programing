#https://codeforces.com/group/DA7Y6pkafQ/contest/455522/problem/D
#passed
c=int(input())
import math
lista=[1,2,3,5,7,11]
for i in range(c):
	fail=True
	x=int(input())
	for z in lista:
		if x==z:
			print("-1")
			fail=False
			break
	if fail:
		if (x%4==0 or x%4==2):
			print(str(math.floor(x/4)))
		elif(x%4==1):
			print(str(math.floor(x/4)-1))
		elif(x%4==3):
			print(str(math.floor(x/4)-1))





