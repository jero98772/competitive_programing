#https://codeforces.com/contest/1760/problem/B
a=input()
for _ in range(int(a)):
	input()
	leters=input()
	l=[]
	for i in leters:
		l.append(abs(ord("a")-ord(i))+1)
	print(max(l))