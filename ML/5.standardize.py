import math

def standardize(numbers):
    # Calculate the mean
    mean = sum(numbers) / len(numbers)
    
    # Calculate the standard deviation
    variance = sum((x - mean) ** 2 for x in numbers) / len(numbers)
    std_dev = math.sqrt(variance)
    
    # Standardize each number
    standardized_numbers = [(x - mean) / std_dev for x in numbers]
    
    return standardized_numbers

# Example input list
numbers = [10, 20, 30, 40]

# Calling the function with the input
standardized_list = standardize(numbers)

print(standardized_list)
