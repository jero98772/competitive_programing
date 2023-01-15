#https://codeforces.com/contest/1760/problem/C
a=input()
for _ in range(int(a)):
	input()
	nums=list(map(int,input().split()))
	nums2=nums.copy()
	al=True
	nm=max(nums)
	for i in range(len(nums2)):
		if nums[i]==nm and al:
			nums2.remove(nm)
			print(nums[i]-max(nums2),end=" ")	
			al=False	 
		else:
			print(nums[i]-nm,end=" ")
	print("")
	#map(f,nums,max(nums))