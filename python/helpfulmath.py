a=list(map(int,input().split("+")))
a.sort()
print(a[0],end="")
for i in a[1:]:
	print("+"+str(i),end="")