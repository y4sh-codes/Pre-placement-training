def multiply_polynomials(p1, p2):
    result = [0] * (len(p1) + len(p2) - 1)
    
    for i in range(len(p1)):
        for j in range(len(p2)):
            result[i + j] += p1[i] * p2[j]
    
    return result

# Example
poly1 = [2, 0, 3]  # 2 + 0x + 3x^2
poly2 = [1, 4]     # 1 + 4x

print("Product:", multiply_polynomials(poly1, poly2))  # Output: [2, 8, 3, 12]
