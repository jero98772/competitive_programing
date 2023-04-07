#https://codeforces.com/problemset/problem/1352/A
#pased
t=int(input())
for i in range(t):
	text=input()
	te=text.replace("0","")
	print(len(te))
	for x in range(1,len(text)+1):
		x=x*-1
		if(text[x]!="0"):
			print(int(text[x])*10**(abs(x)-1),end=" ")
	print()
