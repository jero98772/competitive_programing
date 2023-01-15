#https://codeforces.com/group/Ct1cN5bG36/contest/340468/problem/F
#passed
auxarr=[]
for i in input():
	if not i in auxarr:
		auxarr.append(i)
if len(auxarr)%2==0:print("CHAT WITH HER!")
else:print("IGNORE HIM!")