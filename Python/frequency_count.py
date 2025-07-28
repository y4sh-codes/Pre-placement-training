def count_frequency(arr, n):
    freq = {}
    for i in range(n):
        freq[arr[i]] = freq.get(arr[i], 0) + 1
    
    print("Element : Frequency")
    for key, value in freq.items():
        print(f"{key} : {value}")

if __name__ == "__main__":
    arr = [1, 2, 2, 3, 1, 4, 4, 5]
    n = len(arr)
    count_frequency(arr, n)