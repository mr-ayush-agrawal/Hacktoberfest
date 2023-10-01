# Palindrome Check:
# Write a Python function to check if a given string is a palindrome (reads the same forwards and backwards).
def is_palindrome(s):
    s = s.lower().replace(" ", "")  # Convert to lowercase and remove spaces
    return s == s[::-1]

# Example usage:
word = "racecar"
if is_palindrome(word):
    print(f"{word} is a palindrome.")
else:
    print(f"{word} is not a palindrome.")
