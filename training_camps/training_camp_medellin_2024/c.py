n=int(input())
l=list(map(int,input().split()))
dif=0
total=0
for i in range(1,len(l)):
	if(l[i-1]>l[i]):
		dif=l[i-1]-l[i]
		l[i]+=dif
		total+=dif		
print(total)