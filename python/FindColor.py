#passed
#https://codeforces.com/group/hzSLIARNBN/contest/466525/problem/L
from math import *
a,b=input().split()
a=int(a)
b=int(b)
r=sqrt(abs(a)**2+abs(b)**2) 
m=r%2
if m==1 or m==0:print("black")
else: 
	if m<1:
		if (a>0 and b>0) or (a<0 and b<0):print("black")
		else:print("white")
	else:
		if (a>0 and b>0) or (a<0 and b<0):print("white")
		else:print("black")