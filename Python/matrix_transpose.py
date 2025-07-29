def transpose(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    transposed = [[0] * rows for _ in range(cols)]

    for i in range(rows):
        for j in range(cols):
            transposed[j][i] = matrix[i][j]

    return transposed

# Input from user
r = int(input("Enter number of rows: "))
c = int(input("Enter number of columns: "))
matrix = []

print("Enter matrix row by row:")
for i in range(r):
    row = list(map(int, input().split()))
    matrix.append(row)

result = transpose(matrix)
print("Transposed Matrix:")
for row in result:
    print(*row)
