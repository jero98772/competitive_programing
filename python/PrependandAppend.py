#https://codeforces.com/contest/1791/problem/C
#pased
for i in range(int(input())):
    a=input()
    b=input()
    count=0
    while(b[0]=="0" and b[-1]=="1") or (b[0]=="1" and b[-1]=="0"):
        b=b[1:-1]
        if len(b)==0:
            break
    print(len(b))