def reverse_string(s, n):
    s = list(s)
    left, right = 0, n-1
    while left < right:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1
    return ''.join(s)

if __name__ == "__main__":
    s = input("Enter a string: ")
    n = len(s)
    result = reverse_string(s, n)
    print(f"Reversed string: {result}")