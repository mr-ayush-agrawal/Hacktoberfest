# Fibonacci Sequence:
# Write a Python function to generate the Fibonacci sequence up to a given number of terms.
def fibonacci(n):
    fib_sequence = [0, 1]
    while len(fib_sequence) < n:
        next_term = fib_sequence[-1] + fib_sequence[-2]
        fib_sequence.append(next_term)
    return fib_sequence

# Example usage:
num_terms = 10
fib_sequence = fibonacci(num_terms)
print(f"The Fibonacci sequence up to {num_terms} terms: {fib_sequence}")
