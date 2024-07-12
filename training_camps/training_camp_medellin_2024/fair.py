n=int(input())
for i in range(n):
	a=list(map(int,input().split()))
	b=a.copy()
	b.sort()
	#print(a,b)
	if (max(b[0],b[1]) == max(a[0],a[1]) and max(b[2],b[3]) == max(a[2],a[3])) or (max(b[0],b[1]) == max(a[2],a[3]) and max(b[2],b[3]) == max(a[0],a[1])):
		print("NO")
	else:
		print("YES")