#passed
#https://codeforces.com/problemset/problem/112/A
str1=input()
str2=input()
if str1.lower()<str2.lower():print(-1)
if str1.lower()>str2.lower():print(1)
if str1.lower()==str2.lower():print(0)