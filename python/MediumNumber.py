#https://codeforces.com/contest/1760/problem/A
a=input()
for _ in range(int(a)):
	nums=list(map(int,input().split()))
	nums.remove(max(nums))	
	nums.remove(min(nums))
	print(nums[0])