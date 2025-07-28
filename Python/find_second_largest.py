def find_second_largest(arr, n):
    if n < 2:
        return -1
    first = second = float('-inf')
    for i in range(n):
        if arr[i] > first:
            second = first
            first = arr[i]
        elif arr[i] > second and arr[i] != first:
            second = arr[i]
    return second

if __name__ == "__main__":
    arr = [12, 35, 1, 10, 34, 1]
    n = len(arr)
    print(f"Second largest element: {find_second_largest(arr, n)}")