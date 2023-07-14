#https://codeforces.com/group/DA7Y6pkafQ/contest/455522/problem/F
#passed
x=[]#ls[sets]
input()
en=input().split()
for i in en:
	tmp=set(i)
	if not tmp in x:
		x.append(tmp)
print(len(x))

"""
5
a aa aaa ab abb
"""