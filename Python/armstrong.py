# Checking if a Number is Armstrong or Not:

# An Armstrong number (also known as a narcissistic number or pluperfect digital invariant) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.


def is_armstrong_number(number):
    num_str = str(number)
    num_digits = len(num_str)
    sum_of_powers = sum(int(digit) ** num_digits for digit in num_str)
    return sum_of_powers == number

# Example usage:
num = 153
if is_armstrong_number(num):
    print(f"{num} is an Armstrong number.")
else:
    print(f"{num} is not an Armstrong number.")
