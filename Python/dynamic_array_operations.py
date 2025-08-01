def insert_element(arr, element):
    arr.append(element)

def delete_element(arr, index):
    if 0 <= index < len(arr):
        arr.pop(index)

def search_element(arr, target):
    return target in arr

# Example
arr = []
insert_element(arr, 10)
insert_element(arr, 20)
delete_element(arr, 0)

print("Array:", arr)
print("Search 20:", search_element(arr, 20))  # Output: True
