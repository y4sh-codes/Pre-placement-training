def sum_of_diagonals(matrix):
    n = len(matrix)
    main_diag = sum(matrix[i][i] for i in range(n))
    anti_diag = sum(matrix[i][n - 1 - i] for i in range(n))
    
    if n % 2 == 1:
        center = matrix[n // 2][n // 2]
        return main_diag + anti_diag - center
    else:
        return main_diag + anti_diag

# Input from user
n = int(input("Enter size of square matrix (n x n): "))
matrix = []

print("Enter matrix row by row:")
for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

print("Sum of diagonals:", sum_of_diagonals(matrix))
