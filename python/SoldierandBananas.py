#passed
#https://codeforces.com/group/hzSLIARNBN/contest/466525/problem/H
k,n,w=map(int,input().split()) 
g=(w*(w+1))/2
ans=(k*g)-n
if ans<0:print(0)
else:print(int(ans))