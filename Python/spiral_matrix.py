def spiral_order(matrix):
    result = []
    top, bottom = 0, len(matrix)
    left, right = 0, len(matrix[0])

    while top < bottom and left < right:
        for i in range(left, right):
            result.append(matrix[top][i])
        top += 1

        for i in range(top, bottom):
            result.append(matrix[i][right - 1])
        right -= 1

        if top < bottom:
            for i in range(right - 1, left - 1, -1):
                result.append(matrix[bottom - 1][i])
            bottom -= 1

        if left < right:
            for i in range(bottom - 1, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

# Input from user
r = int(input("Enter number of rows: "))
c = int(input("Enter number of columns: "))
matrix = []

print("Enter matrix row by row:")
for i in range(r):
    row = list(map(int, input().split()))
    matrix.append(row)

print("Spiral order:", spiral_order(matrix))
