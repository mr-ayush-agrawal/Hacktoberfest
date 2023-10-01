# Linear Search in an Array:

# Linear search is a simple search algorithm that checks each element in a list or array until a match is found.

def linear_search(arr, target):
    for i, element in enumerate(arr):
        if element == target:
            return i  # Return the index if the target is found
    return -1  # Return -1 if the target is not found

# Example usage:
my_array = [3, 5, 1, 9, 2, 7]
target_value = 2
result = linear_search(my_array, target_value)
if result != -1:
    print(f"Found {target_value} at index {result}.")
else:
    print(f"{target_value} not found in the array.")
