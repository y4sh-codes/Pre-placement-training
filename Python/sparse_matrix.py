def is_sparse(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    total = rows * cols
    count = 0

    for row in matrix:
        for val in row:
            if val == 0:
                count += 1

    return count > total / 2

# Input from user
r = int(input("Enter number of rows: "))
c = int(input("Enter number of columns: "))
matrix = []

print("Enter matrix row by row:")
for i in range(r):
    row = list(map(int, input().split()))
    matrix.append(row)

print("Matrix is Sparse:" if is_sparse(matrix) else "Matrix is Not Sparse")
