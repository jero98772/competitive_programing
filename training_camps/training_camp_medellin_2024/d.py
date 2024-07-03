def max_phone_numbers(n, digits):
    count_8 = digits.count('8')
    max_sets_of_11 = n // 11
    return min(count_8, max_sets_of_11)

# Example usage:
n = int(input())
digits = input().strip()
print(max_phone_numbers(n, digits))
