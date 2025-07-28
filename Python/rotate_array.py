def reverse(arr, start, end):
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1

def rotate(arr, n, k):
    k = k % n
    reverse(arr, 0, k-1)
    reverse(arr, k, n-1)
    reverse(arr, 0, n-1)
    return arr

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5]
    n = len(arr)
    k = 2
    result = rotate(arr.copy(), n, k)
    print(f"Rotated array: {result}")