def is_identity(matrix):
    size = len(matrix)
    for i in range(size):
        for j in range(size):
            if (i == j and matrix[i][j] != 1) or (i != j and matrix[i][j] != 0):
                return False
    return True

# Example
identity = [
    [1, 0, 0],
    [0, 1, 0],
    [0, 0, 1]
]

print("Is identity matrix:", is_identity(identity))  # Output: True
