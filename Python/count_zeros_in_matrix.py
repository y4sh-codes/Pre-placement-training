def count_zeros(matrix):
    return sum(row.count(0) for row in matrix)

# Example
matrix = [
    [1, 0, 3],
    [4, 5, 0],
    [0, 0, 9]
]

print("Zero count:", count_zeros(matrix))  # Output: 4
