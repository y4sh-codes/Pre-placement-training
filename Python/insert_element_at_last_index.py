arr = []

n = int(input("Enter the size of the array: "))

for i in range(n):
    element = int(input(f"Enter element {i+1}: "))
    arr.append(element)

print(f"Initial array = {arr}")

ele = int(input("Enter the element you want at last index: "))

arr.append(ele)

print(f"Final array = {arr}")