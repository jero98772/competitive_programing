#https://codeforces.com/problemset/problem/785/A
#pased
a=input()
c=0
for i in range(int(a)):
	im=input()
	if im=="Tetrahedron":c+=4
	if im=="Cube":c+=6
	if im=="Octahedron":c+=8
	if im=="Dodecahedron":c+=12
	if im=="Icosahedron":c+=20
print(c)