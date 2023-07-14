from math import log 
equipos,equipo1,equipo2=map(int,input().split())
#equipostodos=range(equipos)
l=0
r=equipos
mid=(l+r)//2+0.5
contador=0
while not (equipo2<mid<equipo1 or equipo1<mid<equipo2):
	#print(equipo2)
	if mid<equipo1 and mid<equipo2:
		l=int(mid)+1
		mid=(l+r)//2+0.5
		contador+=1
	elif mid>equipo1 and mid>equipo2:
		r=int(mid)
		mid=(l+r)//2+0.5
		contador+=1
	else:
		break
n=log(equipos,2)
if contador==0:
	print("Final!")
else:
	print(int(n-contador))