#https://codeforces.com/contest/1772/problem/C
#passed
def solve():
	e,m=map(int,input().split())
	prod=0
	vec=[0]*e
	for i in range(e,0,-1):
		#print(i)
		vec[e-i]=i
		prod+=(e-i)*i
	#print(prod)
	prod-=(((e)*(e-1))/2)
	cont=0
	#print(vec,prod)
	for t in range(1,e-1):
		for i in range(t):
			for j in range(i+1):
				#print(vec[0])
				if vec[0]>=m or cont>=prod:
					return vec
					break;break;break
				cont+=1
				vec[i-j]+=1
	return vec
for i in range(int(input())):
	print(*reversed(solve()))