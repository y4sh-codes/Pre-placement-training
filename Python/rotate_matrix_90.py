def rotate_90(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    for row in matrix:
        row.reverse()
    return matrix

# Input from user
n = int(input("Enter size of square matrix (n x n): "))
matrix = []

print("Enter matrix row by row:")
for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

rotated = rotate_90(matrix)
print("Matrix after 90° rotation:")
for row in rotated:
    print(*row)
