#passed
#https://codeforces.com/group/hzSLIARNBN/contest/466525/problem/M
a,a2=map(int,input().split())
 
mul=a*a2
mod=mul%2
print((mul-mod)//2)