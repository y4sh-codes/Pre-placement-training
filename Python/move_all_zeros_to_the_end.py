def move_zeros_to_end(arr):
    count = 0  # Index to place non-zero elements

    for i in range(len(arr)):
        if arr[i] != 0:
            arr[count] = arr[i]
            count += 1

    # Fill the rest with zeros
    while count < len(arr):
        arr[count] = 0
        count += 1

    return arr

arr = [0, 1, 0, 3, 12, 0, 5]
result = move_zeros_to_end(arr)
print("List after moving zeros to the end:", result)
