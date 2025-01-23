def min_max_scale(numbers):
    # Find the minimum and maximum values in the list
    min_value = min(numbers)
    max_value = max(numbers)
    
    # Apply Min-Max scaling formula to each number in the list
    scaled_numbers = [(x - min_value) / (max_value - min_value) for x in numbers]
    
    return scaled_numbers

# Example usage
input_list = [20, 40, 60, 80, 100]
scaled_list = min_max_scale(input_list)
print(scaled_list)
