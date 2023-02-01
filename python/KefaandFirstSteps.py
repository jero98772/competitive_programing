#https://codeforces.com/problemset/problem/580/A
#passed
a=int(input())
nums=list(map(int,input().split()))
tmppos=0
poss=[]
for i in range(a-1):
	if nums[i]<=nums[i+1]:
		tmppos+=1
	else:
		poss.append(tmppos)
		tmppos=0
poss.append(tmppos)
print(max(poss)+1)