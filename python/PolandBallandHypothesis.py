#passed
#https://codeforces.com/problemset/problem/755/A
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

n = int(input())

m = 1
while True:
    result = n * m + 1
    if not is_prime(result):
        print(m)
        break
    m += 1