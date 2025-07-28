def find_largest(arr, n):
    if n == 0:
        return None
    largest = arr[0]
    for i in range(1, n):
        if arr[i] > largest:
            largest = arr[i]
    return largest

if __name__ == "__main__":
    arr = [45, 87, 23, 90, 12, 56, 34]
    n = len(arr)
    
    result = find_largest(arr, n)
    if result is not None:
        print(f"Largest element: {result}")
    else:
        print("Array is empty")