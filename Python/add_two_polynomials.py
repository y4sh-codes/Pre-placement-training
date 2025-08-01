def add_polynomials(p1, p2):
    length = max(len(p1), len(p2))
    result = [0] * length

    for i in range(len(p1)):
        result[i] += p1[i]

    for i in range(len(p2)):
        result[i] += p2[i]

    return result

# Example
poly1 = [3, 4, 5]  # 3 + 4x + 5x^2
poly2 = [1, 2]     # 1 + 2x

print("Sum:", add_polynomials(poly1, poly2))  # Output: [4, 6, 5]
