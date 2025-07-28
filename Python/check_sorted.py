def is_sorted(arr, n):
    for i in range(1, n):
        if arr[i] < arr[i-1]:
            return False
    return True

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5]
    n = len(arr)
    result = "sorted" if is_sorted(arr, n) else "not sorted"
    print(f"Array is {result}")