#https://codeforces.com/group/DA7Y6pkafQ/contest/455522/problem/A
#passed
x=str(bin(int(input())))[2:] 
c=0
tmp=[]
#print(x)
for i in x[::-1]:
	if i=="1":
		tmp.append(c+1)
	#print(i,c)
	c+=1
print(*tmp[::-1])
