def is_palindrome(s, n):
    left, right = 0, n-1
    while left < right:
        if s[left] != s[right]:
            return False
        left += 1
        right -= 1
    return True

if __name__ == "__main__":
    s = input("Enter a string: ")
    n = len(s)
    result = "is" if is_palindrome(s, n) else "is not"
    print(f"String {result} a palindrome")