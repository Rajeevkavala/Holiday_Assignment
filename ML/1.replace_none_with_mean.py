def replace_none_with_mean(numbers):
    # Filter out the None values to calculate the mean of the non-missing numbers
    non_missing_numbers = [num for num in numbers if num is not None]
    
    # Calculate the mean of the non-missing numbers
    mean_value = sum(non_missing_numbers) / len(non_missing_numbers) if non_missing_numbers else 0
    
    # Replace None with the mean value
    return [mean_value if num is None else num for num in numbers]

# Example usage
input_list = [10, None, 30, None, 50]
output_list = replace_none_with_mean(input_list)
print(output_list)
