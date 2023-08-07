from math import *
abc="abcdefghijklmnopqrstuvwxyz"
s=input()
start="a"
ss=0
mias=lambda x :abs(ord(x)-ord("a"))+1
for i in s:
	if mias(start)>=mias(i):
		a=len(abc)-mias(start)+mias(i)
		b=mias(start)-mias(i)	
	elif mias(i)>mias(start):
		a=mias(i)-mias(start)
		b=len(abc)-mias(i)+mias(start)
	
	ss+=min(a,b)
	start=i
	#print(a,b)
print(ss)