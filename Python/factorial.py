# Factorial Calculation:
# Write a Python function to calculate the factorial of a non-negative integer.
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

# Example usage:
num = 5
result = factorial(num)
print(f"The factorial of {num} is {result}.")


