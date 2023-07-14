#https://codeforces.com/group/DA7Y6pkafQ/contest/455522/problem/E
#passed
def main():
    s = input()
    t = input()
    m = {}
    v = []
    
    for i in range(len(s)):
        if s[i] in m or t[i] in m:
            if not (m.get(s[i]) == t[i] and m.get(t[i]) == s[i]):
                print(-1)
                return
        else:
            m[s[i]] = t[i]
            m[t[i]] = s[i]
            if s[i] != t[i]:
                v.append((s[i], t[i]))
    
    print(len(v))
    for pair in v:
        print(pair[0], pair[1])

if __name__ == "__main__":
    main()
